
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sumo_ps {int num_levels; int flags; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 struct sumo_ps* FUNC_2 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_3,
       struct radeon_ps *VAR_4)
{
 struct sumo_ps *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6 = FUNC_0(VAR_1);

 VAR_6 &= 0xFFFFFF00;
 VAR_6 |= (1 << (VAR_5->num_levels - 1));

 if (VAR_5->flags & VAR_2)
  VAR_6 |= (1 << VAR_0);

 FUNC_1(VAR_1, VAR_6);
}
