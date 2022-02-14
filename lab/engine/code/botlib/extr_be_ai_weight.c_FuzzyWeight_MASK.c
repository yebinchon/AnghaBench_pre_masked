
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* weights; } ;
typedef TYPE_2__ weightconfig_t ;
struct TYPE_8__ {size_t index; int value; float weight; struct TYPE_8__* next; struct TYPE_8__* child; } ;
typedef TYPE_3__ fuzzyseperator_t ;
struct TYPE_6__ {TYPE_3__* firstseperator; } ;


 float FUNC_0 (int*,TYPE_3__*) ;

float FUNC_1(int *VAR_0, weightconfig_t *VAR_1, int VAR_2)
{



 fuzzyseperator_t *VAR_3;

 VAR_3 = VAR_1->weights[VAR_2].firstseperator;
 if (!VAR_3) return 0;
 while(1)
 {
  if (VAR_0[VAR_3->index] < VAR_3->value)
  {
   if (VAR_3->child) VAR_3 = VAR_3->child;
   else return VAR_3->weight;
  }
  else
  {
   if (VAR_3->next) VAR_3 = VAR_3->next;
   else return VAR_3->weight;
  }
 }
 return 0;

}
