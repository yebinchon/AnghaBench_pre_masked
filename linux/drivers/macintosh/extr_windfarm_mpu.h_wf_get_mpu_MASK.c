
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void mpu_data ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (char*) ;
 void* FUNC_1 (struct device_node*,char*,int*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static inline const struct mpu_data *FUNC_4(int VAR_0)
{
 struct device_node *VAR_1;
 char VAR_2[64];
 const void *VAR_3;
 int VAR_4;






 FUNC_3(VAR_2, "/u3@0,f8000000/i2c@f8001000/cpuid@a%d", VAR_0 ? 2 : 0);
 VAR_1 = FUNC_0(VAR_2);
 if (!VAR_1)
  return ((void*)0);
 VAR_3 = FUNC_1(VAR_1, "cpuid", &VAR_4);
 FUNC_2(VAR_1);
 if (!VAR_3)
  return ((void*)0);







 return VAR_3;
}
