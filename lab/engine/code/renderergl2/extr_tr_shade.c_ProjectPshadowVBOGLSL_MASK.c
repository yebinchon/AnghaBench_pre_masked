
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec5_t ;
typedef float* vec4_t ;
typedef float* vec3_t ;
typedef int shaderProgram_t ;
struct TYPE_11__ {int pshadowBits; scalar_t__ numIndexes; int firstIndex; } ;
typedef TYPE_3__ shaderCommands_t ;
struct TYPE_12__ {float* lightOrigin; float lightRadius; float viewRadius; int * lightViewAxis; } ;
typedef TYPE_4__ pshadow_t ;
struct TYPE_10__ {int c_totalIndexes; } ;
struct TYPE_9__ {int num_pshadows; TYPE_4__* pshadows; } ;
struct TYPE_15__ {TYPE_2__ pc; TYPE_1__ refdef; } ;
struct TYPE_14__ {int modelviewProjection; } ;
struct TYPE_13__ {int * pshadowMaps; int pshadowShader; } ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,float) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,float*) ;
 int FUNC_6 (int *,int ,float*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (float*,float*) ;
 int FUNC_11 (int ,float,float*) ;
 TYPE_8__ VAR_11 ;
 TYPE_7__ VAR_12 ;
 TYPE_3__ VAR_13 ;
 TYPE_5__ VAR_14 ;

__attribute__((used)) static void FUNC_12( void ) {
 int VAR_15;
 vec3_t VAR_16;
 float VAR_17;

 int VAR_18;
 vec5_t VAR_19;

 shaderCommands_t *VAR_20 = &VAR_13;

 if ( !VAR_11.refdef.num_pshadows ) {
  return;
 }

 FUNC_0(&VAR_18, VAR_19);

 for ( VAR_15 = 0 ; VAR_15 < VAR_11.refdef.num_pshadows ; VAR_15++ ) {
  pshadow_t *VAR_21;
  shaderProgram_t *VAR_22;
  vec4_t VAR_23;

  if ( !( VAR_13.pshadowBits & ( 1 << VAR_15 ) ) ) {
   continue;
  }

  VAR_21 = &VAR_11.refdef.pshadows[VAR_15];
  FUNC_10( VAR_21->lightOrigin, VAR_16 );
  VAR_17 = VAR_21->lightRadius;

  VAR_22 = &VAR_14.pshadowShader;

  FUNC_1(VAR_22);

  FUNC_4(VAR_22, VAR_10, VAR_12.modelviewProjection);

  FUNC_10(VAR_16, VAR_23);
  VAR_23[3] = 1.0f;
  FUNC_6(VAR_22, VAR_6, VAR_23);

  FUNC_11(VAR_21->lightViewAxis[0], 1.0f / VAR_21->viewRadius, VAR_23);
  FUNC_5(VAR_22, VAR_5, VAR_23);

  FUNC_11(VAR_21->lightViewAxis[1], 1.0f / VAR_21->viewRadius, VAR_23);
  FUNC_5(VAR_22, VAR_8, VAR_23);

  FUNC_11(VAR_21->lightViewAxis[2], 1.0f / VAR_21->viewRadius, VAR_23);
  FUNC_5(VAR_22, VAR_9, VAR_23);

  FUNC_2(VAR_22, VAR_7, VAR_17);



  FUNC_8( VAR_2 | VAR_1 | VAR_0 );
  FUNC_3(VAR_22, VAR_4, 0);

  FUNC_7( VAR_14.pshadowMaps[VAR_15], VAR_3 );





  FUNC_9(VAR_20->numIndexes, VAR_20->firstIndex);

  VAR_11.pc.c_totalIndexes += VAR_13.numIndexes;

 }
}
