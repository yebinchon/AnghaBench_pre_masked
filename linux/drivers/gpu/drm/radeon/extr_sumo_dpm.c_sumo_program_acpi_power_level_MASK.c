
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sclk; } ;
struct sumo_power_info {TYPE_1__ acpi_pl; } ;
struct radeon_device {int dummy; } ;
struct atom_clock_dividers {int post_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;
 struct sumo_power_info* FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_5)
{
 struct sumo_power_info *VAR_6 = FUNC_3(VAR_5);
 struct atom_clock_dividers VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5, VAR_3,
          VAR_6->acpi_pl.sclk,
          0, &VAR_7);
 if (VAR_8)
  return;

 FUNC_1(VAR_1, FUNC_0(VAR_7.post_div), ~VAR_4);
 FUNC_1(VAR_2, 0, ~VAR_0);
}
