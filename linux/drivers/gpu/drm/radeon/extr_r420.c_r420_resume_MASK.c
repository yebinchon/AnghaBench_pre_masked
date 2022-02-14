
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int atom_context; } ;
struct radeon_device {int flags; int accel_working; int ddev; TYPE_1__ mode_info; scalar_t__ is_atom_bios; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 scalar_t__ FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;

int FUNC_10(struct radeon_device *VAR_4)
{
 int VAR_5;


 if (VAR_4->flags & VAR_1)
  FUNC_9(VAR_4);
 if (VAR_4->flags & VAR_0)
  FUNC_3(VAR_4);

 FUNC_4(VAR_4);

 if (FUNC_6(VAR_4)) {
  FUNC_2(VAR_4->dev, "GPU reset failed ! (0xE40=0x%08X, 0x7C0=0x%08X)\n",
   FUNC_0(VAR_3),
   FUNC_0(VAR_2));
 }

 if (VAR_4->is_atom_bios) {
  FUNC_1(VAR_4->mode_info.atom_context);
 } else {
  FUNC_7(VAR_4->ddev);
 }

 FUNC_4(VAR_4);

 FUNC_8(VAR_4);

 VAR_4->accel_working = 1;
 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5) {
  VAR_4->accel_working = 0;
 }
 return VAR_5;
}
