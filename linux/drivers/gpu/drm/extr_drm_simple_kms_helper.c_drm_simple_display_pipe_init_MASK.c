
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct drm_simple_display_pipe_funcs {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct drm_plane {int dummy; } ;
struct drm_encoder {int possible_crtcs; } ;
struct drm_simple_display_pipe {struct drm_simple_display_pipe_funcs const* funcs; struct drm_connector* connector; struct drm_crtc crtc; struct drm_plane plane; struct drm_encoder encoder; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_crtc*,struct drm_plane*,int *,int *,int *) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_5 (struct drm_plane*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct drm_device*,struct drm_plane*,int ,int *,int const*,unsigned int,int const*,int ,int *) ;

int FUNC_7(struct drm_device *VAR_7,
   struct drm_simple_display_pipe *VAR_8,
   const struct drm_simple_display_pipe_funcs *VAR_9,
   const uint32_t *VAR_10, unsigned int VAR_11,
   const uint64_t *VAR_12,
   struct drm_connector *VAR_13)
{
 struct drm_encoder *VAR_14 = &VAR_8->encoder;
 struct drm_plane *VAR_15 = &VAR_8->plane;
 struct drm_crtc *VAR_16 = &VAR_8->crtc;
 int VAR_17;

 VAR_8->connector = VAR_13;
 VAR_8->funcs = VAR_9;

 FUNC_5(VAR_15, &VAR_6);
 VAR_17 = FUNC_6(VAR_7, VAR_15, 0,
           &VAR_5,
           VAR_10, VAR_11,
           VAR_12,
           VAR_1, ((void*)0));
 if (VAR_17)
  return VAR_17;

 FUNC_1(VAR_16, &VAR_3);
 VAR_17 = FUNC_2(VAR_7, VAR_16, VAR_15, ((void*)0),
     &VAR_2, ((void*)0));
 if (VAR_17)
  return VAR_17;

 VAR_14->possible_crtcs = FUNC_3(VAR_16);
 VAR_17 = FUNC_4(VAR_7, VAR_14, &VAR_4,
          VAR_0, ((void*)0));
 if (VAR_17 || !VAR_13)
  return VAR_17;

 return FUNC_0(VAR_13, VAR_14);
}
