
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int think; int nextthink; struct TYPE_6__* activator; scalar_t__ client; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_7__ {int time; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_0( gentity_t *VAR_2, gentity_t *VAR_3, gentity_t *VAR_4 ) {
 if (VAR_4->client) {
  VAR_2->activator = VAR_4;
  VAR_2->nextthink = VAR_1.time;
  VAR_2->think = VAR_0;
 }
}
