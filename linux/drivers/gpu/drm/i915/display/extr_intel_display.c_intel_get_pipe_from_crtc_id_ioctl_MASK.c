
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int pipe; } ;
struct drm_i915_get_pipe_from_crtc_id {int pipe; int crtc_id; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 struct drm_crtc* FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 struct intel_crtc* FUNC_1 (struct drm_crtc*) ;

int FUNC_2(struct drm_device *VAR_1, void *VAR_2,
          struct drm_file *VAR_3)
{
 struct drm_i915_get_pipe_from_crtc_id *VAR_4 = VAR_2;
 struct drm_crtc *VAR_5;
 struct intel_crtc *VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_4->crtc_id);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5);
 VAR_4->pipe = VAR_6->pipe;

 return 0;
}
