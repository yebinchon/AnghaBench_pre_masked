
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_chip {int type; struct device_node* of_node; } ;
struct device_node {struct device_node* parent; } ;


 int VAR_0 ;
 struct macio_chip* VAR_1 ;

struct macio_chip *FUNC_0(struct device_node *VAR_2, int VAR_3)
{
 while(VAR_2) {
  int VAR_4;

  for (VAR_4=0; VAR_4 < VAR_0 && VAR_1[VAR_4].of_node; VAR_4++)
   if (VAR_2 == VAR_1[VAR_4].of_node &&
       (!VAR_3 || VAR_1[VAR_4].type == VAR_3))
    return &VAR_1[VAR_4];
  VAR_2 = VAR_2->parent;
 }
 return ((void*)0);
}
