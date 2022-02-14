
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt_data {scalar_t__ valsize; } ;
struct ip_fw_chain {int dummy; } ;
struct _ipfw_obj_lheader {scalar_t__ size; } ;
typedef int ip_fw3_opheader ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*,struct _ipfw_obj_lheader*,struct sockopt_data*) ;
 scalar_t__ FUNC_3 (struct sockopt_data*,int) ;

__attribute__((used)) static int
FUNC_4(struct ip_fw_chain *VAR_1, ip_fw3_opheader *VAR_2,
    struct sockopt_data *VAR_3)
{
 struct _ipfw_obj_lheader *VAR_4;
 int VAR_5;

 VAR_4 = (struct _ipfw_obj_lheader *)FUNC_3(VAR_3,sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 if (VAR_3->valsize < VAR_4->size)
  return (VAR_0);

 FUNC_0(VAR_1);
 VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_3);
 FUNC_1(VAR_1);

 return (VAR_5);
}
