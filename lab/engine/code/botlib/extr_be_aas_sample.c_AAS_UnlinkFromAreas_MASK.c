
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {size_t areanum; TYPE_2__* prev_ent; TYPE_1__* next_ent; struct TYPE_9__* next_area; } ;
typedef TYPE_3__ aas_link_t ;
struct TYPE_10__ {TYPE_1__** arealinkedentities; } ;
struct TYPE_8__ {TYPE_1__* next_ent; } ;
struct TYPE_7__ {TYPE_2__* prev_ent; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_4__ VAR_0 ;

void FUNC_1(aas_link_t *VAR_1)
{
 aas_link_t *VAR_2, *VAR_3;

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_3)
 {

  VAR_3 = VAR_2->next_area;

  if (VAR_2->prev_ent) VAR_2->prev_ent->next_ent = VAR_2->next_ent;
  else VAR_0.arealinkedentities[VAR_2->areanum] = VAR_2->next_ent;
  if (VAR_2->next_ent) VAR_2->next_ent->prev_ent = VAR_2->prev_ent;

  FUNC_0(VAR_2);
 }
}
