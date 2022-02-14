
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int enable; unsigned int pitch; unsigned int format; int addr; int dirty; int height; int width; int y; int x; } ;
struct mtk_plane_state {TYPE_3__ pending; } ;
struct mtk_drm_gem_obj {int dma_addr; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_4__* state; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {unsigned int* pitches; TYPE_1__* format; struct drm_gem_object** obj; } ;
struct drm_crtc {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_11__ {int y1; int x1; } ;
struct TYPE_8__ {int x1; int y1; } ;
struct TYPE_10__ {TYPE_5__ dst; TYPE_2__ src; struct drm_framebuffer* fb; struct drm_crtc* crtc; } ;
struct TYPE_7__ {unsigned int format; int* cpp; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 struct mtk_drm_gem_obj* FUNC_3 (struct drm_gem_object*) ;
 struct mtk_plane_state* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct drm_plane *VAR_0,
        struct drm_plane_state *VAR_1)
{
 struct mtk_plane_state *VAR_2 = FUNC_4(VAR_0->state);
 struct drm_crtc *VAR_3 = VAR_0->state->crtc;
 struct drm_framebuffer *VAR_4 = VAR_0->state->fb;
 struct drm_gem_object *VAR_5;
 struct mtk_drm_gem_obj *VAR_6;
 unsigned int VAR_7, VAR_8;
 dma_addr_t VAR_9;

 if (!VAR_3 || FUNC_0(!VAR_4))
  return;

 VAR_5 = VAR_4->obj[0];
 VAR_6 = FUNC_3(VAR_5);
 VAR_9 = VAR_6->dma_addr;
 VAR_7 = VAR_4->pitches[0];
 VAR_8 = VAR_4->format->format;

 VAR_9 += (VAR_0->state->src.x1 >> 16) * VAR_4->format->cpp[0];
 VAR_9 += (VAR_0->state->src.y1 >> 16) * VAR_7;

 VAR_2->pending.enable = 1;
 VAR_2->pending.pitch = VAR_7;
 VAR_2->pending.format = VAR_8;
 VAR_2->pending.addr = VAR_9;
 VAR_2->pending.x = VAR_0->state->dst.x1;
 VAR_2->pending.y = VAR_0->state->dst.y1;
 VAR_2->pending.width = FUNC_2(&VAR_0->state->dst);
 VAR_2->pending.height = FUNC_1(&VAR_0->state->dst);
 FUNC_5();
 VAR_2->pending.dirty = 1;
}
