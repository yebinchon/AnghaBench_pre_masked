
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t index; int value; float minweight; float maxweight; float weight; struct TYPE_4__* next; struct TYPE_4__* child; } ;
typedef TYPE_1__ fuzzyseperator_t ;


 float FUNC_0 (int*,TYPE_1__*) ;
 int VAR_0 ;
 float FUNC_1 () ;

float FUNC_2(int *VAR_1, fuzzyseperator_t *VAR_2)
{
 float VAR_3, VAR_4, VAR_5;

 if (VAR_1[VAR_2->index] < VAR_2->value)
 {
  if (VAR_2->child) return FUNC_2(VAR_1, VAR_2->child);
  else return VAR_2->minweight + FUNC_1() * (VAR_2->maxweight - VAR_2->minweight);
 }
 else if (VAR_2->next)
 {
  if (VAR_1[VAR_2->index] < VAR_2->next->value)
  {

   if (VAR_2->child) VAR_4 = FUNC_2(VAR_1, VAR_2->child);
   else VAR_4 = VAR_2->minweight + FUNC_1() * (VAR_2->maxweight - VAR_2->minweight);

   if (VAR_2->next->child) VAR_5 = FUNC_0(VAR_1, VAR_2->next->child);
   else VAR_5 = VAR_2->next->minweight + FUNC_1() * (VAR_2->next->maxweight - VAR_2->next->minweight);

   if(VAR_2->next->value == VAR_0)
          return VAR_5;
   else
    VAR_3 = (float) (VAR_1[VAR_2->index] - VAR_2->value) / (VAR_2->next->value - VAR_2->value);

   return (1 - VAR_3) * VAR_4 + VAR_3 * VAR_5;
  }
  return FUNC_2(VAR_1, VAR_2->next);
 }
 return VAR_2->weight;
}
