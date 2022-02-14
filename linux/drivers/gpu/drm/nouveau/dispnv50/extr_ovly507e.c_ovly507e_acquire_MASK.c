
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct drm_framebuffer* fb; } ;
struct nv50_wndw_atom {TYPE_3__ state; } ;
struct nv50_wndw {int dummy; } ;
struct TYPE_5__ {int cpp; } ;
struct nv50_head_atom {TYPE_2__ ovly; int state; } ;
struct drm_framebuffer {TYPE_1__* format; } ;
struct TYPE_4__ {int * cpp; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int ,int ,int,int) ;

int
FUNC_1(struct nv50_wndw *VAR_1, struct nv50_wndw_atom *VAR_2,
   struct nv50_head_atom *VAR_3)
{
 const struct drm_framebuffer *VAR_4 = VAR_2->state.fb;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_2->state, &VAR_3->state,
        VAR_0,
        VAR_0,
        1, 1);
 if (VAR_5)
  return VAR_5;

 VAR_3->ovly.cpp = VAR_4->format->cpp[0];
 return 0;
}
