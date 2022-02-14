
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct edid {int * standard_timings; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dummy; } ;
struct detailed_mode_closure {int modes; struct edid* edid; struct drm_connector* connector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct detailed_mode_closure*) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_2 (struct drm_connector*,struct edid*,int *) ;
 scalar_t__ FUNC_3 (struct edid*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct drm_connector *VAR_2, struct edid *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct detailed_mode_closure VAR_6 = {
  .connector = VAR_2,
  .edid = VAR_3,
 };

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct drm_display_mode *VAR_7;

  VAR_7 = FUNC_2(VAR_2, VAR_3,
           &VAR_3->standard_timings[VAR_4]);
  if (VAR_7) {
   FUNC_1(VAR_2, VAR_7);
   VAR_5++;
  }
 }

 if (FUNC_3(VAR_3, 1, 0))
  FUNC_0((u8 *)VAR_3, VAR_1,
         &VAR_6);



 return VAR_5 + VAR_6.modes;
}
