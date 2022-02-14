
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun5_timer {int dummy; } ;
struct device_node {struct device_node* sibling; struct device_node* child; } ;


 struct device_node* FUNC_0 (char*) ;
 unsigned int* FUNC_1 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (char*) ;
 struct sun5_timer* VAR_0 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct device_node *VAR_1;
 const unsigned int *VAR_2;


 VAR_1 = FUNC_0("/");
 VAR_1 = VAR_1->child;
 while (VAR_1) {
  if (FUNC_2(VAR_1, "counter-timer"))
   break;
  VAR_1 = VAR_1->sibling;
 }




 if (!VAR_1) {
  VAR_0 = (struct sun5_timer *) 0;
  return;
 }


 VAR_2 = FUNC_1(VAR_1, "address", ((void*)0));
 if (!VAR_2) {
  FUNC_3("PROM does not have timer mapped, trying to continue.\n");
  VAR_0 = (struct sun5_timer *) 0;
  return;
 }
 VAR_0 = (struct sun5_timer *) ((unsigned long)VAR_2[0]);
}
