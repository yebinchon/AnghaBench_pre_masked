
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockopt_data {int valsize; } ;
struct ip_fw_chain {int dummy; } ;
typedef int ipfw_obj_ntlv ;
struct TYPE_2__ {int size; int count; int objsize; } ;
typedef TYPE_1__ ipfw_obj_lheader ;
typedef int ip_fw3_opheader ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct sockopt_data*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,struct sockopt_data*) ;

__attribute__((used)) static int
FUNC_6(struct ip_fw_chain *VAR_3, ip_fw3_opheader *VAR_4,
    struct sockopt_data *VAR_5)
{
 ipfw_obj_lheader *VAR_6;
 int VAR_7;

 VAR_6 = (ipfw_obj_lheader *)FUNC_3(VAR_5, sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_3);
 VAR_7 = FUNC_4(FUNC_0(VAR_3));
 VAR_6->size = sizeof(ipfw_obj_lheader) + VAR_7 * sizeof(ipfw_obj_ntlv);
 if (VAR_5->valsize < VAR_6->size) {
  FUNC_2(VAR_3);
  return (VAR_1);
 }
 VAR_6->count = VAR_7;
 VAR_6->objsize = sizeof(ipfw_obj_ntlv);
 if (VAR_7 > 0)
  FUNC_5(FUNC_0(VAR_3),
      VAR_2, VAR_5);
 FUNC_2(VAR_3);
 return (0);
}
