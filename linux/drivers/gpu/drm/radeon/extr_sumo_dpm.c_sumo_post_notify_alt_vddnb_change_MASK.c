
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sumo_ps {int flags; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 struct sumo_ps* FUNC_0 (struct radeon_ps*) ;
 int FUNC_1 (struct radeon_device*,int,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_1,
           struct radeon_ps *VAR_2,
           struct radeon_ps *VAR_3)
{
 struct sumo_ps *VAR_4 = FUNC_0(VAR_2);
 struct sumo_ps *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;

 if (VAR_5 != ((void*)0))
  VAR_6 = (VAR_5->flags & VAR_0)? 1 : 0;

 VAR_7 = (VAR_4->flags & VAR_0)? 1 : 0;

 if (VAR_6 == 0 && VAR_7 == 1)
  FUNC_1(VAR_1, 1, 1);
}
