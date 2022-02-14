
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int x1; int y1; } ;
struct TYPE_11__ {struct drm_framebuffer* fb; TYPE_3__ src; } ;
struct nv50_wndw_atom {TYPE_5__ state; } ;
struct nv50_wndw {TYPE_1__* func; } ;
struct TYPE_10__ {int cpp; int depth; int x; int y; int h; int w; } ;
struct TYPE_12__ {int color_mgmt_changed; } ;
struct nv50_head_atom {TYPE_4__ base; TYPE_6__ state; } ;
struct drm_framebuffer {int height; int width; TYPE_2__* format; } ;
struct TYPE_8__ {int* cpp; int depth; } ;
struct TYPE_7__ {int ilut; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*,int ,int ,int,int) ;

int
FUNC_1(struct nv50_wndw *VAR_1, struct nv50_wndw_atom *VAR_2,
   struct nv50_head_atom *VAR_3)
{
 const struct drm_framebuffer *VAR_4 = VAR_2->state.fb;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_2->state, &VAR_3->state,
        VAR_0,
        VAR_0,
        0, 1);
 if (VAR_5)
  return VAR_5;

 if (!VAR_1->func->ilut) {
  if ((VAR_3->base.cpp != 1) ^ (VAR_4->format->cpp[0] != 1))
   VAR_3->state.color_mgmt_changed = 1;
 }

 VAR_3->base.depth = VAR_4->format->depth;
 VAR_3->base.cpp = VAR_4->format->cpp[0];
 VAR_3->base.x = VAR_2->state.src.x1 >> 16;
 VAR_3->base.y = VAR_2->state.src.y1 >> 16;
 VAR_3->base.w = VAR_2->state.fb->width;
 VAR_3->base.h = VAR_2->state.fb->height;





 if (!VAR_3->base.depth)
  VAR_3->base.depth = VAR_3->base.cpp * 8;

 return 0;
}
