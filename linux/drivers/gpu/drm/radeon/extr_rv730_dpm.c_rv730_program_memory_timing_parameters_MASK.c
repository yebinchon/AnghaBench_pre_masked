
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int mclk; int sclk; } ;
struct TYPE_5__ {int mclk; int sclk; } ;
struct TYPE_4__ {int mclk; int sclk; } ;
struct rv7xx_ps {TYPE_3__ low; TYPE_2__ medium; TYPE_1__ high; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct radeon_device*,int ,int ) ;
 int FUNC_6 (struct radeon_device*,int ) ;
 struct rv7xx_ps* FUNC_7 (struct radeon_ps*) ;

void FUNC_8(struct radeon_device *VAR_12,
         struct radeon_ps *VAR_13)
{
 struct rv7xx_ps *VAR_14 = FUNC_7(VAR_13);
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;
 u32 VAR_18 = 0;
 u32 VAR_19 = 0;

 VAR_15 = FUNC_3(VAR_8) &
  ~(VAR_9 | VAR_10 | VAR_11);
 VAR_15 |=
  (FUNC_0(FUNC_6(VAR_12, VAR_14->low.sclk)) |
   FUNC_1(FUNC_6(VAR_12, VAR_14->medium.sclk)) |
   FUNC_2(FUNC_6(VAR_12, VAR_14->high.sclk)));
 FUNC_4(VAR_8, VAR_15);


 VAR_18 = FUNC_3(VAR_0);
 VAR_19 = FUNC_3(VAR_1);

 FUNC_5(VAR_12,
         VAR_14->high.sclk,
         VAR_14->high.mclk);

 VAR_16 = FUNC_3(VAR_0);
 VAR_17 = FUNC_3(VAR_1);

 FUNC_4(VAR_7, VAR_16);
 FUNC_4(VAR_4, VAR_17);

 FUNC_5(VAR_12,
         VAR_14->medium.sclk,
         VAR_14->medium.mclk);

 VAR_16 = FUNC_3(VAR_0);
 VAR_17 = FUNC_3(VAR_1);

 FUNC_4(VAR_6, VAR_16);
 FUNC_4(VAR_3, VAR_17);

 FUNC_5(VAR_12,
         VAR_14->low.sclk,
         VAR_14->low.mclk);

 VAR_16 = FUNC_3(VAR_0);
 VAR_17 = FUNC_3(VAR_1);

 FUNC_4(VAR_5, VAR_16);
 FUNC_4(VAR_2, VAR_17);


 FUNC_4(VAR_0, VAR_18);
 FUNC_4(VAR_1, VAR_19);

}
