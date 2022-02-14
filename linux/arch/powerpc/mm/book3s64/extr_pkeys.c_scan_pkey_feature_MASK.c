
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 u32 VAR_2[2];
 struct device_node *VAR_3;

 VAR_3 = FUNC_0(((void*)0), "cpu");
 if (!VAR_3)
  return;

 if (FUNC_1(VAR_3,
   "ibm,processor-storage-keys", VAR_2, 2))
  return;





 VAR_1 = VAR_2[0];
 VAR_0 = 1;
}
