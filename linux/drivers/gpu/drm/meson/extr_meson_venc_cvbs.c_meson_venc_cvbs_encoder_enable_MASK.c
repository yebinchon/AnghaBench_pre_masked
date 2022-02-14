
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_venc_cvbs {struct meson_drm* priv; } ;
struct meson_drm {int hhi; scalar_t__ io_base; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 struct meson_venc_cvbs* FUNC_1 (struct drm_encoder*) ;
 scalar_t__ FUNC_2 (struct meson_drm*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_10)
{
 struct meson_venc_cvbs *VAR_11 =
     FUNC_1(VAR_10);
 struct meson_drm *VAR_12 = VAR_11->priv;


 FUNC_4(VAR_5, 0,
       VAR_12->io_base + FUNC_0(VAR_4));

 if (FUNC_2(VAR_12, VAR_7)) {
  FUNC_3(VAR_12->hhi, VAR_0, 1);
  FUNC_3(VAR_12->hhi, VAR_2, 0);
 } else if (FUNC_2(VAR_12, VAR_9) ||
   FUNC_2(VAR_12, VAR_8)) {
  FUNC_3(VAR_12->hhi, VAR_0, 0xf0001);
  FUNC_3(VAR_12->hhi, VAR_2, 0);
 } else if (FUNC_2(VAR_12, VAR_6)) {
  FUNC_3(VAR_12->hhi, VAR_1, 0x906001);
  FUNC_3(VAR_12->hhi, VAR_3, 0);
 }
}
