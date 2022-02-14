
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_framebuffer {unsigned int* pitches; TYPE_1__* format; } ;
struct drm_fb_helper {TYPE_3__* buffer; TYPE_2__* fbdev; struct drm_framebuffer* fb; } ;
struct drm_clip_rect {unsigned int y1; unsigned int x1; unsigned int x2; unsigned int y2; } ;
struct TYPE_6__ {void* vaddr; } ;
struct TYPE_5__ {void* screen_buffer; } ;
struct TYPE_4__ {unsigned int* cpp; } ;


 int FUNC_0 (void*,void*,size_t) ;

__attribute__((used)) static void FUNC_1(struct drm_fb_helper *VAR_0,
       struct drm_clip_rect *VAR_1)
{
 struct drm_framebuffer *VAR_2 = VAR_0->fb;
 unsigned int VAR_3 = VAR_2->format->cpp[0];
 size_t VAR_4 = VAR_1->y1 * VAR_2->pitches[0] + VAR_1->x1 * VAR_3;
 void *VAR_5 = VAR_0->fbdev->screen_buffer + VAR_4;
 void *VAR_6 = VAR_0->buffer->vaddr + VAR_4;
 size_t VAR_7 = (VAR_1->x2 - VAR_1->x1) * VAR_3;
 unsigned int VAR_8;

 for (VAR_8 = VAR_1->y1; VAR_8 < VAR_1->y2; VAR_8++) {
  FUNC_0(VAR_6, VAR_5, VAR_7);
  VAR_5 += VAR_2->pitches[0];
  VAR_6 += VAR_2->pitches[0];
 }
}
