
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hdmi {int display_enabled; int lock; int audio_playing_lock; } ;
struct omap_dss_device {int dummy; } ;


 int FUNC_0 (char*) ;
 struct omap_hdmi* FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (struct omap_hdmi*) ;
 int FUNC_3 (struct omap_hdmi*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct omap_dss_device *VAR_0)
{
 struct omap_hdmi *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_0("Enter hdmi_display_disable\n");

 FUNC_4(&VAR_1->lock);

 FUNC_6(&VAR_1->audio_playing_lock, VAR_2);
 FUNC_3(VAR_1);
 VAR_1->display_enabled = 0;
 FUNC_7(&VAR_1->audio_playing_lock, VAR_2);

 FUNC_2(VAR_1);

 FUNC_5(&VAR_1->lock);
}
