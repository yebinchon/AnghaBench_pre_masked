
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef float* vec4_t ;
typedef int * ivec4_t ;
struct TYPE_6__ {scalar_t__ textureFloat; } ;
struct TYPE_5__ {scalar_t__ value; } ;
struct TYPE_4__ {int frameCount; int tonemapShader; int fixedLevelsImage; int calcLevelsImage; int * calcLevelsFbo; int * targetLevelsFbo; int ** textureScratchFbo; int * calclevels4xShader; } ;
typedef int FBO_t ;


 int FUNC_0 (int *,int *,int *,int *,int *,int *,float*,int) ;
 int FUNC_1 (int *,int *,int *,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int ,int,int) ;
 TYPE_3__ VAR_5 ;
 float FUNC_4 (int,scalar_t__) ;
 TYPE_2__* VAR_6 ;
 TYPE_1__ VAR_7 ;

void FUNC_5(FBO_t *VAR_8, ivec4_t VAR_9, FBO_t *VAR_10, ivec4_t VAR_11, int VAR_12)
{
 ivec4_t VAR_13, VAR_14;
 vec4_t VAR_15;
 static int VAR_16 = 0;

 if (VAR_12)
 {
  if (VAR_16 == 0 || VAR_7.frameCount < VAR_16 || VAR_7.frameCount - VAR_16 > 5)
  {

   FBO_t *VAR_17, *VAR_18, *VAR_19;
   int VAR_20 = 256;

   VAR_16 = VAR_7.frameCount;

   FUNC_3(VAR_14, 0, 0, VAR_20, VAR_20);

   FUNC_0(VAR_8, VAR_9, ((void*)0), VAR_7.textureScratchFbo[0], VAR_14, &VAR_7.calclevels4xShader[0], ((void*)0), 0);

   VAR_17 = VAR_7.textureScratchFbo[0];
   VAR_18 = VAR_7.textureScratchFbo[1];


   while (VAR_20 > 1)
   {
    FUNC_3(VAR_13, 0, 0, VAR_20, VAR_20);

    VAR_20 >>= 1;
    FUNC_3(VAR_14, 0, 0, VAR_20, VAR_20);

    if (VAR_20 == 1)
     VAR_18 = VAR_7.targetLevelsFbo;


    FUNC_1(VAR_17, VAR_13, VAR_18, VAR_14, VAR_2, VAR_3);

    VAR_19 = VAR_17;
    VAR_17 = VAR_18;
    VAR_18 = VAR_19;
   }
  }


  FUNC_3(VAR_13, 0, 0, 0, 0);

  VAR_15[0] =
  VAR_15[1] =
  VAR_15[2] = 1.0f;
  if (VAR_5.textureFloat)
   VAR_15[3] = 0.03f;
  else
   VAR_15[3] = 0.1f;

  FUNC_0(VAR_7.targetLevelsFbo, VAR_13, ((void*)0), VAR_7.calcLevelsFbo, ((void*)0), ((void*)0), VAR_15, VAR_1 | VAR_0);
 }


 VAR_15[0] =
 VAR_15[1] =
 VAR_15[2] = FUNC_4(2, VAR_6->value - VAR_12);
 VAR_15[3] = 1.0f;

 if (VAR_12)
  FUNC_2(VAR_7.calcLevelsImage, VAR_4);
 else
  FUNC_2(VAR_7.fixedLevelsImage, VAR_4);

 FUNC_0(VAR_8, VAR_9, ((void*)0), VAR_10, VAR_11, &VAR_7.tonemapShader, VAR_15, 0);
}
