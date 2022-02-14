
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* trBase; } ;
struct TYPE_8__ {TYPE_1__ pos; } ;
struct TYPE_9__ {int timestamp; int nextthink; TYPE_2__ s; int physicsObject; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_10__ {int time; } ;


 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

void FUNC_1( gentity_t *VAR_2 ) {
 if ( VAR_0.time - VAR_2->timestamp > 6500 ) {

  FUNC_0( VAR_2 );
  VAR_2->physicsObject = VAR_1;
  return;
 }
 VAR_2->nextthink = VAR_0.time + 100;
 VAR_2->s.pos.trBase[2] -= 1;
}
