
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_dc {int dev; int stats; scalar_t__ rgb; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_2__* dev; TYPE_1__* state; } ;
struct TYPE_4__ {int event_lock; } ;
struct TYPE_3__ {int * event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct drm_crtc*,int *) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tegra_dc*) ;
 int FUNC_6 (struct tegra_dc*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tegra_dc*) ;
 int FUNC_9 (struct tegra_dc*,int) ;
 int FUNC_10 (struct tegra_dc*,int,int ) ;
 struct tegra_dc* FUNC_11 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_12(struct drm_crtc *VAR_8,
          struct drm_crtc_state *VAR_9)
{
 struct tegra_dc *VAR_10 = FUNC_11(VAR_8);
 u32 VAR_11;

 if (!FUNC_5(VAR_10)) {
  FUNC_8(VAR_10);





  FUNC_9(VAR_10, 100);
 }
 if (VAR_10->rgb) {
  VAR_11 = FUNC_6(VAR_10, VAR_0);
  VAR_11 &= ~(VAR_3 | VAR_4 | VAR_5 | VAR_6 |
      VAR_7 | VAR_1 | VAR_2);
  FUNC_10(VAR_10, VAR_11, VAR_0);
 }

 FUNC_7(&VAR_10->stats);
 FUNC_1(VAR_8);

 FUNC_3(&VAR_8->dev->event_lock);

 if (VAR_8->state->event) {
  FUNC_0(VAR_8, VAR_8->state->event);
  VAR_8->state->event = ((void*)0);
 }

 FUNC_4(&VAR_8->dev->event_lock);

 FUNC_2(VAR_10->dev);
}
