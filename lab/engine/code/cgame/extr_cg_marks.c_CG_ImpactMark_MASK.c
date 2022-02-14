
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int verts ;
typedef float* vec3_t ;
typedef int qhandle_t ;
typedef scalar_t__ qboolean ;
struct TYPE_12__ {double* st; scalar_t__ modulate; int xyz; } ;
typedef TYPE_2__ polyVert_t ;
struct TYPE_11__ {int numVerts; } ;
struct TYPE_13__ {float* color; int verts; TYPE_1__ poly; int markShader; scalar_t__ alphaFade; int time; } ;
typedef TYPE_3__ markPoly_t ;
struct TYPE_14__ {int numPoints; int firstPoint; } ;
typedef TYPE_4__ markFragment_t ;
typedef float byte ;
struct TYPE_16__ {int time; } ;
struct TYPE_15__ {int integer; } ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (float*,float*,float*) ;
 float FUNC_3 (float*,float*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (float*,float*) ;
 int FUNC_5 (float*,float*,float*,float) ;
 int FUNC_6 (float*,int ) ;
 int FUNC_7 (float* const,float*) ;
 int FUNC_8 (float* const,int,float*) ;
 int FUNC_9 (int ,float* const,float*) ;
 TYPE_9__ VAR_3 ;
 TYPE_8__ VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int ,TYPE_2__*,int) ;
 int FUNC_11 (int,void*,float*,int,float*,int,TYPE_4__*) ;
 int FUNC_12 (int ,int,TYPE_2__*) ;

void FUNC_13( qhandle_t VAR_6, const vec3_t VAR_7, const vec3_t VAR_8,
       float VAR_9, float VAR_10, float VAR_11, float VAR_12, float VAR_13,
       qboolean VAR_14, float VAR_15, qboolean VAR_16 ) {
 vec3_t VAR_17[3];
 float VAR_18;
 vec3_t VAR_19[4];
 byte VAR_20[4];
 int VAR_21, VAR_22;
 int VAR_23;
 markFragment_t VAR_24[VAR_0], *VAR_25;
 vec3_t VAR_26[VAR_1];
 vec3_t VAR_27;

 if ( !VAR_4.integer ) {
  return;
 }

 if ( VAR_15 <= 0 ) {
  FUNC_1( "CG_ImpactMark called with <= 0 radius" );
 }






 FUNC_7( VAR_8, VAR_17[0] );
 FUNC_4( VAR_17[1], VAR_17[0] );
 FUNC_5( VAR_17[2], VAR_17[0], VAR_17[1], VAR_9 );
 FUNC_2( VAR_17[0], VAR_17[2], VAR_17[1] );

 VAR_18 = 0.5 * 1.0 / VAR_15;


 for ( VAR_21 = 0 ; VAR_21 < 3 ; VAR_21++ ) {
  VAR_19[0][VAR_21] = VAR_7[VAR_21] - VAR_15 * VAR_17[1][VAR_21] - VAR_15 * VAR_17[2][VAR_21];
  VAR_19[1][VAR_21] = VAR_7[VAR_21] + VAR_15 * VAR_17[1][VAR_21] - VAR_15 * VAR_17[2][VAR_21];
  VAR_19[2][VAR_21] = VAR_7[VAR_21] + VAR_15 * VAR_17[1][VAR_21] + VAR_15 * VAR_17[2][VAR_21];
  VAR_19[3][VAR_21] = VAR_7[VAR_21] - VAR_15 * VAR_17[1][VAR_21] + VAR_15 * VAR_17[2][VAR_21];
 }


 FUNC_8( VAR_8, -20, VAR_27 );
 VAR_23 = FUNC_11( 4, (void *)VAR_19,
     VAR_27, VAR_1, VAR_26[0],
     VAR_0, VAR_24 );

 VAR_20[0] = VAR_10 * 255;
 VAR_20[1] = VAR_11 * 255;
 VAR_20[2] = VAR_12 * 255;
 VAR_20[3] = VAR_13 * 255;

 for ( VAR_21 = 0, VAR_25 = VAR_24 ; VAR_21 < VAR_23 ; VAR_21++, VAR_25++ ) {
  polyVert_t *VAR_28;
  polyVert_t VAR_29[VAR_2];
  markPoly_t *VAR_30;



  if ( VAR_25->numPoints > VAR_2 ) {
   VAR_25->numPoints = VAR_2;
  }
  for ( VAR_22 = 0, VAR_28 = VAR_29 ; VAR_22 < VAR_25->numPoints ; VAR_22++, VAR_28++ ) {
   vec3_t VAR_31;

   FUNC_6( VAR_26[VAR_25->firstPoint + VAR_22], VAR_28->xyz );

   FUNC_9( VAR_28->xyz, VAR_7, VAR_31 );
   VAR_28->st[0] = 0.5 + FUNC_3( VAR_31, VAR_17[1] ) * VAR_18;
   VAR_28->st[1] = 0.5 + FUNC_3( VAR_31, VAR_17[2] ) * VAR_18;
   *(int *)VAR_28->modulate = *(int *)VAR_20;
  }


  if ( VAR_16 ) {
   FUNC_12( VAR_6, VAR_25->numPoints, VAR_29 );
   continue;
  }


  VAR_30 = FUNC_0();
  VAR_30->time = VAR_3.time;
  VAR_30->alphaFade = VAR_14;
  VAR_30->markShader = VAR_6;
  VAR_30->poly.numVerts = VAR_25->numPoints;
  VAR_30->color[0] = VAR_10;
  VAR_30->color[1] = VAR_11;
  VAR_30->color[2] = VAR_12;
  VAR_30->color[3] = VAR_13;
  FUNC_10( VAR_30->verts, VAR_29, VAR_25->numPoints * sizeof( VAR_29[0] ) );
  VAR_5++;
 }
}
