
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hdmi {int audio_configured; int audio_playing; int lock; int * audio_abort_cb; } ;
struct device {int dummy; } ;


 struct omap_hdmi* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct omap_hdmi *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->lock);
 VAR_1->audio_abort_cb = ((void*)0);
 VAR_1->audio_configured = 0;
 VAR_1->audio_playing = 0;
 FUNC_2(&VAR_1->lock);

 return 0;
}
