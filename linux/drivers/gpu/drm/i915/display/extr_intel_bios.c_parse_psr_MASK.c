
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct psr_table {int idle_frames; int lines_to_wait; int tp1_wakeup_time; int tp2_tp3_wakeup_time; int require_aux_to_wakeup; int full_link; } ;
struct TYPE_3__ {int idle_frames; int tp1_wakeup_time_us; int tp2_tp3_wakeup_time_us; int psr2_tp2_tp3_wakeup_time_us; int lines_to_wait; int require_aux_wakeup; int full_link; } ;
struct TYPE_4__ {int panel_type; TYPE_1__ psr; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct bdb_psr {int psr2_tp2_tp3_wakeup_time; struct psr_table* psr_table; } ;
struct bdb_header {int version; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bdb_psr* FUNC_4 (struct bdb_header const*,int ) ;

__attribute__((used)) static void
FUNC_5(struct drm_i915_private *VAR_5, const struct bdb_header *VAR_6)
{
 const struct bdb_psr *VAR_7;
 const struct psr_table *VAR_8;
 int VAR_9 = VAR_5->vbt.panel_type;

 VAR_7 = FUNC_4(VAR_6, VAR_0);
 if (!VAR_7) {
  FUNC_0("No PSR BDB found.\n");
  return;
 }

 VAR_8 = &VAR_7->psr_table[VAR_9];

 VAR_5->vbt.psr.full_link = VAR_8->full_link;
 VAR_5->vbt.psr.require_aux_wakeup = VAR_8->require_aux_to_wakeup;


 VAR_5->vbt.psr.idle_frames = VAR_8->idle_frames < 0 ? 0 :
  VAR_8->idle_frames > 15 ? 15 : VAR_8->idle_frames;

 switch (VAR_8->lines_to_wait) {
 case 0:
  VAR_5->vbt.psr.lines_to_wait = VAR_1;
  break;
 case 1:
  VAR_5->vbt.psr.lines_to_wait = VAR_2;
  break;
 case 2:
  VAR_5->vbt.psr.lines_to_wait = VAR_3;
  break;
 case 3:
  VAR_5->vbt.psr.lines_to_wait = VAR_4;
  break;
 default:
  FUNC_0("VBT has unknown PSR lines to wait %u\n",
         VAR_8->lines_to_wait);
  break;
 }





 if (VAR_6->version >= 205 &&
     (FUNC_3(VAR_5) || FUNC_2(VAR_5) ||
      FUNC_1(VAR_5) >= 10)) {
  switch (VAR_8->tp1_wakeup_time) {
  case 0:
   VAR_5->vbt.psr.tp1_wakeup_time_us = 500;
   break;
  case 1:
   VAR_5->vbt.psr.tp1_wakeup_time_us = 100;
   break;
  case 3:
   VAR_5->vbt.psr.tp1_wakeup_time_us = 0;
   break;
  default:
   FUNC_0("VBT tp1 wakeup time value %d is outside range[0-3], defaulting to max value 2500us\n",
     VAR_8->tp1_wakeup_time);

  case 2:
   VAR_5->vbt.psr.tp1_wakeup_time_us = 2500;
   break;
  }

  switch (VAR_8->tp2_tp3_wakeup_time) {
  case 0:
   VAR_5->vbt.psr.tp2_tp3_wakeup_time_us = 500;
   break;
  case 1:
   VAR_5->vbt.psr.tp2_tp3_wakeup_time_us = 100;
   break;
  case 3:
   VAR_5->vbt.psr.tp2_tp3_wakeup_time_us = 0;
   break;
  default:
   FUNC_0("VBT tp2_tp3 wakeup time value %d is outside range[0-3], defaulting to max value 2500us\n",
     VAR_8->tp2_tp3_wakeup_time);

  case 2:
   VAR_5->vbt.psr.tp2_tp3_wakeup_time_us = 2500;
  break;
  }
 } else {
  VAR_5->vbt.psr.tp1_wakeup_time_us = VAR_8->tp1_wakeup_time * 100;
  VAR_5->vbt.psr.tp2_tp3_wakeup_time_us = VAR_8->tp2_tp3_wakeup_time * 100;
 }

 if (VAR_6->version >= 226) {
  u32 VAR_10 = VAR_7->psr2_tp2_tp3_wakeup_time;

  VAR_10 = (VAR_10 >> (2 * VAR_9)) & 0x3;
  switch (VAR_10) {
  case 0:
   VAR_10 = 500;
   break;
  case 1:
   VAR_10 = 100;
   break;
  case 3:
   VAR_10 = 50;
   break;
  default:
  case 2:
   VAR_10 = 2500;
   break;
  }
  VAR_5->vbt.psr.psr2_tp2_tp3_wakeup_time_us = VAR_10;
 } else {

  VAR_5->vbt.psr.psr2_tp2_tp3_wakeup_time_us = VAR_5->vbt.psr.tp2_tp3_wakeup_time_us;
 }
}
