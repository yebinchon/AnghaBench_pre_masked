
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_drm {scalar_t__ io_base; } ;
struct meson_crtc {struct meson_drm* priv; } ;
struct TYPE_2__ {int hdisplay; int vdisplay; } ;
struct drm_crtc_state {TYPE_1__ mode; } ;
struct drm_crtc {struct drm_crtc_state* state; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct drm_crtc*) ;
 struct meson_crtc* FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_5,
       struct drm_crtc_state *VAR_6)
{
 struct meson_crtc *VAR_7 = FUNC_6(VAR_5);
 struct drm_crtc_state *VAR_8 = VAR_5->state;
 struct meson_drm *VAR_9 = VAR_7->priv;

 FUNC_0("\n");

 if (!VAR_8) {
  FUNC_1("Invalid crtc_state\n");
  return;
 }


 FUNC_7(FUNC_2(FUNC_3(11, 0), 2303),
        VAR_9->io_base + FUNC_4(VAR_4));


 FUNC_7(VAR_8->mode.hdisplay |
        VAR_8->mode.vdisplay << 16,
        VAR_9->io_base + FUNC_4(VAR_3));

 FUNC_8(0 << 16 |
   (VAR_8->mode.hdisplay - 1),
   VAR_9->io_base + FUNC_4(VAR_0));
 FUNC_8(0 << 16 |
   (VAR_8->mode.vdisplay - 1),
   VAR_9->io_base + FUNC_4(VAR_1));
 FUNC_8(VAR_8->mode.hdisplay << 16 |
   VAR_8->mode.vdisplay,
   VAR_9->io_base + FUNC_4(VAR_2));

 FUNC_5(VAR_5);
}
