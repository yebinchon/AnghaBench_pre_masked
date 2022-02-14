
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rv6xx_power_info {int fb_div_scale; } ;
struct radeon_device {int dummy; } ;
struct atom_clock_dividers {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct radeon_device*,int ,scalar_t__,int,struct atom_clock_dividers*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct atom_clock_dividers*,int ) ;
 struct rv6xx_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_1,
           u32 VAR_2,
           u32 VAR_3,
           struct atom_clock_dividers *VAR_4,
           u32 *VAR_5)
{
 struct rv6xx_power_info *VAR_6 = FUNC_2(VAR_1);
 struct atom_clock_dividers VAR_7;
 u32 VAR_8;

 if (FUNC_0(VAR_1, VAR_0,
        VAR_2, 0, &VAR_7) == 0) {
  VAR_8 = FUNC_1(VAR_3, &VAR_7,
             VAR_6->fb_div_scale);

  if (VAR_8 > *VAR_5) {
   *VAR_4 = VAR_7;
   *VAR_5 = VAR_8;
  }
 }
}
