
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_dw_hdmi {struct meson_drm* priv; } ;
struct meson_drm {int hhi; } ;
struct dw_hdmi {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct dw_hdmi *VAR_1,
    void *VAR_2)
{
 struct meson_dw_hdmi *VAR_3 = (struct meson_dw_hdmi *)VAR_2;
 struct meson_drm *VAR_4 = VAR_3->priv;

 FUNC_0("\n");

 FUNC_1(VAR_4->hhi, VAR_0, 0);
}
