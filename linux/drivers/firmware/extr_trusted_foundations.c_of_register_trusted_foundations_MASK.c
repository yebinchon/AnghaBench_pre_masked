
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trusted_foundations_platform_data {int version_minor; int version_major; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct trusted_foundations_platform_data*) ;

void FUNC_4(void)
{
 struct device_node *VAR_0;
 struct trusted_foundations_platform_data VAR_1;
 int VAR_2;

 VAR_0 = FUNC_0(((void*)0), ((void*)0), "tlm,trusted-foundations");
 if (!VAR_0)
  return;

 VAR_2 = FUNC_1(VAR_0, "tlm,version-major",
       &VAR_1.version_major);
 if (VAR_2 != 0)
  FUNC_2("Trusted Foundation: missing version-major property\n");
 VAR_2 = FUNC_1(VAR_0, "tlm,version-minor",
       &VAR_1.version_minor);
 if (VAR_2 != 0)
  FUNC_2("Trusted Foundation: missing version-minor property\n");
 FUNC_3(&VAR_1);
}
