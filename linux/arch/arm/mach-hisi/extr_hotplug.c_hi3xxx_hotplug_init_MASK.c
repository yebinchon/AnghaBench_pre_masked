
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct device_node* FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (struct device_node*,int ) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct device_node *VAR_6;

 VAR_6 = FUNC_0(((void*)0), ((void*)0), "hisilicon,sysctrl");
 if (!VAR_6) {
  VAR_5 = VAR_2;
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_6, 0);
 FUNC_2(VAR_6);
 if (!VAR_4) {
  VAR_5 = VAR_2;
  return -VAR_1;
 }

 VAR_5 = VAR_3;
 return 0;
}
