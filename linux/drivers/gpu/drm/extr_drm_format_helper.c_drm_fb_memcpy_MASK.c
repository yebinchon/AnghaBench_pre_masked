
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_rect {unsigned int x2; unsigned int x1; unsigned int y2; unsigned int y1; } ;
struct drm_framebuffer {int * pitches; TYPE_1__* format; } ;
struct TYPE_2__ {unsigned int* cpp; } ;


 int FUNC_0 (struct drm_rect*,int ,unsigned int) ;
 int FUNC_1 (void*,void*,size_t) ;

void FUNC_2(void *VAR_0, void *VAR_1, struct drm_framebuffer *VAR_2,
     struct drm_rect *VAR_3)
{
 unsigned int VAR_4 = VAR_2->format->cpp[0];
 size_t VAR_5 = (VAR_3->x2 - VAR_3->x1) * VAR_4;
 unsigned int VAR_6, VAR_7 = VAR_3->y2 - VAR_3->y1;

 VAR_1 += FUNC_0(VAR_3, VAR_2->pitches[0], VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_1(VAR_0, VAR_1, VAR_5);
  VAR_1 += VAR_2->pitches[0];
  VAR_0 += VAR_5;
 }
}
