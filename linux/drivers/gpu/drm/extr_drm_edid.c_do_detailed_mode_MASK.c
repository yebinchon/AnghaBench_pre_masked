
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int type; } ;
struct detailed_timing {scalar_t__ pixel_clock; } ;
struct detailed_mode_closure {int preferred; int modes; TYPE_1__* connector; int quirks; int edid; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct drm_display_mode* FUNC_0 (int ,int ,struct detailed_timing*,int ) ;
 int FUNC_1 (TYPE_1__*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*) ;

__attribute__((used)) static void
FUNC_3(struct detailed_timing *VAR_1, void *VAR_2)
{
 struct detailed_mode_closure *VAR_3 = VAR_2;
 struct drm_display_mode *VAR_4;

 if (VAR_1->pixel_clock) {
  VAR_4 = FUNC_0(VAR_3->connector->dev,
         VAR_3->edid, VAR_1,
         VAR_3->quirks);
  if (!VAR_4)
   return;

  if (VAR_3->preferred)
   VAR_4->type |= VAR_0;






  FUNC_2(VAR_4);

  FUNC_1(VAR_3->connector, VAR_4);
  VAR_3->modes++;
  VAR_3->preferred = 0;
 }
}
