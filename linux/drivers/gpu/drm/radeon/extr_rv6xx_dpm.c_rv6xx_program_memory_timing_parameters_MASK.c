
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* sclks; } ;
struct rv6xx_power_info {TYPE_1__ hw; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct radeon_device*,int) ;
 int FUNC_10 (struct radeon_device*,int,int ) ;
 struct rv6xx_power_info* FUNC_11 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_12(struct radeon_device *VAR_5)
{
 struct rv6xx_power_info *VAR_6 = FUNC_11(VAR_5);
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 if (VAR_6->hw.sclks[VAR_1] <
     (VAR_6->hw.sclks[VAR_2] * 0xFF / 0x40))
  VAR_9 = VAR_6->hw.sclks[VAR_1];
 else
  VAR_9 =
   VAR_6->hw.sclks[VAR_2] * 0xFF / 0x40;

 FUNC_10(VAR_5, VAR_9, 0);

 VAR_7 = (FUNC_4(64 * VAR_9 / VAR_6->hw.sclks[VAR_2]) |
       FUNC_5(64 * VAR_9 / VAR_6->hw.sclks[VAR_3]) |
       FUNC_6(64 * VAR_9 / VAR_6->hw.sclks[VAR_1]) |
       FUNC_7(64 * VAR_9 / VAR_6->hw.sclks[VAR_1]));
 FUNC_8(VAR_4, VAR_7);

 VAR_8 =
  (FUNC_0(FUNC_9(VAR_5,
         VAR_6->hw.sclks[VAR_2])) |
   FUNC_1(FUNC_9(VAR_5,
         VAR_6->hw.sclks[VAR_3])) |
   FUNC_2(FUNC_9(VAR_5,
         VAR_6->hw.sclks[VAR_1])) |
   FUNC_3(FUNC_9(VAR_5,
         VAR_6->hw.sclks[VAR_1])));
 FUNC_8(VAR_0, VAR_8);
}
