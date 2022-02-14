
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct drm_display_mode {unsigned int clock; } ;


 size_t FUNC_0 (struct drm_display_mode*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct drm_display_mode const*,struct drm_display_mode const*,unsigned int) ;
 struct drm_display_mode* VAR_2 ;
 unsigned int FUNC_3 (struct drm_display_mode const*) ;

__attribute__((used)) static u8 FUNC_4(const struct drm_display_mode *VAR_3,
           unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_1 | VAR_0;
 u8 VAR_6;

 if (!VAR_3->clock)
  return 0;

 for (VAR_6 = 1; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  const struct drm_display_mode *VAR_7 = &VAR_2[VAR_6];
  unsigned int VAR_8, VAR_9;


  VAR_8 = VAR_7->clock;
  VAR_9 = FUNC_3(VAR_7);

  if (FUNC_1(VAR_3->clock - VAR_8) > VAR_4 &&
      FUNC_1(VAR_3->clock - VAR_9) > VAR_4)
   continue;

  if (FUNC_2(VAR_3, VAR_7, VAR_5))
   return VAR_6;
 }

 return 0;
}
