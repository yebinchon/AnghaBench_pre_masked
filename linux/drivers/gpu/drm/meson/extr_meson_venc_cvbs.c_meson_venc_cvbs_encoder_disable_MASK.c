
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_venc_cvbs {struct meson_drm* priv; } ;
struct meson_drm {int hhi; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct meson_venc_cvbs* FUNC_0 (struct drm_encoder*) ;
 scalar_t__ FUNC_1 (struct meson_drm*,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_5)
{
 struct meson_venc_cvbs *VAR_6 =
     FUNC_0(VAR_5);
 struct meson_drm *VAR_7 = VAR_6->priv;


 if (FUNC_1(VAR_7, VAR_4)) {
  FUNC_2(VAR_7->hhi, VAR_1, 0);
  FUNC_2(VAR_7->hhi, VAR_3, 0);
 } else {
  FUNC_2(VAR_7->hhi, VAR_0, 0);
  FUNC_2(VAR_7->hhi, VAR_2, 8);
 }
}
