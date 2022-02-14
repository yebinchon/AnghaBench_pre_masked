
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int atom_context; } ;
struct radeon_device {int flags; int accel_working; TYPE_1__ mode_info; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct radeon_device*) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;

int FUNC_8(struct radeon_device *VAR_3)
{
 int VAR_4;


 if (VAR_3->flags & VAR_0)
  FUNC_6(VAR_3);

 FUNC_7(VAR_3);

 if (FUNC_4(VAR_3)) {
  FUNC_2(VAR_3->dev, "GPU reset failed ! (0xE40=0x%08X, 0x7C0=0x%08X)\n",
   FUNC_0(VAR_2),
   FUNC_0(VAR_1));
 }

 FUNC_1(VAR_3->mode_info.atom_context);

 FUNC_7(VAR_3);

 FUNC_5(VAR_3);

 VAR_3->accel_working = 1;
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4) {
  VAR_3->accel_working = 0;
 }
 return VAR_4;
}
