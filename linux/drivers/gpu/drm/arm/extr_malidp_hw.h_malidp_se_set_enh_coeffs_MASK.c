
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const u32 ;
struct malidp_hw_device {TYPE_1__* hw; } ;
typedef int s32 ;
struct TYPE_4__ {int se_base; int features; } ;
struct TYPE_3__ {TYPE_2__ map; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct malidp_hw_device*,int const,int const) ;

__attribute__((used)) static inline void FUNC_4(struct malidp_hw_device *VAR_5)
{
 static const s32 VAR_6[] = {
  -8, -8, -8, -8, 128, -8, -8, -8, -8
 };
 u32 VAR_7 = FUNC_2(VAR_3) |
    FUNC_1(VAR_2);
 u32 VAR_8 = VAR_5->hw->map.se_base +
   ((VAR_5->hw->map.features & VAR_0) ?
    0x10 : 0xC) + VAR_4;
 u32 VAR_9 = VAR_8 + VAR_1;
 int VAR_10;

 FUNC_3(VAR_5, VAR_7, VAR_8);
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); ++VAR_10)
  FUNC_3(VAR_5, VAR_6[VAR_10], VAR_9 + VAR_10 * 4);
}
