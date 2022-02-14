
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sumo_ps {int flags; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int) ;
 struct sumo_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_1,
         struct radeon_ps *VAR_2,
         bool VAR_3)
{
 struct sumo_ps *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3) {
  if (VAR_4->flags & VAR_0)
   FUNC_0(VAR_1, 1);
 } else
  FUNC_0(VAR_1, 0);
}
