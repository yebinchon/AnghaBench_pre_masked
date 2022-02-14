
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sumo_ps {int num_levels; int flags; TYPE_1__* levels; } ;
struct TYPE_4__ {int sclk; } ;
struct sumo_power_info {int psp; int dsp; TYPE_2__ boost_pl; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {int sclk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct radeon_device*,int) ;
 struct sumo_power_info* FUNC_2 (struct radeon_device*) ;
 struct sumo_ps* FUNC_3 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_3,
        struct radeon_ps *VAR_4)
{
 struct sumo_power_info *VAR_5 = FUNC_2(VAR_3);
 struct sumo_ps *VAR_6 = FUNC_3(VAR_4);
 u32 VAR_7;
 u32 VAR_8 = VAR_6->levels[VAR_6->num_levels - 1].sclk;

 if (VAR_6->flags & VAR_2)
  VAR_8 = VAR_5->boost_pl.sclk;

 FUNC_1(VAR_3, VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_6->num_levels - 1; VAR_7++)
  FUNC_0(VAR_1 + (VAR_7 * 4), VAR_5->dsp);

 FUNC_0(VAR_1 + (VAR_7 * 4), VAR_5->psp);

 if (VAR_6->flags & VAR_2)
  FUNC_0(VAR_1 + (VAR_0 * 4), VAR_5->psp);
}
