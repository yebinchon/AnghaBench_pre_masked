
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trinity_ps {int vclk_low_divider; int vclk_high_divider; int dclk_low_divider; int dclk_high_divider; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct trinity_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_1,
       struct radeon_ps *VAR_2)
{
 struct trinity_ps *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = (VAR_3->vclk_low_divider |
    VAR_3->vclk_high_divider << 8 |
    VAR_3->dclk_low_divider << 16 |
    VAR_3->dclk_high_divider << 24);

 FUNC_0(VAR_0, VAR_4);
}
