
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {scalar_t__ family; int flags; TYPE_1__* pdev; int dev; } ;
struct TYPE_2__ {int no_64bit_msi; int device; int subsystem_vendor; int subsystem_device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static bool FUNC_1(struct radeon_device *VAR_8)
{

 if (VAR_8->family < VAR_3)
  return 0;


 if (VAR_8->flags & VAR_5)
  return 0;






 if (VAR_8->family < VAR_0) {
  FUNC_0(VAR_8->dev, "radeon: MSI limited to 32-bit\n");
  VAR_8->pdev->no_64bit_msi = 1;
 }


 if (VAR_7 == 1)
  return 1;
 else if (VAR_7 == 0)
  return 0;



 if ((VAR_8->pdev->device == 0x791f) &&
     (VAR_8->pdev->subsystem_vendor == 0x103c) &&
     (VAR_8->pdev->subsystem_device == 0x30c2))
  return 1;


 if ((VAR_8->pdev->device == 0x791f) &&
     (VAR_8->pdev->subsystem_vendor == 0x1028) &&
     (VAR_8->pdev->subsystem_device == 0x01fc))
  return 1;


 if ((VAR_8->pdev->device == 0x791f) &&
     (VAR_8->pdev->subsystem_vendor == 0x1028) &&
     (VAR_8->pdev->subsystem_device == 0x01fd))
  return 1;


 if ((VAR_8->pdev->device == 0x791f) &&
     (VAR_8->pdev->subsystem_vendor == 0x107b) &&
     (VAR_8->pdev->subsystem_device == 0x0185))
  return 1;


 if (VAR_8->family == VAR_2)
  return 1;





 if (VAR_8->family == VAR_4)
  return 0;
 if (VAR_8->flags & VAR_6) {

  if (VAR_8->family >= VAR_1)
   return 1;

  return 0;
 }

 return 1;
}
