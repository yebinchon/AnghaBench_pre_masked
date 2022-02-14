
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_plane {int dev; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct drm_modeset_acquire_ctx,int ,int) ;
 int FUNC_1 (struct drm_modeset_acquire_ctx,int) ;
 int FUNC_2 (struct drm_plane*,struct drm_crtc*,struct drm_framebuffer*,int ,int ,int ,int ,int ,int ,int ,int ,struct drm_modeset_acquire_ctx*) ;
 int FUNC_3 (struct drm_plane*,struct drm_crtc*,struct drm_framebuffer*,int ,int ,int ,int ,int ,int ,int ,int ,struct drm_modeset_acquire_ctx*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct drm_plane *VAR_1,
        struct drm_crtc *VAR_2,
        struct drm_framebuffer *VAR_3,
        int32_t VAR_4, int32_t VAR_5,
        uint32_t VAR_6, uint32_t VAR_7,

        uint32_t VAR_8, uint32_t VAR_9,
        uint32_t VAR_10, uint32_t VAR_11)
{
 struct drm_modeset_acquire_ctx VAR_12;
 int VAR_13;

 FUNC_0(VAR_1->dev, VAR_12,
       VAR_0, VAR_13);

 if (FUNC_4(VAR_1->dev))
  VAR_13 = FUNC_2(VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9, VAR_10, VAR_11, &VAR_12);
 else
  VAR_13 = FUNC_3(VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5, VAR_6, VAR_7,
       VAR_8, VAR_9, VAR_10, VAR_11, &VAR_12);

 FUNC_1(VAR_12, VAR_13);

 return VAR_13;
}
