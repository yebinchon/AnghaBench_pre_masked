
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_display_mode {int flags; } ;
struct drm_crtc_state {struct drm_display_mode mode; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct drm_encoder *VAR_2,
       struct drm_crtc_state *VAR_3,
       struct drm_connector_state *VAR_4)
{
 struct drm_display_mode *VAR_5 = &VAR_3->mode;

 if (VAR_5->flags & VAR_0)
  return -VAR_1;

 return 0;
}
