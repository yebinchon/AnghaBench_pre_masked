
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct drm_display_mode {int clock; } ;


 int FUNC_0 (char*,char const*,size_t,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_display_mode const*) ;
 size_t FUNC_3 (struct drm_display_mode*,int) ;
 size_t FUNC_4 (struct drm_display_mode*,int) ;
 scalar_t__ FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (size_t) ;
 struct drm_display_mode* VAR_0 ;
 struct drm_display_mode* VAR_1 ;
 int FUNC_7 (struct drm_display_mode const*) ;

__attribute__((used)) static void FUNC_8(struct drm_display_mode *VAR_2)
{
 const struct drm_display_mode *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 u8 VAR_7;
 const char *VAR_8;





 VAR_7 = FUNC_3(VAR_2, 5);
 if (FUNC_5(VAR_7)) {
  VAR_8 = "CEA";
  VAR_3 = &VAR_1[VAR_7];
  VAR_4 = VAR_3->clock;
  VAR_5 = FUNC_2(VAR_3);
 } else {
  VAR_7 = FUNC_4(VAR_2, 5);
  if (FUNC_6(VAR_7)) {
   VAR_8 = "HDMI";
   VAR_3 = &VAR_0[VAR_7];
   VAR_4 = VAR_3->clock;
   VAR_5 = FUNC_7(VAR_3);
  } else {
   return;
  }
 }


 if (FUNC_1(VAR_2->clock - VAR_4) < FUNC_1(VAR_2->clock - VAR_5))
  VAR_6 = VAR_4;
 else
  VAR_6 = VAR_5;

 if (VAR_2->clock == VAR_6)
  return;

 FUNC_0("detailed mode matches %s VIC %d, adjusting clock %d -> %d\n",
    VAR_8, VAR_7, VAR_2->clock, VAR_6);
 VAR_2->clock = VAR_6;
}
