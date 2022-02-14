
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {int dummy; } ;
struct vmw_plane_state {size_t bo_size; int * bo; } ;
struct drm_plane_state {int crtc_w; int crtc_h; struct drm_crtc* crtc; struct drm_framebuffer* fb; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {int dev; } ;
struct TYPE_2__ {int crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct vmw_private*,int *,size_t,int *,int,int *) ;
 int FUNC_2 (struct vmw_private*,int *,int) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (struct vmw_private*) ;
 int FUNC_5 (struct vmw_private*) ;
 struct vmw_plane_state* FUNC_6 (struct drm_plane_state*) ;
 struct vmw_private* FUNC_7 (int ) ;
 int FUNC_8 (struct vmw_private*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_9(struct drm_plane *VAR_4,
     struct drm_plane_state *VAR_5)
{
 struct drm_framebuffer *VAR_6 = VAR_5->fb;
 struct drm_crtc *VAR_7 = VAR_4->state->crtc ?: VAR_5->crtc;
 struct vmw_plane_state *VAR_8 = FUNC_6(VAR_5);
 struct vmw_private *VAR_9;
 size_t VAR_10;
 int VAR_11;


 if (!VAR_6) {
  FUNC_3(&VAR_8->bo);
  VAR_8->bo_size = 0;

  return 0;
 }

 VAR_10 = VAR_5->crtc_w * VAR_5->crtc_h * 4;
 VAR_9 = FUNC_7(VAR_7->dev);

 if (VAR_8->bo) {
  if (VAR_8->bo_size == VAR_10) {




   return FUNC_2(VAR_9, VAR_8->bo,
            1);
  }

  FUNC_3(&VAR_8->bo);
  VAR_8->bo_size = 0;
 }

 VAR_8->bo = FUNC_0(sizeof(*VAR_8->bo), VAR_1);
 if (!VAR_8->bo)
  return -VAR_0;

 FUNC_8(VAR_9);




 FUNC_4(VAR_9);
 VAR_11 = FUNC_1(VAR_9, VAR_8->bo, VAR_10,
         &VAR_3,
         0, &VAR_2);
 FUNC_5(VAR_9);
 if (VAR_11) {
  VAR_8->bo = ((void*)0);
  return VAR_11;
 }

 VAR_8->bo_size = VAR_10;





 return FUNC_2(VAR_9, VAR_8->bo, 1);
}
