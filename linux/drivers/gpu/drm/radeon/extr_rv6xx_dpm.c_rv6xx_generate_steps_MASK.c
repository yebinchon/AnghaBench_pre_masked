
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rv6xx_sclk_stepping {scalar_t__ vco_frequency; scalar_t__ post_divider; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct radeon_device*,struct rv6xx_sclk_stepping*,struct rv6xx_sclk_stepping*) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,struct rv6xx_sclk_stepping*) ;
 struct rv6xx_sclk_stepping FUNC_2 (struct radeon_device*,struct rv6xx_sclk_stepping*,struct rv6xx_sclk_stepping*) ;
 struct rv6xx_sclk_stepping FUNC_3 (struct radeon_device*,struct rv6xx_sclk_stepping*,int,int ) ;
 int FUNC_4 (struct radeon_device*,int ,struct rv6xx_sclk_stepping*) ;
 scalar_t__ FUNC_5 (struct radeon_device*,struct rv6xx_sclk_stepping*,struct rv6xx_sclk_stepping*,int) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_2,
     u32 VAR_3, u32 VAR_4,
     u32 VAR_5, u8 *VAR_6)
{
 struct rv6xx_sclk_stepping VAR_7;
 struct rv6xx_sclk_stepping VAR_8;
 bool VAR_9;
 u32 VAR_10 = VAR_5;

 FUNC_1(VAR_2, VAR_3, &VAR_7);
 FUNC_1(VAR_2, VAR_4, &VAR_8);

 FUNC_4(VAR_2, VAR_10++, &VAR_7);

 VAR_9 = (VAR_8.vco_frequency >= VAR_7.vco_frequency);

 if (VAR_8.post_divider > VAR_7.post_divider)
  VAR_7.post_divider = VAR_8.post_divider;

 while (1) {
  struct rv6xx_sclk_stepping VAR_11;

  if (FUNC_0(VAR_2, &VAR_7, &VAR_8))
   VAR_11 = FUNC_2(VAR_2, &VAR_7, &VAR_8);
  else
   VAR_11 = FUNC_3(VAR_2, &VAR_7, VAR_9, VAR_1);

  if (FUNC_5(VAR_2, &VAR_11, &VAR_8, VAR_9)) {
   struct rv6xx_sclk_stepping VAR_12 =
    FUNC_3(VAR_2, &VAR_8, !VAR_9, VAR_0);
   VAR_12.post_divider = VAR_11.post_divider;

   if (!FUNC_5(VAR_2, &VAR_12, &VAR_7, !VAR_9))
    FUNC_4(VAR_2, VAR_10++, &VAR_12);

   if ((VAR_11.post_divider != VAR_8.post_divider) &&
       (VAR_11.vco_frequency != VAR_8.vco_frequency)) {
    struct rv6xx_sclk_stepping VAR_13;

    VAR_13.vco_frequency = VAR_8.vco_frequency;
    VAR_13.post_divider = VAR_11.post_divider;

    FUNC_4(VAR_2, VAR_10++, &VAR_13);
   }

   FUNC_4(VAR_2, VAR_10++, &VAR_8);
   break;
  } else
   FUNC_4(VAR_2, VAR_10++, &VAR_11);

  VAR_7 = VAR_11;
 }

 *VAR_6 = (u8)VAR_10 - 1;

}
