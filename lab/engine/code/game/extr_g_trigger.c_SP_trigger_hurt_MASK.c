
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int damage; int spawnflags; int use; int touch; int noise_index; } ;
typedef TYPE_1__ gentity_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4( gentity_t *VAR_2 ) {
 FUNC_1 (VAR_2);

 VAR_2->noise_index = FUNC_0( "sound/world/electro.wav" );
 VAR_2->touch = VAR_0;

 if ( !VAR_2->damage ) {
  VAR_2->damage = 5;
 }

 VAR_2->use = VAR_1;


 if ( VAR_2->spawnflags & 1 ) {
  FUNC_3 (VAR_2);
 }
 else {
  FUNC_2 (VAR_2);
 }
}
