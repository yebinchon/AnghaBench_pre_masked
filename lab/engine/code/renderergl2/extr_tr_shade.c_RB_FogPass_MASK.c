
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec5_t ;
typedef unsigned char* vec4_t ;
typedef int shaderProgram_t ;
struct TYPE_12__ {int colorInt; } ;
typedef TYPE_4__ fog_t ;
struct TYPE_9__ {int c_fogDraws; } ;
struct TYPE_16__ {TYPE_1__ pc; } ;
struct TYPE_15__ {float vertexAttribsInterpolation; scalar_t__ boneAnimation; int boneMatrix; int modelviewProjection; scalar_t__ vertexAnimation; } ;
struct TYPE_14__ {int fogNum; float shaderTime; int firstIndex; int numIndexes; TYPE_3__* shader; } ;
struct TYPE_13__ {TYPE_2__* world; int * fogShader; } ;
struct TYPE_11__ {scalar_t__ fogPass; } ;
struct TYPE_10__ {TYPE_4__* fogs; } ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (unsigned char*,unsigned char*,float*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,float) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int ,scalar_t__) ;
 int FUNC_8 (int *,int ,unsigned char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_8__ VAR_19 ;
 TYPE_7__ VAR_20 ;
 TYPE_6__ VAR_21 ;
 TYPE_5__ VAR_22 ;

__attribute__((used)) static void FUNC_11( void ) {
 fog_t *VAR_23;
 vec4_t VAR_24;
 vec4_t VAR_25, VAR_26 = {0, 0, 0, 0};
 float VAR_27 = 0;
 shaderProgram_t *VAR_28;

 int VAR_29;
 vec5_t VAR_30;

 FUNC_0(&VAR_29, VAR_30);

 {
  int VAR_31 = 0;

  if (VAR_29 != VAR_0)
   VAR_31 |= VAR_2;

  if (VAR_20.vertexAnimation)
   VAR_31 |= VAR_3;
  else if (VAR_20.boneAnimation)
   VAR_31 |= VAR_1;

  VAR_28 = &VAR_22.fogShader[VAR_31];
 }

 VAR_19.pc.c_fogDraws++;

 FUNC_2(VAR_28);

 VAR_23 = VAR_22.world->fogs + VAR_21.fogNum;

 FUNC_6(VAR_28, VAR_16, VAR_20.modelviewProjection);

 FUNC_3(VAR_28, VAR_18, VAR_20.vertexAttribsInterpolation);

 if (VAR_20.boneAnimation)
 {
  FUNC_7(VAR_28, VAR_9, VAR_20.boneMatrix, VAR_20.boneAnimation);
 }

 FUNC_5(VAR_28, VAR_11, VAR_29);
 if (VAR_29 != VAR_0)
 {
  FUNC_4(VAR_28, VAR_12, VAR_30);
  FUNC_3(VAR_28, VAR_17, VAR_21.shaderTime);
 }

 VAR_24[0] = ((unsigned char *)(&VAR_23->colorInt))[0] / 255.0f;
 VAR_24[1] = ((unsigned char *)(&VAR_23->colorInt))[1] / 255.0f;
 VAR_24[2] = ((unsigned char *)(&VAR_23->colorInt))[2] / 255.0f;
 VAR_24[3] = ((unsigned char *)(&VAR_23->colorInt))[3] / 255.0f;
 FUNC_8(VAR_28, VAR_10, VAR_24);

 FUNC_1(VAR_25, VAR_26, &VAR_27);

 FUNC_8(VAR_28, VAR_14, VAR_25);
 FUNC_8(VAR_28, VAR_13, VAR_26);
 FUNC_3(VAR_28, VAR_15, VAR_27);

 if ( VAR_21.shader->fogPass == VAR_4 ) {
  FUNC_9( VAR_7 | VAR_6 | VAR_5 );
 } else {
  FUNC_9( VAR_7 | VAR_6 );
 }
 FUNC_5(VAR_28, VAR_8, 0);

 FUNC_10(VAR_21.numIndexes, VAR_21.firstIndex);
}
