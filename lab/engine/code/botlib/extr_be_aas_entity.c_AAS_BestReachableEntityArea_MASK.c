
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int areas; } ;
typedef TYPE_1__ aas_entity_t ;
struct TYPE_4__ {TYPE_1__* entities; } ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;

int FUNC_1(int VAR_1)
{
 aas_entity_t *VAR_2;

 VAR_2 = &VAR_0.entities[VAR_1];
 return FUNC_0(VAR_2->areas);
}
