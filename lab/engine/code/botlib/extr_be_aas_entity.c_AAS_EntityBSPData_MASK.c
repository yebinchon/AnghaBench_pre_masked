
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ modelnum; int solid; int absmaxs; int absmins; int angles; int origin; } ;
typedef TYPE_2__ bsp_entdata_t ;
struct TYPE_6__ {scalar_t__ modelindex; int solid; int maxs; int origin; int mins; int angles; } ;
struct TYPE_8__ {TYPE_1__ i; } ;
typedef TYPE_3__ aas_entity_t ;
struct TYPE_9__ {TYPE_3__* entities; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__ VAR_0 ;

void FUNC_2(int VAR_1, bsp_entdata_t *VAR_2)
{
 aas_entity_t *VAR_3;

 VAR_3 = &VAR_0.entities[VAR_1];
 FUNC_1(VAR_3->i.origin, VAR_2->origin);
 FUNC_1(VAR_3->i.angles, VAR_2->angles);
 FUNC_0(VAR_3->i.origin, VAR_3->i.mins, VAR_2->absmins);
 FUNC_0(VAR_3->i.origin, VAR_3->i.maxs, VAR_2->absmaxs);
 VAR_2->solid = VAR_3->i.solid;
 VAR_2->modelnum = VAR_3->i.modelindex - 1;
}
