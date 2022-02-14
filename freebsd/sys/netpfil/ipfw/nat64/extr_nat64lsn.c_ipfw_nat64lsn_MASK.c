
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; int plat_plen; int plat_prefix; } ;
struct nat64lsn_cfg {int nomatch_verdict; TYPE_1__ base; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_9__ {int addr_type; int dst_ip6; } ;
struct ip_fw_args {int * m; TYPE_3__ f_id; } ;
struct TYPE_8__ {scalar_t__ opcode; scalar_t__ arg1; } ;
typedef TYPE_2__ ipfw_insn ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nat64lsn_cfg* FUNC_1 (struct ip_fw_chain*,TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct nat64lsn_cfg*,TYPE_3__*,int **) ;
 int FUNC_5 (struct nat64lsn_cfg*,TYPE_3__*,int **) ;

int
FUNC_6(struct ip_fw_chain *VAR_6, struct ip_fw_args *VAR_7,
    ipfw_insn *VAR_8, int *VAR_9)
{
 struct nat64lsn_cfg *VAR_10;
 ipfw_insn *VAR_11;
 int VAR_12;

 FUNC_0(VAR_6);

 *VAR_9 = 0;
 VAR_11 = VAR_8 + 1;
 if (VAR_8->opcode != VAR_3 ||
     VAR_8->arg1 != VAR_5 ||
     VAR_11->opcode != VAR_4 ||
     (VAR_10 = FUNC_1(VAR_6, VAR_11)) == ((void*)0))
  return (VAR_0);

 *VAR_9 = 1;

 switch (VAR_7->f_id.addr_type) {
 case 4:
  VAR_12 = FUNC_4(VAR_10, &VAR_7->f_id, &VAR_7->m);
  break;
 case 6:



  if ((VAR_10->base.flags & VAR_2) == 0 &&
      FUNC_3(&VAR_7->f_id.dst_ip6, &VAR_10->base.plat_prefix,
      VAR_10->base.plat_plen / 8) != 0) {
   VAR_12 = VAR_10->nomatch_verdict;
   break;
  }
  VAR_12 = FUNC_5(VAR_10, &VAR_7->f_id, &VAR_7->m);
  break;
 default:
  VAR_12 = VAR_10->nomatch_verdict;
 }

 if (VAR_12 != VAR_1 && VAR_7->m != ((void*)0)) {
  FUNC_2(VAR_7->m);
  VAR_7->m = ((void*)0);
 }
 return (VAR_12);
}
