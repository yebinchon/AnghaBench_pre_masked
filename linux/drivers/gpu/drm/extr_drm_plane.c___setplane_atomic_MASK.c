
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_plane {TYPE_1__* funcs; int dev; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef int int32_t ;
struct TYPE_2__ {int (* disable_plane ) (struct drm_plane*,struct drm_modeset_acquire_ctx*) ;int (* update_plane ) (struct drm_plane*,struct drm_crtc*,struct drm_framebuffer*,int ,int ,int ,int ,int ,int ,int ,int ,struct drm_modeset_acquire_ctx*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_plane*,struct drm_crtc*,struct drm_framebuffer*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_plane*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_4 (struct drm_plane*,struct drm_crtc*,struct drm_framebuffer*,int ,int ,int ,int ,int ,int ,int ,int ,struct drm_modeset_acquire_ctx*) ;

__attribute__((used)) static int FUNC_5(struct drm_plane *VAR_0,
        struct drm_crtc *VAR_1,
        struct drm_framebuffer *VAR_2,
        int32_t VAR_3, int32_t VAR_4,
        uint32_t VAR_5, uint32_t VAR_6,
        uint32_t VAR_7, uint32_t VAR_8,
        uint32_t VAR_9, uint32_t VAR_10,
        struct drm_modeset_acquire_ctx *VAR_11)
{
 int VAR_12;

 FUNC_0(!FUNC_2(VAR_0->dev));


 if (!VAR_2)
  return VAR_0->funcs->disable_plane(VAR_0, VAR_11);
 VAR_12 = FUNC_1(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_12)
  return VAR_12;

 return VAR_0->funcs->update_plane(VAR_0, VAR_1, VAR_2,
       VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
}
