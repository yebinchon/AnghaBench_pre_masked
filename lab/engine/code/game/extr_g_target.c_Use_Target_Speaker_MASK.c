
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ loopSound; } ;
struct TYPE_8__ {int spawnflags; scalar_t__ noise_index; TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__) ;

void FUNC_1 (gentity_t *VAR_2, gentity_t *VAR_3, gentity_t *VAR_4) {
 if (VAR_2->spawnflags & 3) {
  if (VAR_2->s.loopSound)
   VAR_2->s.loopSound = 0;
  else
   VAR_2->s.loopSound = VAR_2->noise_index;
 }else {
  if ( VAR_2->spawnflags & 8 ) {
   FUNC_0( VAR_4, VAR_0, VAR_2->noise_index );
  } else if (VAR_2->spawnflags & 4) {
   FUNC_0( VAR_2, VAR_1, VAR_2->noise_index );
  } else {
   FUNC_0( VAR_2, VAR_0, VAR_2->noise_index );
  }
 }
}
