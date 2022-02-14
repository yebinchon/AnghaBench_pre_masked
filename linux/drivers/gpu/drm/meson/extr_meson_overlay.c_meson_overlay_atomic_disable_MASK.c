
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_overlay {struct meson_drm* priv; } ;
struct TYPE_2__ {int vd1_enabled; } ;
struct meson_drm {scalar_t__ io_base; TYPE_1__ viu; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct meson_drm*,int ) ;
 struct meson_overlay* FUNC_3 (struct drm_plane*) ;
 int FUNC_4 (int,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct drm_plane *VAR_8,
           struct drm_plane_state *VAR_9)
{
 struct meson_overlay *VAR_10 = FUNC_3(VAR_8);
 struct meson_drm *VAR_11 = VAR_10->priv;

 FUNC_0("\n");

 VAR_11->viu.vd1_enabled = 0;


 if (FUNC_2(VAR_11, VAR_7)) {
  FUNC_5(0, VAR_11->io_base + FUNC_1(VAR_0));
  FUNC_5(0, VAR_11->io_base + FUNC_1(VAR_2));
  FUNC_5(0, VAR_11->io_base + FUNC_1(VAR_1 + 0x17b0));
  FUNC_5(0, VAR_11->io_base + FUNC_1(VAR_3 + 0x17b0));
 } else
  FUNC_4(VAR_5 | VAR_6, 0,
        VAR_11->io_base + FUNC_1(VAR_4));

}
