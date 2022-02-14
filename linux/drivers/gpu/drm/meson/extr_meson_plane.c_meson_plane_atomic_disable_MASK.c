
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_plane {int enabled; struct meson_drm* priv; } ;
struct TYPE_2__ {int osd1_enabled; } ;
struct meson_drm {TYPE_1__ viu; scalar_t__ io_base; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct meson_drm*,int ) ;
 struct meson_plane* FUNC_2 (struct drm_plane*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct drm_plane *VAR_5,
           struct drm_plane_state *VAR_6)
{
 struct meson_plane *VAR_7 = FUNC_2(VAR_5);
 struct meson_drm *VAR_8 = VAR_7->priv;


 if (FUNC_1(VAR_8, VAR_4))
  FUNC_3(VAR_1, 0,
        VAR_8->io_base + FUNC_0(VAR_0));
 else
  FUNC_3(VAR_3, 0,
        VAR_8->io_base + FUNC_0(VAR_2));

 VAR_7->enabled = 0;
 VAR_8->viu.osd1_enabled = 0;
}
