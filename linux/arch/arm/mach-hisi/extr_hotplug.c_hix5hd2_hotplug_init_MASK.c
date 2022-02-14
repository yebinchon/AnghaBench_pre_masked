
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (struct device_node*,int ) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static bool FUNC_3(void)
{
 struct device_node *VAR_1;

 VAR_1 = FUNC_0(((void*)0), ((void*)0), "hisilicon,cpuctrl");
 if (!VAR_1)
  return 0;

 VAR_0 = FUNC_1(VAR_1, 0);
 FUNC_2(VAR_1);
 if (!VAR_0)
  return 0;

 return 1;
}
