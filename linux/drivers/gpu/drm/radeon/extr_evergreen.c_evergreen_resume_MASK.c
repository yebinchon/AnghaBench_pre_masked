
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pm_method; } ;
struct TYPE_3__ {int atom_context; } ;
struct radeon_device {int accel_working; TYPE_2__ pm; TYPE_1__ mode_info; int dev; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 scalar_t__ FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

int FUNC_7(struct radeon_device *VAR_1)
{
 int VAR_2;




 if (FUNC_5(VAR_1))
  FUNC_2(VAR_1->dev, "GPU reset failed !\n");





 FUNC_1(VAR_1->mode_info.atom_context);


 FUNC_3(VAR_1);

 if (VAR_1->pm.pm_method == VAR_0)
  FUNC_6(VAR_1);

 VAR_1->accel_working = 1;
 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2) {
  FUNC_0("evergreen startup failed on resume\n");
  VAR_1->accel_working = 0;
  return VAR_2;
 }

 return VAR_2;

}
