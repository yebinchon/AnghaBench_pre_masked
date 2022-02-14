
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int eType; } ;
struct TYPE_7__ {int svFlags; } ;
struct TYPE_9__ {int spawnflags; int touch; TYPE_2__ s; TYPE_1__ r; } ;
typedef TYPE_3__ gentity_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;

void FUNC_3( gentity_t *VAR_3 ) {
 FUNC_1 (VAR_3);



 if ( VAR_3->spawnflags & 1 ) {
  VAR_3->r.svFlags |= VAR_1;
 } else {
  VAR_3->r.svFlags &= ~VAR_1;
 }


 FUNC_0("sound/world/jumppad.wav");

 VAR_3->s.eType = VAR_0;
 VAR_3->touch = VAR_2;

 FUNC_2 (VAR_3);
}
