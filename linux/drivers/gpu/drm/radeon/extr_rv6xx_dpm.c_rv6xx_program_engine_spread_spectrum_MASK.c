
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rv6xx_power_info {int fb_div_scale; scalar_t__ sclk_ss; } ;
struct TYPE_3__ {int reference_freq; } ;
struct TYPE_4__ {TYPE_1__ spll; } ;
struct radeon_device {TYPE_2__ clock; } ;
struct radeon_atom_ss {int rate; int percentage; } ;
struct atom_clock_dividers {int ref_div; } ;
typedef enum r600_power_level { ____Placeholder_r600_power_level } r600_power_level ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct radeon_device*,int ,int,int,struct atom_clock_dividers*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,struct radeon_atom_ss*,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int,int ,int ,int ) ;
 int FUNC_4 (int,struct atom_clock_dividers*,int ) ;
 int FUNC_5 (struct radeon_device*,int,int) ;
 struct rv6xx_power_info* FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*,int,int) ;
 int FUNC_8 (struct radeon_device*,int,int) ;

__attribute__((used)) static void FUNC_9(struct radeon_device *VAR_2,
       u32 VAR_3, enum r600_power_level VAR_4)
{
 u32 VAR_5 = VAR_2->clock.spll.reference_freq;
 struct rv6xx_power_info *VAR_6 = FUNC_6(VAR_2);
 struct atom_clock_dividers VAR_7;
 struct radeon_atom_ss VAR_8;
 u32 VAR_9, VAR_10, VAR_11;

 FUNC_5(VAR_2, VAR_4, 0);

 if (VAR_3 && VAR_6->sclk_ss) {
  if (FUNC_0(VAR_2, VAR_1, VAR_3, 0, &VAR_7) == 0) {
   VAR_9 = FUNC_4(VAR_5, &VAR_7,
         VAR_6->fb_div_scale);

   if (FUNC_1(VAR_2, &VAR_8,
            VAR_0, VAR_9)) {
    VAR_10 = FUNC_3(VAR_9,
               (VAR_5 / (VAR_7.ref_div + 1)),
               VAR_8.rate,
               VAR_8.percentage,
               VAR_6->fb_div_scale);

    VAR_11 = FUNC_2(VAR_8.rate,
               (VAR_5 / (VAR_7.ref_div + 1)));

    FUNC_8(VAR_2, VAR_4, VAR_10);
    FUNC_7(VAR_2, VAR_4, VAR_11);
    FUNC_5(VAR_2, VAR_4, 1);
   }
  }
 }
}
