
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_audio {int dummy; } ;
struct TYPE_3__ {int pixelclock; } ;
struct TYPE_4__ {TYPE_1__ vm; } ;
struct omap_hdmi {int audio_configured; int lock; struct omap_dss_audio audio_config; TYPE_2__ cfg; int wp; int core; scalar_t__ display_enabled; } ;
struct device {int dummy; } ;


 struct omap_hdmi* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int *,struct omap_dss_audio*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0,
        struct omap_dss_audio *VAR_1)
{
 struct omap_hdmi *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;

 FUNC_2(&VAR_2->lock);

 if (VAR_2->display_enabled) {
  VAR_3 = FUNC_1(&VAR_2->core, &VAR_2->wp, VAR_1,
      VAR_2->cfg.vm.pixelclock);
  if (VAR_3)
   goto out;
 }

 VAR_2->audio_configured = 1;
 VAR_2->audio_config = *VAR_1;
out:
 FUNC_3(&VAR_2->lock);

 return VAR_3;
}
