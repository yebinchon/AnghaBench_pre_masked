
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nextthink; int think; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_5__ {scalar_t__ time; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

void FUNC_0 (gentity_t *VAR_3)
{

 VAR_3->think = VAR_2;
 VAR_3->nextthink = VAR_1.time + VAR_0;
}
