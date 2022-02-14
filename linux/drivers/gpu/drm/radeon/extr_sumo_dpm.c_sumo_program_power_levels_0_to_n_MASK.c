
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sumo_ps {int num_levels; int flags; int * levels; } ;
struct sumo_power_info {int boost_pl; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct sumo_power_info* FUNC_0 (struct radeon_device*) ;
 struct sumo_ps* FUNC_1 (struct radeon_ps*) ;
 int FUNC_2 (struct radeon_device*,size_t,int) ;
 int FUNC_3 (struct radeon_device*,int *,size_t) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_2,
          struct radeon_ps *VAR_3,
          struct radeon_ps *VAR_4)
{
 struct sumo_power_info *VAR_5 = FUNC_0(VAR_2);
 struct sumo_ps *VAR_6 = FUNC_1(VAR_3);
 struct sumo_ps *VAR_7 = FUNC_1(VAR_4);
 u32 VAR_8;
 u32 VAR_9 = (VAR_7 == ((void*)0)) ? 1 : VAR_7->num_levels;

 for (VAR_8 = 0; VAR_8 < VAR_6->num_levels; VAR_8++) {
  FUNC_3(VAR_2, &VAR_6->levels[VAR_8], VAR_8);
  FUNC_2(VAR_2, VAR_8, 1);
 }

 for (VAR_8 = VAR_6->num_levels; VAR_8 < VAR_9; VAR_8++)
  FUNC_2(VAR_2, VAR_8, 0);

 if (VAR_6->flags & VAR_1)
  FUNC_3(VAR_2, &VAR_5->boost_pl, VAR_0);
}
