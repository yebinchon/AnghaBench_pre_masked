
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sumo_ps {int num_levels; int flags; TYPE_1__* levels; } ;
struct TYPE_4__ {int sclk; } ;
struct sumo_power_info {int pasi; int asi; TYPE_2__ boost_pl; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {int sclk; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct sumo_power_info* FUNC_2 (struct radeon_device*) ;
 struct sumo_ps* FUNC_3 (struct radeon_ps*) ;
 int FUNC_4 (struct radeon_device*,int,int) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_13,
       struct radeon_ps *VAR_14)
{
 struct sumo_power_info *VAR_15 = FUNC_2(VAR_13);
 struct sumo_ps *VAR_16 = FUNC_3(VAR_14);
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21[VAR_6];
 u32 VAR_22[VAR_6];

 VAR_21[0] = VAR_8;
 VAR_21[1] = VAR_9;
 VAR_21[2] = VAR_10;
 VAR_21[3] = VAR_11;
 VAR_21[4] = VAR_12;

 VAR_22[0] = VAR_1;
 VAR_22[1] = VAR_2;
 VAR_22[2] = VAR_3;
 VAR_22[3] = VAR_4;
 VAR_22[4] = VAR_5;

 for (VAR_18 = 0; VAR_18 < VAR_16->num_levels; VAR_18++) {
  VAR_17 = (VAR_18 == VAR_16->num_levels - 1) ? VAR_15->pasi : VAR_15->asi;

  VAR_19 = VAR_17 * VAR_16->levels[VAR_18].sclk / 100;

  VAR_20 = FUNC_1(VAR_19 * VAR_21[VAR_18] / 100) | FUNC_0(VAR_19 * VAR_22[VAR_18] / 100);

  FUNC_4(VAR_13, VAR_18, VAR_20);
 }

 if (VAR_16->flags & VAR_7) {
  VAR_17 = VAR_15->pasi;

  VAR_19 = VAR_17 * VAR_15->boost_pl.sclk / 100;

  VAR_20 = FUNC_1(VAR_19 * VAR_21[VAR_16->num_levels - 1] / 100) |
   FUNC_0(VAR_19 * VAR_22[VAR_16->num_levels - 1] / 100);

  FUNC_4(VAR_13, VAR_0, VAR_20);
 }
}
