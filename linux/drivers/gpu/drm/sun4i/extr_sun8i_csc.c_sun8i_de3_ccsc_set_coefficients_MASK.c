
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
typedef enum sun8i_csc_mode { ____Placeholder_sun8i_csc_mode } sun8i_csc_mode ;
typedef enum drm_color_range { ____Placeholder_drm_color_range } drm_color_range ;
typedef enum drm_color_encoding { ____Placeholder_drm_color_encoding } drm_color_encoding ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int ,int ) ;


 int FUNC_2 (struct regmap*,int ,int const*,int) ;
 int *** VAR_1 ;
 int *** VAR_2 ;

__attribute__((used)) static void FUNC_3(struct regmap *VAR_3, int VAR_4,
         enum sun8i_csc_mode VAR_5,
         enum drm_color_encoding VAR_6,
         enum drm_color_range VAR_7)
{
 const u32 *VAR_8;
 u32 VAR_9;

 switch (VAR_5) {
 case 129:
  VAR_8 = VAR_1[VAR_7][VAR_6];
  break;
 case 128:
  VAR_8 = VAR_2[VAR_7][VAR_6];
  break;
 default:
  FUNC_0("Wrong CSC mode specified.\n");
  return;
 }

 VAR_9 = FUNC_1(VAR_0, VAR_4, 0, 0);
 FUNC_2(VAR_3, VAR_9, VAR_8, 12);
}
