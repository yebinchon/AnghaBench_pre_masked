
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int* vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_8__ {float trDuration; int trDelta; int trBase; int trType; } ;
struct TYPE_9__ {int constantLight; TYPE_2__ pos; int eType; int loopSound; int modelindex2; } ;
struct TYPE_7__ {int currentOrigin; int svFlags; } ;
struct TYPE_10__ {int speed; TYPE_3__ s; int pos1; int pos2; TYPE_1__ r; int moverState; int reached; int use; scalar_t__ model2; } ;
typedef TYPE_4__ gentity_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,float*) ;
 scalar_t__ FUNC_3 (char*,char*,char**) ;
 scalar_t__ FUNC_4 (char*,char*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 float FUNC_6 (int*) ;
 int FUNC_7 (int*,int,int ) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (TYPE_4__*) ;

void FUNC_10( gentity_t *VAR_6 ) {
 vec3_t VAR_7;
 float VAR_8;
 float VAR_9;
 vec3_t VAR_10;
 qboolean VAR_11, VAR_12;
 char *VAR_13;



 if ( VAR_6->model2 ) {
  VAR_6->s.modelindex2 = FUNC_0( VAR_6->model2 );
 }


 if ( FUNC_3( "noise", "100", &VAR_13 ) ) {
  VAR_6->s.loopSound = FUNC_1( VAR_13 );
 }


 VAR_11 = FUNC_2( "light", "100", &VAR_9 );
 VAR_12 = FUNC_4( "color", "1 1 1", VAR_10 );
 if ( VAR_11 || VAR_12 ) {
  int VAR_14, VAR_15, VAR_16, VAR_17;

  VAR_14 = VAR_10[0] * 255;
  if ( VAR_14 > 255 ) {
   VAR_14 = 255;
  }
  VAR_15 = VAR_10[1] * 255;
  if ( VAR_15 > 255 ) {
   VAR_15 = 255;
  }
  VAR_16 = VAR_10[2] * 255;
  if ( VAR_16 > 255 ) {
   VAR_16 = 255;
  }
  VAR_17 = VAR_9 / 4;
  if ( VAR_17 > 255 ) {
   VAR_17 = 255;
  }
  VAR_6->s.constantLight = VAR_14 | ( VAR_15 << 8 ) | ( VAR_16 << 16 ) | ( VAR_17 << 24 );
 }


 VAR_6->use = VAR_5;
 VAR_6->reached = VAR_2;

 VAR_6->moverState = VAR_1;
 VAR_6->r.svFlags = VAR_3;
 VAR_6->s.eType = VAR_0;
 FUNC_5 (VAR_6->pos1, VAR_6->r.currentOrigin);
 FUNC_9 (VAR_6);

 VAR_6->s.pos.trType = VAR_4;
 FUNC_5( VAR_6->pos1, VAR_6->s.pos.trBase );


 FUNC_8( VAR_6->pos2, VAR_6->pos1, VAR_7 );
 VAR_8 = FUNC_6( VAR_7 );
 if ( ! VAR_6->speed ) {
  VAR_6->speed = 100;
 }
 FUNC_7( VAR_7, VAR_6->speed, VAR_6->s.pos.trDelta );
 VAR_6->s.pos.trDuration = VAR_8 * 1000 / VAR_6->speed;
 if ( VAR_6->s.pos.trDuration <= 0 ) {
  VAR_6->s.pos.trDuration = 1;
 }
}
