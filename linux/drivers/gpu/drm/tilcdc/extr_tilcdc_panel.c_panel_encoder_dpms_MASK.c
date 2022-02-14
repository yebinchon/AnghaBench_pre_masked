
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_encoder {TYPE_1__* mod; } ;
struct gpio_desc {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_4__ {int power; } ;
struct backlight_device {TYPE_2__ props; } ;
struct TYPE_3__ {struct gpio_desc* enable_gpio; struct backlight_device* backlight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct gpio_desc*,int) ;
 struct panel_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_3, int VAR_4)
{
 struct panel_encoder *VAR_5 = FUNC_2(VAR_3);
 struct backlight_device *VAR_6 = VAR_5->mod->backlight;
 struct gpio_desc *VAR_7 = VAR_5->mod->enable_gpio;

 if (VAR_6) {
  VAR_6->props.power = VAR_4 == VAR_0 ?
      VAR_2 : VAR_1;
  FUNC_0(VAR_6);
 }

 if (VAR_7)
  FUNC_1(VAR_7,
      VAR_4 == VAR_0 ? 1 : 0);
}
