
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
typedef enum sun8i_csc_mode { ____Placeholder_sun8i_csc_mode } sun8i_csc_mode ;
typedef enum drm_color_range { ____Placeholder_drm_color_range } drm_color_range ;
typedef enum drm_color_encoding { ____Placeholder_drm_color_encoding } drm_color_encoding ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;


 int FUNC_2 (struct regmap*,int ,int const*,int) ;
 int *** VAR_0 ;
 int *** VAR_1 ;

__attribute__((used)) static void FUNC_3(struct regmap *VAR_2, u32 VAR_3,
           enum sun8i_csc_mode VAR_4,
           enum drm_color_encoding VAR_5,
           enum drm_color_range VAR_6)
{
 const u32 *VAR_7;
 u32 VAR_8;

 switch (VAR_4) {
 case 129:
  VAR_7 = VAR_0[VAR_6][VAR_5];
  break;
 case 128:
  VAR_7 = VAR_1[VAR_6][VAR_5];
  break;
 default:
  FUNC_0("Wrong CSC mode specified.\n");
  return;
 }

 VAR_8 = FUNC_1(VAR_3, 0);
 FUNC_2(VAR_2, VAR_8, VAR_7, 12);
}
