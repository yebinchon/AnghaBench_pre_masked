
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lfp_backlight_data_entry {int min_brightness; int active_low_pwm; int pwm_freq_hz; int type; } ;
struct lfp_backlight_control_method {int controller; int type; } ;
struct TYPE_3__ {int present; int controller; int min_brightness; int active_low_pwm; int pwm_freq_hz; int type; } ;
struct TYPE_4__ {int panel_type; TYPE_1__ backlight; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct bdb_lfp_backlight_data {int entry_size; int * level; struct lfp_backlight_control_method* backlight_control; struct lfp_backlight_data_entry* data; } ;
struct bdb_header {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_2 ;
 struct bdb_lfp_backlight_data* FUNC_1 (struct bdb_header const*,int ) ;
 int FUNC_2 (struct bdb_lfp_backlight_data const*) ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_private *VAR_3,
      const struct bdb_header *VAR_4)
{
 const struct bdb_lfp_backlight_data *VAR_5;
 const struct lfp_backlight_data_entry *VAR_6;
 int VAR_7 = VAR_3->vbt.panel_type;

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_5)
  return;

 if (VAR_5->entry_size != sizeof(VAR_5->data[0])) {
  FUNC_0("Unsupported backlight data entry size %u\n",
         VAR_5->entry_size);
  return;
 }

 VAR_6 = &VAR_5->data[VAR_7];

 VAR_3->vbt.backlight.present = VAR_6->type == VAR_0;
 if (!VAR_3->vbt.backlight.present) {
  FUNC_0("PWM backlight not present in VBT (type %u)\n",
         VAR_6->type);
  return;
 }

 VAR_3->vbt.backlight.type = VAR_2;
 if (VAR_4->version >= 191 &&
     FUNC_2(VAR_5) >= sizeof(*VAR_5)) {
  const struct lfp_backlight_control_method *VAR_8;

  VAR_8 = &VAR_5->backlight_control[VAR_7];
  VAR_3->vbt.backlight.type = VAR_8->type;
  VAR_3->vbt.backlight.controller = VAR_8->controller;
 }

 VAR_3->vbt.backlight.pwm_freq_hz = VAR_6->pwm_freq_hz;
 VAR_3->vbt.backlight.active_low_pwm = VAR_6->active_low_pwm;
 VAR_3->vbt.backlight.min_brightness = VAR_6->min_brightness;
 FUNC_0("VBT backlight PWM modulation frequency %u Hz, "
        "active %s, min brightness %u, level %u, controller %u\n",
        VAR_3->vbt.backlight.pwm_freq_hz,
        VAR_3->vbt.backlight.active_low_pwm ? "low" : "high",
        VAR_3->vbt.backlight.min_brightness,
        VAR_5->level[VAR_7],
        VAR_3->vbt.backlight.controller);
}
