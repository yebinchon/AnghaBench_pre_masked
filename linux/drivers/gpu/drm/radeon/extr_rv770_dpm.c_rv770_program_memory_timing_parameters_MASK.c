
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int sclk; int mclk; } ;
struct TYPE_5__ {int sclk; } ;
struct TYPE_4__ {int sclk; } ;
struct rv7xx_ps {TYPE_3__ high; TYPE_2__ medium; TYPE_1__ low; } ;
struct rv7xx_power_info {int boot_sclk; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct radeon_device*,int,int ) ;
 int FUNC_10 (struct radeon_device*,int) ;
 struct rv7xx_power_info* FUNC_11 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_12 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_13(struct radeon_device *VAR_2,
         struct radeon_ps *VAR_3)
{
 struct rv7xx_ps *VAR_4 = FUNC_12(VAR_3);
 struct rv7xx_power_info *VAR_5 = FUNC_11(VAR_2);
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 if (VAR_4->high.sclk < (VAR_4->low.sclk * 0xFF / 0x40))
  VAR_8 = VAR_4->high.sclk;
 else
  VAR_8 = (VAR_4->low.sclk * 0xFF / 0x40);

 FUNC_9(VAR_2, VAR_8,
         VAR_4->high.mclk);

 VAR_6 =
  FUNC_4(64 * VAR_8 / VAR_5->boot_sclk) |
  FUNC_5(64 * VAR_8 / VAR_4->low.sclk) |
  FUNC_6(64 * VAR_8 / VAR_4->medium.sclk) |
  FUNC_7(64 * VAR_8 / VAR_4->high.sclk);
 FUNC_8(VAR_1, VAR_6);

 VAR_7 =
  FUNC_0(FUNC_10(VAR_2, VAR_5->boot_sclk)) |
  FUNC_1(FUNC_10(VAR_2, VAR_4->low.sclk)) |
  FUNC_2(FUNC_10(VAR_2, VAR_4->medium.sclk)) |
  FUNC_3(FUNC_10(VAR_2, VAR_4->high.sclk));
 FUNC_8(VAR_0, VAR_7);
}
