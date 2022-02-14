
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nat64clat_cfg {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_5__ {int addr_type; scalar_t__ proto; } ;
struct ip_fw_args {int * m; TYPE_1__ f_id; } ;
struct TYPE_6__ {scalar_t__ opcode; scalar_t__ arg1; } ;
typedef TYPE_2__ ipfw_insn ;


 int FUNC_0 (struct ip_fw_chain*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nat64clat_cfg* FUNC_1 (struct ip_fw_chain*,TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ip_fw_chain*,struct nat64clat_cfg*,int *) ;
 int FUNC_4 (struct ip_fw_chain*,struct nat64clat_cfg*,int *) ;
 int FUNC_5 (struct ip_fw_chain*,struct nat64clat_cfg*,int *) ;

int
FUNC_6(struct ip_fw_chain *VAR_7, struct ip_fw_args *VAR_8,
    ipfw_insn *VAR_9, int *VAR_10)
{
 ipfw_insn *VAR_11;
 struct nat64clat_cfg *VAR_12;
 int VAR_13;

 FUNC_0(VAR_7);

 *VAR_10 = 0;
 VAR_11 = VAR_9 + 1;
 if (VAR_9->opcode != VAR_4 ||
     VAR_9->arg1 != VAR_6 ||
     VAR_11->opcode != VAR_5 ||
     (VAR_12 = FUNC_1(VAR_7, VAR_11)) == ((void*)0))
  return (0);

 switch (VAR_8->f_id.addr_type) {
 case 4:
  VAR_13 = FUNC_4(VAR_7, VAR_12, VAR_8->m);
  break;
 case 6:
  VAR_13 = FUNC_5(VAR_7, VAR_12, VAR_8->m);
  break;
 default:
  return (0);
 }

 if (VAR_13 == VAR_3) {





  if (VAR_8->f_id.proto != VAR_0)
   return (0);

  VAR_13 = FUNC_3(VAR_7, VAR_12, VAR_8->m);
 }

 if (VAR_13 == VAR_3)
  return (0);

 *VAR_10 = 1;
 if (VAR_13 == VAR_2)
  FUNC_2(VAR_8->m);

 VAR_8->m = ((void*)0);
 return (VAR_1);
}
