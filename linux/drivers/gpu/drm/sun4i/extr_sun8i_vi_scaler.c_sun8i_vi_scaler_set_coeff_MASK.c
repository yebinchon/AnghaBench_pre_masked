
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct drm_format_info {int hsub; int vsub; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int const* VAR_4 ;
 int const* VAR_5 ;
 int const* VAR_6 ;
 int FUNC_6 (struct regmap*,int ,int const) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct regmap *VAR_7, u32 VAR_8,
          u32 VAR_9, u32 VAR_10,
          const struct drm_format_info *VAR_11)
{
 const u32 *VAR_12, *VAR_13, *VAR_14;
 int VAR_15, VAR_16;

 if (VAR_11->hsub == 1 && VAR_11->vsub == 1) {
  VAR_12 = VAR_5;
  VAR_13 = VAR_6;
  VAR_14 = VAR_4;
 } else {
  VAR_12 = VAR_2;
  VAR_13 = VAR_3;
  VAR_14 = VAR_1;
 }

 VAR_15 = FUNC_7(VAR_9) *
   VAR_0;
 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  FUNC_6(VAR_7, FUNC_3(VAR_8, VAR_16),
        VAR_5[VAR_15 + VAR_16]);
  FUNC_6(VAR_7, FUNC_4(VAR_8, VAR_16),
        VAR_6[VAR_15 + VAR_16]);
  FUNC_6(VAR_7, FUNC_0(VAR_8, VAR_16),
        VAR_12[VAR_15 + VAR_16]);
  FUNC_6(VAR_7, FUNC_1(VAR_8, VAR_16),
        VAR_13[VAR_15 + VAR_16]);
 }

 VAR_15 = FUNC_7(VAR_9) *
   VAR_0;
 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  FUNC_6(VAR_7, FUNC_5(VAR_8, VAR_16),
        VAR_4[VAR_15 + VAR_16]);
  FUNC_6(VAR_7, FUNC_2(VAR_8, VAR_16),
        VAR_14[VAR_15 + VAR_16]);
 }
}
