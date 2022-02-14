
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wuxga_nt_panel {int enabled; TYPE_2__* backlight; int dsi; } ;
struct drm_panel {int dummy; } ;
struct TYPE_3__ {int state; int power; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 struct wuxga_nt_panel* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_2)
{
 struct wuxga_nt_panel *VAR_3 = FUNC_2(VAR_2);
 int VAR_4, VAR_5 = 0;

 if (!VAR_3->enabled)
  return 0;

 VAR_4 = FUNC_1(VAR_3->dsi);

 if (VAR_3->backlight) {
  VAR_3->backlight->props.power = VAR_1;
  VAR_3->backlight->props.state |= VAR_0;
  VAR_5 = FUNC_0(VAR_3->backlight);
 }

 VAR_3->enabled = 0;

 return VAR_4 ? VAR_4 : VAR_5;
}
