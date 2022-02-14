
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ weight; double maxweight; double minweight; struct TYPE_3__* next; struct TYPE_3__* child; } ;
typedef TYPE_1__ fuzzyseperator_t ;


 scalar_t__ VAR_0 ;
 double FUNC_0 () ;
 double FUNC_1 () ;

void FUNC_2(fuzzyseperator_t *VAR_1)
{
 if (VAR_1->child)
 {
  FUNC_2(VAR_1->child);
 }
 else if (VAR_1->type == VAR_0)
 {

  if (FUNC_1() < 0.01) VAR_1->weight += FUNC_0() * (VAR_1->maxweight - VAR_1->minweight);
  else VAR_1->weight += FUNC_0() * (VAR_1->maxweight - VAR_1->minweight) * 0.5;

  if (VAR_1->weight < VAR_1->minweight) VAR_1->minweight = VAR_1->weight;
  else if (VAR_1->weight > VAR_1->maxweight) VAR_1->maxweight = VAR_1->weight;
 }
 if (VAR_1->next) FUNC_2(VAR_1->next);
}
