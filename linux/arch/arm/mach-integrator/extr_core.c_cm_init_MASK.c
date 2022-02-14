
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 struct device_node* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct device_node*,int ) ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{
 struct device_node *VAR_2 = FUNC_1(((void*)0), VAR_1);

 if (!VAR_2) {
  FUNC_3("no core module node found in device tree\n");
  return;
 }
 VAR_0 = FUNC_2(VAR_2, 0);
 if (!VAR_0) {
  FUNC_3("could not remap core module\n");
  return;
 }
 FUNC_0();
}
