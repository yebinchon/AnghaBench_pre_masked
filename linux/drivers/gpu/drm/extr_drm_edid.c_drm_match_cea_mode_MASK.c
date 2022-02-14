
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct drm_display_mode {unsigned int clock; scalar_t__ picture_aspect_ratio; } ;


 size_t FUNC_0 (struct drm_display_mode*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct drm_display_mode*) ;
 scalar_t__ FUNC_3 (size_t,struct drm_display_mode*) ;
 scalar_t__ FUNC_4 (struct drm_display_mode const*,struct drm_display_mode*,unsigned int) ;
 struct drm_display_mode* VAR_3 ;

u8 FUNC_5(const struct drm_display_mode *VAR_4)
{
 unsigned int VAR_5 = VAR_2 | VAR_1;
 u8 VAR_6;

 if (!VAR_4->clock)
  return 0;

 if (VAR_4->picture_aspect_ratio)
  VAR_5 |= VAR_0;

 for (VAR_6 = 1; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  struct drm_display_mode VAR_7 = VAR_3[VAR_6];
  unsigned int VAR_8, VAR_9;


  VAR_8 = VAR_7.clock;
  VAR_9 = FUNC_2(&VAR_7);

  if (FUNC_1(VAR_4->clock) != FUNC_1(VAR_8) &&
      FUNC_1(VAR_4->clock) != FUNC_1(VAR_9))
   continue;

  do {
   if (FUNC_4(VAR_4, &VAR_7, VAR_5))
    return VAR_6;
  } while (FUNC_3(VAR_6, &VAR_7));
 }

 return 0;
}
