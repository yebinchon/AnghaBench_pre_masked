
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hdmi {int audio_playing; int audio_playing_lock; scalar_t__ display_enabled; int cfg; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 struct omap_hdmi* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct omap_hdmi*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct omap_hdmi *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_0(!FUNC_2(&VAR_1->cfg));

 FUNC_4(&VAR_1->audio_playing_lock, VAR_2);

 if (VAR_1->display_enabled)
  FUNC_3(VAR_1);
 VAR_1->audio_playing = 0;

 FUNC_5(&VAR_1->audio_playing_lock, VAR_2);
}
