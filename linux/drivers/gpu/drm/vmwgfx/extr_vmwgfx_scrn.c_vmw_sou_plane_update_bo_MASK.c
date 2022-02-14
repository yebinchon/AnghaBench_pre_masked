
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_private {int dummy; } ;
struct vmw_framebuffer {int dummy; } ;
struct vmw_fence_obj {int dummy; } ;
struct TYPE_4__ {int cpu_blit; int intr; int post_clip; int clip; int post_prepare; int calc_fifo_size; int * mutex; struct vmw_fence_obj** out_fence; struct vmw_framebuffer* vfb; int du; struct vmw_private* dev_priv; struct drm_plane_state* old_state; struct drm_plane* plane; } ;
struct vmw_du_update_plane_buffer {TYPE_2__ base; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_1__* state; } ;
struct TYPE_3__ {int crtc; } ;


 int FUNC_0 (struct vmw_du_update_plane_buffer*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct vmw_private *VAR_4,
       struct drm_plane *VAR_5,
       struct drm_plane_state *VAR_6,
       struct vmw_framebuffer *VAR_7,
       struct vmw_fence_obj **VAR_8)
{
 struct vmw_du_update_plane_buffer VAR_9;

 FUNC_0(&VAR_9, 0, sizeof(struct vmw_du_update_plane_buffer));
 VAR_9.base.plane = VAR_5;
 VAR_9.base.old_state = VAR_6;
 VAR_9.base.dev_priv = VAR_4;
 VAR_9.base.du = FUNC_1(VAR_5->state->crtc);
 VAR_9.base.vfb = VAR_7;
 VAR_9.base.out_fence = VAR_8;
 VAR_9.base.mutex = ((void*)0);
 VAR_9.base.cpu_blit = 0;
 VAR_9.base.intr = 1;

 VAR_9.base.calc_fifo_size = VAR_1;
 VAR_9.base.post_prepare = VAR_0;
 VAR_9.base.clip = VAR_2;
 VAR_9.base.post_clip = VAR_3;

 return FUNC_2(&VAR_9.base);
}
