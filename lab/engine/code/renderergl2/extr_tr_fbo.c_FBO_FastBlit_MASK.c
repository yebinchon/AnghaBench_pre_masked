
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int* ivec4_t ;
struct TYPE_12__ {int vidWidth; int vidHeight; } ;
struct TYPE_11__ {int framebufferBlit; } ;
struct TYPE_10__ {int * currentFBO; } ;
struct TYPE_9__ {int width; int height; int frameBuffer; } ;
typedef int GLuint ;
typedef TYPE_1__ FBO_t ;


 int FUNC_0 (TYPE_1__*,int*,int *,TYPE_1__*,int*,int *,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,int,int,int,int) ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_3 (int,int,int,int,int,int,int,int,int,int) ;

void FUNC_4(FBO_t *VAR_6, ivec4_t VAR_7, FBO_t *VAR_8, ivec4_t VAR_9, int VAR_10, int VAR_11)
{
 ivec4_t VAR_12, VAR_13;
 GLuint VAR_14, VAR_15;

 if (!VAR_4.framebufferBlit)
 {
  FUNC_0(VAR_6, VAR_7, ((void*)0), VAR_8, VAR_9, ((void*)0), ((void*)0), 0);
  return;
 }

 VAR_14 = VAR_6 ? VAR_6->frameBuffer : 0;
 VAR_15 = VAR_8 ? VAR_8->frameBuffer : 0;

 if (!VAR_7)
 {
  int VAR_16 = VAR_6 ? VAR_6->width : VAR_3.vidWidth;
  int VAR_17 = VAR_6 ? VAR_6->height : VAR_3.vidHeight;

  FUNC_2(VAR_12, 0, 0, VAR_16, VAR_17);
 }
 else
 {
  FUNC_2(VAR_12, VAR_7[0], VAR_7[1], VAR_7[0] + VAR_7[2], VAR_7[1] + VAR_7[3]);
 }

 if (!VAR_9)
 {
  int VAR_18 = VAR_8 ? VAR_8->width : VAR_3.vidWidth;
  int VAR_19 = VAR_8 ? VAR_8->height : VAR_3.vidHeight;

  FUNC_2(VAR_13, 0, 0, VAR_18, VAR_19);
 }
 else
 {
  FUNC_2(VAR_13, VAR_9[0], VAR_9[1], VAR_9[0] + VAR_9[2], VAR_9[1] + VAR_9[3]);
 }

 FUNC_1(VAR_2, VAR_14);
 FUNC_1(VAR_0, VAR_15);
 FUNC_3(VAR_12[0], VAR_12[1], VAR_12[2], VAR_12[3],
                       VAR_13[0], VAR_13[1], VAR_13[2], VAR_13[3],
        VAR_10, VAR_11);

 FUNC_1(VAR_1, 0);
 VAR_5.currentFBO = ((void*)0);
}
