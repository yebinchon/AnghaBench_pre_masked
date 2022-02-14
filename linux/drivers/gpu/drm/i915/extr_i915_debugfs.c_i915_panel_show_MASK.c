
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct drm_connector* private; } ;
struct intel_dp {int backlight_off_delay; int backlight_on_delay; int panel_power_down_delay; int panel_power_up_delay; } ;
struct drm_connector {scalar_t__ status; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct intel_dp* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 struct drm_connector *VAR_4 = VAR_2->private;
 struct intel_dp *VAR_5 =
  FUNC_0(&FUNC_1(VAR_4)->base);

 if (VAR_4->status != VAR_1)
  return -VAR_0;

 FUNC_2(VAR_2, "Panel power up delay: %d\n",
     VAR_5->panel_power_up_delay);
 FUNC_2(VAR_2, "Panel power down delay: %d\n",
     VAR_5->panel_power_down_delay);
 FUNC_2(VAR_2, "Backlight on delay: %d\n",
     VAR_5->backlight_on_delay);
 FUNC_2(VAR_2, "Backlight off delay: %d\n",
     VAR_5->backlight_off_delay);

 return 0;
}
