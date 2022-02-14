
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_13__ {int * currentOrigin; } ;
struct TYPE_11__ {scalar_t__* trBase; } ;
struct TYPE_12__ {TYPE_1__ apos; } ;
struct TYPE_14__ {TYPE_3__ r; TYPE_2__ s; scalar_t__ nextthink; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_15__ {int * intermission_origin; scalar_t__* intermission_angle; scalar_t__ time; } ;


 int FUNC_0 (scalar_t__*,int *,int *,int *) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int *,scalar_t__,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 TYPE_8__ VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_4__* VAR_7 ;
 TYPE_4__* VAR_8 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int *,scalar_t__*) ;

__attribute__((used)) static void FUNC_6( gentity_t *VAR_9 ) {
 vec3_t VAR_10;
 vec3_t VAR_11;
 vec3_t VAR_12, VAR_13, VAR_14;

 VAR_9->nextthink = VAR_2.time + 100;

 FUNC_0( VAR_2.intermission_angle, VAR_10, ((void*)0), ((void*)0) );
 FUNC_2( VAR_2.intermission_origin, FUNC_4( "g_podiumDist" ), VAR_10, VAR_11 );
 VAR_11[2] -= FUNC_4( "g_podiumDrop" );
 FUNC_1( VAR_9, VAR_11 );

 if( VAR_6 ) {
  FUNC_3( VAR_2.intermission_origin, VAR_9->r.currentOrigin, VAR_10 );
  FUNC_5( VAR_10, VAR_6->s.apos.trBase );
  VAR_6->s.apos.trBase[VAR_0] = 0;
  VAR_6->s.apos.trBase[VAR_1] = 0;

  FUNC_0( VAR_6->s.apos.trBase, VAR_12, VAR_13, VAR_14 );
  FUNC_2( VAR_9->r.currentOrigin, VAR_3[0], VAR_12, VAR_10 );
  FUNC_2( VAR_10, VAR_3[1], VAR_13, VAR_10 );
  FUNC_2( VAR_10, VAR_3[2], VAR_14, VAR_10 );

  FUNC_1( VAR_6, VAR_10 );
 }

 if( VAR_7 ) {
  FUNC_3( VAR_2.intermission_origin, VAR_9->r.currentOrigin, VAR_10 );
  FUNC_5( VAR_10, VAR_7->s.apos.trBase );
  VAR_7->s.apos.trBase[VAR_0] = 0;
  VAR_7->s.apos.trBase[VAR_1] = 0;

  FUNC_0( VAR_7->s.apos.trBase, VAR_12, VAR_13, VAR_14 );
  FUNC_2( VAR_9->r.currentOrigin, VAR_4[0], VAR_12, VAR_10 );
  FUNC_2( VAR_10, VAR_4[1], VAR_13, VAR_10 );
  FUNC_2( VAR_10, VAR_4[2], VAR_14, VAR_10 );

  FUNC_1( VAR_7, VAR_10 );
 }

 if( VAR_8 ) {
  FUNC_3( VAR_2.intermission_origin, VAR_9->r.currentOrigin, VAR_10 );
  FUNC_5( VAR_10, VAR_8->s.apos.trBase );
  VAR_8->s.apos.trBase[VAR_0] = 0;
  VAR_8->s.apos.trBase[VAR_1] = 0;

  FUNC_0( VAR_8->s.apos.trBase, VAR_12, VAR_13, VAR_14 );
  FUNC_2( VAR_9->r.currentOrigin, VAR_5[0], VAR_12, VAR_10 );
  FUNC_2( VAR_10, VAR_5[1], VAR_13, VAR_10 );
  FUNC_2( VAR_10, VAR_5[2], VAR_14, VAR_10 );

  FUNC_1( VAR_8, VAR_10 );
 }
}
