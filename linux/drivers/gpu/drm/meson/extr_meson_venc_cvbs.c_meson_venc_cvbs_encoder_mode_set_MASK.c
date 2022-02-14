
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_venc_cvbs {struct meson_drm* priv; } ;
struct meson_drm {int dummy; } ;
struct meson_cvbs_mode {int enci; int mode; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_display_mode*,int *) ;
 struct meson_venc_cvbs* FUNC_1 (struct drm_encoder*) ;
 struct meson_cvbs_mode* VAR_3 ;
 int FUNC_2 (struct meson_drm*,int ,int ,int ,int ,int) ;
 int FUNC_3 (struct meson_drm*,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_4,
       struct drm_display_mode *VAR_5,
       struct drm_display_mode *VAR_6)
{
 struct meson_venc_cvbs *VAR_7 =
     FUNC_1(VAR_4);
 struct meson_drm *VAR_8 = VAR_7->priv;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
  struct meson_cvbs_mode *VAR_10 = &VAR_3[VAR_9];

  if (FUNC_0(VAR_5, &VAR_10->mode)) {
   FUNC_3(VAR_8,
        VAR_10->enci);


   FUNC_2(VAR_8, VAR_2,
      VAR_1, VAR_1,
      VAR_1, 1);
   break;
  }
 }
}
