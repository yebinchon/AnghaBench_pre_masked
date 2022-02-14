
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_9__ {int * origin; int angles; } ;
struct TYPE_8__ {int mins; int maxs; } ;
struct TYPE_10__ {int speed; int wait; int damage; int spawnflags; int flags; int think; scalar_t__ targetname; int takedamage; scalar_t__ nextthink; int * pos1; int * pos2; TYPE_2__ s; int * movedir; TYPE_1__ r; int model; int blocked; void* soundPos2; void* soundPos1; void* sound2to1; void* sound1to2; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_11__ {scalar_t__ time; } ;


 int VAR_0 ;
 float FUNC_0 (int *,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,float*) ;
 int FUNC_4 (char*,char*,int*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,float,int *,int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ) ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (TYPE_3__*,int ) ;

void FUNC_11 (gentity_t *VAR_7) {
 vec3_t VAR_8;
 float VAR_9;
 vec3_t VAR_10;
 float VAR_11;

 VAR_7->sound1to2 = VAR_7->sound2to1 = FUNC_2("sound/movers/doors/dr1_strt.wav");
 VAR_7->soundPos1 = VAR_7->soundPos2 = FUNC_2("sound/movers/doors/dr1_end.wav");

 VAR_7->blocked = VAR_0;


 if (!VAR_7->speed)
  VAR_7->speed = 400;


 if (!VAR_7->wait)
  VAR_7->wait = 2;
 VAR_7->wait *= 1000;


 FUNC_3( "lip", "8", &VAR_11 );


 FUNC_4( "dmg", "2", &VAR_7->damage );


 FUNC_6( VAR_7->s.origin, VAR_7->pos1 );


 FUNC_10( VAR_7, VAR_7->model );
 FUNC_1 (VAR_7->s.angles, VAR_7->movedir);
 VAR_8[0] = FUNC_9(VAR_7->movedir[0]);
 VAR_8[1] = FUNC_9(VAR_7->movedir[1]);
 VAR_8[2] = FUNC_9(VAR_7->movedir[2]);
 FUNC_8( VAR_7->r.maxs, VAR_7->r.mins, VAR_10 );
 VAR_9 = FUNC_0( VAR_8, VAR_10 ) - VAR_11;
 FUNC_7( VAR_7->pos1, VAR_9, VAR_7->movedir, VAR_7->pos2 );


 if ( VAR_7->spawnflags & 1 ) {
  vec3_t VAR_12;

  FUNC_6( VAR_7->pos2, VAR_12 );
  FUNC_6( VAR_7->s.origin, VAR_7->pos2 );
  FUNC_6( VAR_12, VAR_7->pos1 );
 }

 FUNC_5( VAR_7 );

 VAR_7->nextthink = VAR_5.time + VAR_2;

 if ( ! (VAR_7->flags & VAR_1 ) ) {
  int VAR_13;

  FUNC_4( "health", "0", &VAR_13 );
  if ( VAR_13 ) {
   VAR_7->takedamage = VAR_6;
  }
  if ( VAR_7->targetname || VAR_13 ) {

   VAR_7->think = VAR_3;
  } else {
   VAR_7->think = VAR_4;
  }
 }


}
