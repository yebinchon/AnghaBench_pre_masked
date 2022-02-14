
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct table_config {int dummy; } ;
struct sockopt_data {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct _ipfw_obj_header {int dummy; } ;
typedef int ipfw_xtable_info ;
typedef int ip_fw3_opheader ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*,struct table_config*,int *) ;
 struct table_config* FUNC_4 (int ,struct tid_info*) ;
 scalar_t__ FUNC_5 (struct sockopt_data*,size_t) ;
 int FUNC_6 (struct _ipfw_obj_header*,struct tid_info*) ;

__attribute__((used)) static int
FUNC_7(struct ip_fw_chain *VAR_2, ip_fw3_opheader *VAR_3,
    struct sockopt_data *VAR_4)
{
 struct _ipfw_obj_header *VAR_5;
 struct table_config *VAR_6;
 struct tid_info VAR_7;
 size_t VAR_8;

 VAR_8 = sizeof(*VAR_5) + sizeof(ipfw_xtable_info);
 VAR_5 = (struct _ipfw_obj_header *)FUNC_5(VAR_4, VAR_8);
 if (VAR_5 == ((void*)0))
  return (VAR_0);

 FUNC_6(VAR_5, &VAR_7);

 FUNC_1(VAR_2);
 if ((VAR_6 = FUNC_4(FUNC_0(VAR_2), &VAR_7)) == ((void*)0)) {
  FUNC_2(VAR_2);
  return (VAR_1);
 }

 FUNC_3(VAR_2, VAR_6, (ipfw_xtable_info *)(VAR_5 + 1));
 FUNC_2(VAR_2);

 return (0);
}
