
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pixelclock; } ;
struct TYPE_5__ {TYPE_1__ vm; } ;
struct omap_hdmi {int audio_configured; int display_enabled; int lock; int audio_playing_lock; scalar_t__ audio_playing; TYPE_3__* pdev; int (* audio_abort_cb ) (int *) ;TYPE_2__ cfg; int audio_config; int wp; int core; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 struct omap_hdmi* FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (int *,int *,int *,int ) ;
 int FUNC_4 (struct omap_hdmi*) ;
 int FUNC_5 (struct omap_hdmi*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct omap_dss_device *VAR_0)
{
 struct omap_hdmi *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2;
 int VAR_3;

 FUNC_0("ENTER hdmi_display_enable\n");

 FUNC_6(&VAR_1->lock);

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3) {
  FUNC_1("failed to power on device\n");
  goto done;
 }

 if (VAR_1->audio_configured) {
  VAR_3 = FUNC_3(&VAR_1->core, &VAR_1->wp,
           &VAR_1->audio_config,
           VAR_1->cfg.vm.pixelclock);
  if (VAR_3) {
   FUNC_1("Error restoring audio configuration: %d", VAR_3);
   VAR_1->audio_abort_cb(&VAR_1->pdev->dev);
   VAR_1->audio_configured = 0;
  }
 }

 FUNC_8(&VAR_1->audio_playing_lock, VAR_2);
 if (VAR_1->audio_configured && VAR_1->audio_playing)
  FUNC_5(VAR_1);
 VAR_1->display_enabled = 1;
 FUNC_9(&VAR_1->audio_playing_lock, VAR_2);

done:
 FUNC_7(&VAR_1->lock);
}
