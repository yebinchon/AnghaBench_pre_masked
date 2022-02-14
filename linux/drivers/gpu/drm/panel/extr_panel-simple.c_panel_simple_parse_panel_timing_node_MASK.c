
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videomode {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct panel_simple {TYPE_1__ override_mode; struct panel_desc* desc; } ;
struct panel_desc {int num_modes; unsigned int num_timings; struct display_timing* timings; } ;
struct display_timing {scalar_t__ flags; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct display_timing const*,struct display_timing const*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct videomode*,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct display_timing const*,struct videomode*) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_5(struct device *VAR_10,
       struct panel_simple *VAR_11,
       const struct display_timing *VAR_12)
{
 const struct panel_desc *VAR_13 = VAR_11->desc;
 struct videomode VAR_14;
 unsigned int VAR_15;

 if (FUNC_1(VAR_13->num_modes)) {
  FUNC_2(VAR_10, "Reject override mode: panel has a fixed mode\n");
  return;
 }
 if (FUNC_1(!VAR_13->num_timings)) {
  FUNC_2(VAR_10, "Reject override mode: no timings specified\n");
  return;
 }

 for (VAR_15 = 0; VAR_15 < VAR_11->desc->num_timings; VAR_15++) {
  const struct display_timing *VAR_16 = &VAR_11->desc->timings[VAR_15];

  if (!FUNC_0(VAR_12, VAR_16, VAR_2) ||
      !FUNC_0(VAR_12, VAR_16, VAR_4) ||
      !FUNC_0(VAR_12, VAR_16, VAR_3) ||
      !FUNC_0(VAR_12, VAR_16, VAR_5) ||
      !FUNC_0(VAR_12, VAR_16, VAR_6) ||
      !FUNC_0(VAR_12, VAR_16, VAR_8) ||
      !FUNC_0(VAR_12, VAR_16, VAR_7) ||
      !FUNC_0(VAR_12, VAR_16, VAR_9))
   continue;

  if (VAR_12->flags != VAR_16->flags)
   continue;

  FUNC_4(VAR_12, &VAR_14);
  FUNC_3(&VAR_14, &VAR_11->override_mode);
  VAR_11->override_mode.type |= VAR_0 |
          VAR_1;
  break;
 }

 if (FUNC_1(!VAR_11->override_mode.type))
  FUNC_2(VAR_10, "Reject override mode: No display_timing found\n");
}
