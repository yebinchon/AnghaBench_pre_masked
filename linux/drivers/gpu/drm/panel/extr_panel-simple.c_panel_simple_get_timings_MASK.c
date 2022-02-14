
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panel_simple {TYPE_1__* desc; } ;
struct drm_panel {int dummy; } ;
struct display_timing {int dummy; } ;
struct TYPE_2__ {unsigned int num_timings; struct display_timing* timings; } ;


 struct panel_simple* FUNC_0 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_1(struct drm_panel *VAR_0,
        unsigned int VAR_1,
        struct display_timing *VAR_2)
{
 struct panel_simple *VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4;

 if (VAR_3->desc->num_timings < VAR_1)
  VAR_1 = VAR_3->desc->num_timings;

 if (VAR_2)
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   VAR_2[VAR_4] = VAR_3->desc->timings[VAR_4];

 return VAR_3->desc->num_timings;
}
