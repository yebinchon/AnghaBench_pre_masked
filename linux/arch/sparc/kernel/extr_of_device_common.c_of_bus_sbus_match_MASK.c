
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* parent; } ;


 int * FUNC_0 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;

int FUNC_2(struct device_node *VAR_0)
{
 struct device_node *VAR_1 = VAR_0;

 while (VAR_1) {
  if (FUNC_1(VAR_1, "sbus") ||
      FUNC_1(VAR_1, "sbi"))
   return 1;






  if (FUNC_0(VAR_1, "ranges", ((void*)0)) != ((void*)0))
   break;

  VAR_1 = VAR_1->parent;
 }

 return 0;
}
