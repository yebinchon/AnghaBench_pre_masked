
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct sumo_ps {int flags; size_t num_levels; TYPE_2__* levels; } ;
struct TYPE_3__ {size_t min_sclk; } ;
struct sumo_power_info {scalar_t__ enable_boost; TYPE_1__ sys_info; } ;
struct radeon_ps {int class; int class2; } ;
struct radeon_device {int dummy; } ;
struct TYPE_4__ {size_t vddc_index; size_t sclk; int ss_divider_index; int ds_divider_index; int allow_gnb_slow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sumo_power_info* FUNC_0 (struct radeon_device*) ;
 struct sumo_ps* FUNC_1 (struct radeon_ps*) ;
 void* FUNC_2 (struct radeon_device*,size_t,size_t) ;
 size_t FUNC_3 (struct radeon_device*,size_t) ;
 void FUNC_4 (struct radeon_device*,struct sumo_ps*,struct sumo_ps*) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_10,
       struct radeon_ps *VAR_11,
       struct radeon_ps *VAR_12)
{
 struct sumo_ps *VAR_13 = FUNC_1(VAR_11);
 struct sumo_ps *VAR_14 = FUNC_1(VAR_12);
 struct sumo_power_info *VAR_15 = FUNC_0(VAR_10);
 u32 VAR_16 = 0;
 u32 VAR_17 = VAR_15->sys_info.min_sclk;
 u32 VAR_18 = VAR_15->sys_info.min_sclk;
 u32 VAR_19;

 if (VAR_11->class & VAR_3)
  return FUNC_4(VAR_10, VAR_13, VAR_14);

 if (VAR_15->enable_boost) {
  if (VAR_11->class & VAR_5)
   VAR_13->flags |= VAR_8;
 }

 if ((VAR_11->class & VAR_4) ||
     (VAR_11->class & VAR_2) ||
     (VAR_11->class & VAR_1))
  VAR_13->flags |= VAR_9;

 for (VAR_19 = 0; VAR_19 < VAR_13->num_levels; VAR_19++) {
  if (VAR_13->levels[VAR_19].vddc_index < VAR_16)
   VAR_13->levels[VAR_19].vddc_index = VAR_16;

  if (VAR_13->levels[VAR_19].sclk < VAR_17)
   VAR_13->levels[VAR_19].sclk =
    FUNC_3(VAR_10, VAR_17);

  VAR_13->levels[VAR_19].ss_divider_index =
   FUNC_2(VAR_10, VAR_13->levels[VAR_19].sclk, VAR_18);

  VAR_13->levels[VAR_19].ds_divider_index =
   FUNC_2(VAR_10, VAR_13->levels[VAR_19].sclk, VAR_7);

  if (VAR_13->levels[VAR_19].ds_divider_index > VAR_13->levels[VAR_19].ss_divider_index + 1)
   VAR_13->levels[VAR_19].ds_divider_index = VAR_13->levels[VAR_19].ss_divider_index + 1;

  if (VAR_13->levels[VAR_19].ss_divider_index == VAR_13->levels[VAR_19].ds_divider_index) {
   if (VAR_13->levels[VAR_19].ss_divider_index > 1)
    VAR_13->levels[VAR_19].ss_divider_index = VAR_13->levels[VAR_19].ss_divider_index - 1;
  }

  if (VAR_13->levels[VAR_19].ss_divider_index == 0)
   VAR_13->levels[VAR_19].ds_divider_index = 0;

  if (VAR_13->levels[VAR_19].ds_divider_index == 0)
   VAR_13->levels[VAR_19].ss_divider_index = 0;

  if (VAR_13->flags & VAR_9)
   VAR_13->levels[VAR_19].allow_gnb_slow = 1;
  else if ((VAR_11->class & VAR_6) ||
    (VAR_11->class2 & VAR_0))
   VAR_13->levels[VAR_19].allow_gnb_slow = 0;
  else if (VAR_19 == VAR_13->num_levels - 1)
   VAR_13->levels[VAR_19].allow_gnb_slow = 0;
  else
   VAR_13->levels[VAR_19].allow_gnb_slow = 1;
 }
}
