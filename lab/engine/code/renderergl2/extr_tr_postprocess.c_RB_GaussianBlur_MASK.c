
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef float* vec4_t ;
typedef float* ivec4_t ;
struct TYPE_13__ {int width; int height; } ;
struct TYPE_12__ {int vidWidth; int vidHeight; } ;
struct TYPE_11__ {TYPE_3__** textureScratchFbo; int whiteImage; TYPE_3__** quarterFbo; } ;


 float FUNC_0 (float,float,float) ;
 int FUNC_1 (TYPE_3__*,float*,int *,int *,float*,int *,float*,int) ;
 int FUNC_2 (int ,int *,int *,TYPE_3__*,int *,int *,float*,int ) ;
 int FUNC_3 (TYPE_3__*,int *,TYPE_3__*,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,float) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,float) ;
 int FUNC_6 (float*,int,int,int,int) ;
 TYPE_2__ VAR_7 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 TYPE_1__ VAR_8 ;

void FUNC_8(float VAR_9)
{

 float VAR_10 = FUNC_0(0.f, 1.f, VAR_9);

 if (VAR_10 <= 0.f)
  return;

 {
  ivec4_t VAR_11, VAR_12;
  vec4_t VAR_13;

  FUNC_6(VAR_13, 1, 1, 1, 1);


  FUNC_3(((void*)0), ((void*)0), VAR_8.quarterFbo[0], ((void*)0), VAR_3, VAR_5);
  FUNC_3(VAR_8.quarterFbo[0], ((void*)0), VAR_8.textureScratchFbo[0], ((void*)0), VAR_3, VAR_5);


  FUNC_7(VAR_4, VAR_4, VAR_4, VAR_6);
  FUNC_2(VAR_8.whiteImage, ((void*)0), ((void*)0), VAR_8.textureScratchFbo[0], ((void*)0), ((void*)0), VAR_13, VAR_0);
  FUNC_7(VAR_6, VAR_6, VAR_6, VAR_6);


  FUNC_4(VAR_8.textureScratchFbo[0], VAR_8.textureScratchFbo[1], VAR_10);
  FUNC_5(VAR_8.textureScratchFbo[1], VAR_8.textureScratchFbo[0], VAR_10);


  FUNC_6(VAR_11, 0, 0, VAR_8.textureScratchFbo[0]->width, VAR_8.textureScratchFbo[0]->height);
  FUNC_6(VAR_12, 0, 0, VAR_7.vidWidth, VAR_7.vidHeight);
  VAR_13[3] = VAR_10;
  FUNC_1(VAR_8.textureScratchFbo[0], VAR_11, ((void*)0), ((void*)0), VAR_12, ((void*)0), VAR_13, VAR_2 | VAR_1);
 }
}
