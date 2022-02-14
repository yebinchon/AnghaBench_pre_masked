
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_cvbs_mode {int mode; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {int mode; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 struct meson_cvbs_mode* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct drm_encoder *VAR_3,
     struct drm_crtc_state *VAR_4,
     struct drm_connector_state *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  struct meson_cvbs_mode *VAR_7 = &VAR_2[VAR_6];

  if (FUNC_0(&VAR_4->mode, &VAR_7->mode))
   return 0;
 }

 return -VAR_0;
}
