
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct std_timing {int dummy; } ;
struct edid {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_3__ {struct std_timing* timings; } ;
struct detailed_non_pixel {scalar_t__ type; TYPE_1__ data; } ;
struct TYPE_4__ {struct detailed_non_pixel other_data; } ;
struct detailed_timing {TYPE_2__ data; } ;
struct detailed_mode_closure {int modes; struct edid* edid; struct drm_connector* connector; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_connector*,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_1 (struct drm_connector*,struct edid*,struct std_timing*) ;

__attribute__((used)) static void
FUNC_2(struct detailed_timing *VAR_1, void *VAR_2)
{
 struct detailed_mode_closure *VAR_3 = VAR_2;
 struct detailed_non_pixel *VAR_4 = &VAR_1->data.other_data;
 struct drm_connector *VAR_5 = VAR_3->connector;
 struct edid *VAR_6 = VAR_3->edid;

 if (VAR_4->type == VAR_0) {
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
   struct std_timing *VAR_8;
   struct drm_display_mode *VAR_9;

   VAR_8 = &VAR_4->data.timings[VAR_7];
   VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_8);
   if (VAR_9) {
    FUNC_0(VAR_5, VAR_9);
    VAR_3->modes++;
   }
  }
 }
}
