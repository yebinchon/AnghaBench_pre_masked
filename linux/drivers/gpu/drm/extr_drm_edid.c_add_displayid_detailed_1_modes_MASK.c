
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct drm_connector {int dev; } ;
struct displayid_detailed_timings_1 {int dummy; } ;
struct displayid_detailed_timing_block {struct displayid_detailed_timings_1* timings; } ;
struct displayid_block {int num_bytes; } ;


 struct drm_display_mode* FUNC_0 (int ,struct displayid_detailed_timings_1*) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_0,
       struct displayid_block *VAR_1)
{
 struct displayid_detailed_timing_block *VAR_2 = (struct displayid_detailed_timing_block *)VAR_1;
 int VAR_3;
 int VAR_4;
 struct drm_display_mode *VAR_5;
 int VAR_6 = 0;

 if (VAR_1->num_bytes % 20)
  return 0;

 VAR_4 = VAR_1->num_bytes / 20;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  struct displayid_detailed_timings_1 *VAR_7 = &VAR_2->timings[VAR_3];

  VAR_5 = FUNC_0(VAR_0->dev, VAR_7);
  if (!VAR_5)
   continue;

  FUNC_1(VAR_0, VAR_5);
  VAR_6++;
 }
 return VAR_6;
}
