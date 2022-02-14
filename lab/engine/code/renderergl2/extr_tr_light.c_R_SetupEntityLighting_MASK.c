
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_14__ {int rdflags; int num_dlights; TYPE_4__* dlights; } ;
typedef TYPE_2__ trRefdef_t ;
struct TYPE_13__ {int renderfx; int* lightingOrigin; int* origin; int * axis; } ;
struct TYPE_15__ {int* ambientLight; int* directedLight; int* lightDir; TYPE_1__ e; void** modelLightDir; int ambientLightInt; scalar_t__ lightingCalculated; } ;
typedef TYPE_3__ trRefEntity_t ;
struct TYPE_16__ {float radius; int* color; int origin; } ;
typedef TYPE_4__ dlight_t ;
typedef int byte ;
struct TYPE_20__ {scalar_t__ lightGridData; } ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_18__ {int (* ftol ) (float) ;} ;
struct TYPE_17__ {int identityLight; int* sunDirection; TYPE_9__* world; } ;


 float VAR_0 ;
 float VAR_1 ;
 void* FUNC_0 (int*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 float FUNC_2 (float,float) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,TYPE_9__*) ;
 int FUNC_4 (int*,int*) ;
 float FUNC_5 (int*) ;
 int FUNC_6 (int*,float,int*,int*) ;
 float FUNC_7 (int*) ;
 int FUNC_8 (int*,float,int*) ;
 int FUNC_9 (int ,int*,int*) ;
 scalar_t__ VAR_4 ;
 TYPE_7__* VAR_5 ;
 TYPE_6__ VAR_6 ;
 int FUNC_10 (float) ;
 int FUNC_11 (float) ;
 int FUNC_12 (float) ;
 TYPE_5__ VAR_7 ;

void FUNC_13( const trRefdef_t *VAR_8, trRefEntity_t *VAR_9 ) {
 int VAR_10;
 dlight_t *VAR_11;
 float VAR_12;
 vec3_t VAR_13;
 float VAR_14;
 vec3_t VAR_15;
 vec3_t VAR_16;


 if ( VAR_9->lightingCalculated ) {
  return;
 }
 VAR_9->lightingCalculated = VAR_4;




 if ( VAR_9->e.renderfx & VAR_3 ) {



  FUNC_4( VAR_9->e.lightingOrigin, VAR_16 );
 } else {
  FUNC_4( VAR_9->e.origin, VAR_16 );
 }


 if ( !(VAR_8->rdflags & VAR_2 )
  && VAR_7.world->lightGridData ) {
  FUNC_3( VAR_9, VAR_7.world );
 } else {
  VAR_9->ambientLight[0] = VAR_9->ambientLight[1] =
   VAR_9->ambientLight[2] = VAR_7.identityLight * 150;
  VAR_9->directedLight[0] = VAR_9->directedLight[1] =
   VAR_9->directedLight[2] = VAR_7.identityLight * 150;
  FUNC_4( VAR_7.sunDirection, VAR_9->lightDir );
 }


 if ( 1 ) {

  VAR_9->ambientLight[0] += VAR_7.identityLight * 32;
  VAR_9->ambientLight[1] += VAR_7.identityLight * 32;
  VAR_9->ambientLight[2] += VAR_7.identityLight * 32;
 }




 VAR_14 = FUNC_5( VAR_9->directedLight );
 FUNC_8( VAR_9->lightDir, VAR_14, VAR_15 );

 for ( VAR_10 = 0 ; VAR_10 < VAR_8->num_dlights ; VAR_10++ ) {
  VAR_11 = &VAR_8->dlights[VAR_10];
  FUNC_9( VAR_11->origin, VAR_16, VAR_13 );
  VAR_14 = FUNC_7( VAR_13 );

  VAR_12 = VAR_0 * ( VAR_11->radius * VAR_11->radius );
  if ( VAR_14 < VAR_1 ) {
   VAR_14 = VAR_1;
  }
  VAR_14 = VAR_12 / ( VAR_14 * VAR_14 );

  FUNC_6( VAR_9->directedLight, VAR_14, VAR_11->color, VAR_9->directedLight );
  FUNC_6( VAR_15, VAR_14, VAR_13, VAR_15 );
 }




 {
  float VAR_17, VAR_18, VAR_19, VAR_20;

  VAR_17 = VAR_9->ambientLight[0];
  VAR_18 = VAR_9->ambientLight[1];
  VAR_19 = VAR_9->ambientLight[2];

  VAR_20 = FUNC_2(FUNC_2(VAR_17, VAR_18), VAR_19);

  if (VAR_20 > 255.0f)
  {
   VAR_20 = 255.0f / VAR_20;
   VAR_9->ambientLight[0] *= VAR_20;
   VAR_9->ambientLight[1] *= VAR_20;
   VAR_9->ambientLight[2] *= VAR_20;
  }

  VAR_17 = VAR_9->directedLight[0];
  VAR_18 = VAR_9->directedLight[1];
  VAR_19 = VAR_9->directedLight[2];

  VAR_20 = FUNC_2(FUNC_2(VAR_17, VAR_18), VAR_19);

  if (VAR_20 > 255.0f)
  {
   VAR_20 = 255.0f / VAR_20;
   VAR_9->directedLight[0] *= VAR_20;
   VAR_9->directedLight[1] *= VAR_20;
   VAR_9->directedLight[2] *= VAR_20;
  }
 }


 if ( VAR_5->integer ) {
  FUNC_1( VAR_9 );
 }


 ((byte *)&VAR_9->ambientLightInt)[0] = VAR_6.ftol(VAR_9->ambientLight[0]);
 ((byte *)&VAR_9->ambientLightInt)[1] = VAR_6.ftol(VAR_9->ambientLight[1]);
 ((byte *)&VAR_9->ambientLightInt)[2] = VAR_6.ftol(VAR_9->ambientLight[2]);
 ((byte *)&VAR_9->ambientLightInt)[3] = 0xff;


 FUNC_7( VAR_15 );
 VAR_9->modelLightDir[0] = FUNC_0( VAR_15, VAR_9->e.axis[0] );
 VAR_9->modelLightDir[1] = FUNC_0( VAR_15, VAR_9->e.axis[1] );
 VAR_9->modelLightDir[2] = FUNC_0( VAR_15, VAR_9->e.axis[2] );

 FUNC_4(VAR_15, VAR_9->lightDir);
}
