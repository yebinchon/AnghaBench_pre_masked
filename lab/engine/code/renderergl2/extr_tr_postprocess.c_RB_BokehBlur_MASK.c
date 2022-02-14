
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef float* vec4_t ;
typedef float* vec2_t ;
typedef int * ivec4_t ;
struct TYPE_12__ {scalar_t__ framebufferObject; } ;
struct TYPE_11__ {TYPE_1__** quarterFbo; int bokehShader; TYPE_1__** textureScratchFbo; } ;
struct TYPE_10__ {int height; int width; } ;
typedef TYPE_1__ FBO_t ;


 int FUNC_0 (TYPE_1__*,int *,float*,TYPE_1__*,int *,int *,float*,int) ;
 int FUNC_1 (TYPE_1__*,int *,TYPE_1__*,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (float*,float,float,float,int) ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;

void FUNC_3(FBO_t *VAR_8, ivec4_t VAR_9, FBO_t *VAR_10, ivec4_t VAR_11, float VAR_12)
{

 vec4_t VAR_13;

 VAR_12 *= 10.0f;

 if (VAR_12 < 0.004f)
  return;

 if (VAR_6.framebufferObject)
 {

  if (VAR_12 > 0.0f)
  {
   ivec4_t VAR_14;

   VAR_14[0] = 0;
   VAR_14[1] = VAR_7.quarterFbo[0]->height;
   VAR_14[2] = VAR_7.quarterFbo[0]->width;
   VAR_14[3] = -VAR_7.quarterFbo[0]->height;



   FUNC_1(VAR_8, VAR_9, VAR_7.quarterFbo[0], VAR_14, VAR_4, VAR_5);
  }


  if (VAR_12 > 1.0f)
  {


   FUNC_1(VAR_7.quarterFbo[0], ((void*)0), VAR_7.textureScratchFbo[0], ((void*)0), VAR_4, VAR_5);
  }


  if (VAR_12 > 0.0f && VAR_12 <= 1.0f)
  {

   FUNC_2(VAR_13, 1, 1, 1, VAR_12);

   FUNC_0(VAR_7.quarterFbo[0], ((void*)0), ((void*)0), VAR_10, VAR_11, ((void*)0), VAR_13, VAR_3 | VAR_1);
  }


  else if (VAR_12 > 1.0f && VAR_12 <= 2.0f)
  {

   FUNC_0(VAR_7.quarterFbo[0], ((void*)0), ((void*)0), VAR_10, VAR_11, ((void*)0), ((void*)0), 0);

   FUNC_2(VAR_13, 1, 1, 1, VAR_12 - 1.0f);

   FUNC_0(VAR_7.textureScratchFbo[0], ((void*)0), ((void*)0), VAR_10, VAR_11, ((void*)0), VAR_13, VAR_3 | VAR_1);
  }
  else if (VAR_12 > 2.0f)
  {

   int VAR_15;

   for (VAR_15 = 0; VAR_15 < 2; VAR_15++)
   {
    vec2_t VAR_16;
    float VAR_17;

    VAR_17 = ((VAR_12 - 2.0f) / 2.0f) / 3.0f * (float)(VAR_15 + 1);

    VAR_16[0] =
    VAR_16[1] = VAR_17;

    VAR_13[0] =
    VAR_13[1] =
    VAR_13[2] = 0.5f;
    VAR_13[3] = 1.0f;

    if (VAR_15 != 0)
     FUNC_0(VAR_7.textureScratchFbo[0], ((void*)0), VAR_16, VAR_7.textureScratchFbo[1], ((void*)0), &VAR_7.bokehShader, VAR_13, VAR_2 | VAR_0);
    else
     FUNC_0(VAR_7.textureScratchFbo[0], ((void*)0), VAR_16, VAR_7.textureScratchFbo[1], ((void*)0), &VAR_7.bokehShader, VAR_13, 0);
   }

   FUNC_0(VAR_7.textureScratchFbo[1], ((void*)0), ((void*)0), VAR_10, VAR_11, ((void*)0), ((void*)0), 0);
  }
 }
}
