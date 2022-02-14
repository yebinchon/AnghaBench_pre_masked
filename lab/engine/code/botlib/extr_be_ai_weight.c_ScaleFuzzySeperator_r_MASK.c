
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; float weight; float maxweight; float minweight; struct TYPE_3__* next; struct TYPE_3__* child; } ;
typedef TYPE_1__ fuzzyseperator_t ;


 scalar_t__ VAR_0 ;

void FUNC_0(fuzzyseperator_t *VAR_1, float VAR_2)
{
 if (VAR_1->child)
 {
  FUNC_0(VAR_1->child, VAR_2);
 }
 else if (VAR_1->type == VAR_0)
 {

  VAR_1->weight = (float) (VAR_1->maxweight + VAR_1->minweight) * VAR_2;

  if (VAR_1->weight < VAR_1->minweight) VAR_1->weight = VAR_1->minweight;
  else if (VAR_1->weight > VAR_1->maxweight) VAR_1->weight = VAR_1->maxweight;
 }
 if (VAR_1->next) FUNC_0(VAR_1->next, VAR_2);
}
