
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockopt_data {int valsize; } ;
struct nptv6_dump_arg {struct sockopt_data* sd; struct ip_fw_chain* ch; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_2__ {int count; int objsize; int size; } ;
typedef TYPE_1__ ipfw_obj_lheader ;
typedef int ipfw_nptv6_cfg ;
typedef int ip_fw3_opheader ;
typedef int da ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct sockopt_data*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,struct nptv6_dump_arg*,int ) ;
 int FUNC_6 (struct nptv6_dump_arg*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct ip_fw_chain *VAR_4, ip_fw3_opheader *VAR_5,
    struct sockopt_data *VAR_6)
{
 ipfw_obj_lheader *VAR_7;
 struct nptv6_dump_arg VAR_8;


 if (VAR_6->valsize < sizeof(ipfw_obj_lheader))
  return (VAR_0);

 VAR_7 = (ipfw_obj_lheader *)FUNC_3(VAR_6, sizeof(*VAR_7));

 FUNC_1(VAR_4);
 VAR_7->count = FUNC_4(FUNC_0(VAR_4),
     VAR_2);
 VAR_7->objsize = sizeof(ipfw_nptv6_cfg);
 VAR_7->size = sizeof(*VAR_7) + VAR_7->count * VAR_7->objsize;

 if (VAR_6->valsize < VAR_7->size) {
  FUNC_2(VAR_4);
  return (VAR_1);
 }
 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.ch = VAR_4;
 VAR_8.sd = VAR_6;
 FUNC_5(FUNC_0(VAR_4), VAR_3,
     &VAR_8, VAR_2);
 FUNC_2(VAR_4);

 return (0);
}
