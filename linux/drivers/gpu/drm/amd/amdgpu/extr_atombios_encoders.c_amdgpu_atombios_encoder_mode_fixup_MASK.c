
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_display_mode {int flags; scalar_t__ crtc_vsync_start; scalar_t__ crtc_vdisplay; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_encoder {int active_device; scalar_t__ rmx_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct drm_connector*,struct drm_display_mode*) ;
 scalar_t__ FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*) ;
 struct drm_connector* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_5 (struct drm_display_mode*,int ) ;
 struct amdgpu_encoder* FUNC_6 (struct drm_encoder*) ;

bool FUNC_7(struct drm_encoder *VAR_5,
     const struct drm_display_mode *VAR_6,
     struct drm_display_mode *VAR_7)
{
 struct amdgpu_encoder *VAR_8 = FUNC_6(VAR_5);


 FUNC_2(VAR_5);
 FUNC_5(VAR_7, 0);


 if ((VAR_6->flags & VAR_2)
     && (VAR_6->crtc_vsync_start < (VAR_6->crtc_vdisplay + 2)))
  VAR_7->crtc_vsync_start = VAR_7->crtc_vdisplay + 2;


 if (VAR_6->crtc_vsync_start == VAR_6->crtc_vdisplay)
  VAR_7->crtc_vsync_start++;


 if (VAR_8->active_device & (VAR_1))
  FUNC_4(VAR_5, VAR_7);
 else if (VAR_8->rmx_type != VAR_4)
  FUNC_4(VAR_5, VAR_7);

 if ((VAR_8->active_device & (VAR_0 | VAR_1)) ||
     (FUNC_1(VAR_5) != VAR_3)) {
  struct drm_connector *VAR_9 = FUNC_3(VAR_5);
  FUNC_0(VAR_9, VAR_7);
 }

 return 1;
}
