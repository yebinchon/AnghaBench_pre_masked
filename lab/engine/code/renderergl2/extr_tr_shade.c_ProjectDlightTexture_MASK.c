
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec5_t ;
typedef float* vec4_t ;
typedef float* vec3_t ;
typedef int shaderProgram_t ;
struct TYPE_10__ {float radius; float* color; scalar_t__ additive; int transformed; } ;
typedef TYPE_3__ dlight_t ;
struct TYPE_9__ {int c_dlightVertexes; int c_dlightIndexes; int c_totalIndexes; int c_dlightDraws; } ;
struct TYPE_8__ {int num_dlights; TYPE_3__* dlights; } ;
struct TYPE_14__ {TYPE_2__ pc; TYPE_1__ refdef; } ;
struct TYPE_13__ {int vertexAttribsInterpolation; int modelviewProjection; } ;
struct TYPE_12__ {int dlightBits; scalar_t__ numVertexes; scalar_t__ numIndexes; int firstIndex; int shaderTime; } ;
struct TYPE_11__ {int dlightImage; int * dlightShader; } ;


 int FUNC_0 (int*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,float*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (scalar_t__,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int ,float*) ;
 TYPE_7__ VAR_15 ;
 TYPE_6__ VAR_16 ;
 TYPE_5__ VAR_17 ;
 TYPE_4__ VAR_18 ;

__attribute__((used)) static void FUNC_11( void ) {
 int VAR_19;
 vec3_t VAR_20;
 float VAR_21;
 float VAR_22;
 int VAR_23;
 vec5_t VAR_24;

 if ( !VAR_15.refdef.num_dlights ) {
  return;
 }

 FUNC_0(&VAR_23, VAR_24);

 for ( VAR_19 = 0 ; VAR_19 < VAR_15.refdef.num_dlights ; VAR_19++ ) {
  dlight_t *VAR_25;
  shaderProgram_t *VAR_26;
  vec4_t VAR_27;

  if ( !( VAR_17.dlightBits & ( 1 << VAR_19 ) ) ) {
   continue;
  }

  VAR_25 = &VAR_15.refdef.dlights[VAR_19];
  FUNC_10( VAR_25->transformed, VAR_20 );
  VAR_22 = VAR_25->radius;
  VAR_21 = 1.0f / VAR_22;

  VAR_26 = &VAR_18.dlightShader[VAR_23 == VAR_0 ? 0 : 1];

  VAR_15.pc.c_dlightDraws++;

  FUNC_1(VAR_26);

  FUNC_5(VAR_26, VAR_12, VAR_16.modelviewProjection);

  FUNC_2(VAR_26, VAR_14, VAR_16.vertexAttribsInterpolation);

  FUNC_4(VAR_26, VAR_9, VAR_23);
  if (VAR_23 != VAR_0)
  {
   FUNC_3(VAR_26, VAR_10, VAR_24);
   FUNC_2(VAR_26, VAR_13, VAR_17.shaderTime);
  }

  VAR_27[0] = VAR_25->color[0];
  VAR_27[1] = VAR_25->color[1];
  VAR_27[2] = VAR_25->color[2];
  VAR_27[3] = 1.0f;
  FUNC_6(VAR_26, VAR_8, VAR_27);

  VAR_27[0] = VAR_20[0];
  VAR_27[1] = VAR_20[1];
  VAR_27[2] = VAR_20[2];
  VAR_27[3] = VAR_21;
  FUNC_6(VAR_26, VAR_11, VAR_27);

  FUNC_7( VAR_18.dlightImage, VAR_6 );



  if ( VAR_25->additive ) {
   FUNC_8( VAR_1 | VAR_5 | VAR_3 | VAR_2 );
  }
  else {
   FUNC_8( VAR_1 | VAR_4 | VAR_3 | VAR_2 );
  }

  FUNC_4(VAR_26, VAR_7, 1);

  FUNC_9(VAR_17.numIndexes, VAR_17.firstIndex);

  VAR_15.pc.c_totalIndexes += VAR_17.numIndexes;
  VAR_15.pc.c_dlightIndexes += VAR_17.numIndexes;
  VAR_15.pc.c_dlightVertexes += VAR_17.numVertexes;
 }
}
