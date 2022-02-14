
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_px_quirk {scalar_t__ chip_device; scalar_t__ chip_vendor; scalar_t__ subsys_vendor; scalar_t__ subsys_device; int px_quirk_flags; } ;
struct radeon_device {int px_quirk_flags; int flags; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ vendor; scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct radeon_px_quirk* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_3)
{
 struct radeon_px_quirk *VAR_4 = VAR_2;


 while (VAR_4 && VAR_4->chip_device != 0) {
  if (VAR_3->pdev->vendor == VAR_4->chip_vendor &&
      VAR_3->pdev->device == VAR_4->chip_device &&
      VAR_3->pdev->subsystem_vendor == VAR_4->subsys_vendor &&
      VAR_3->pdev->subsystem_device == VAR_4->subsys_device) {
   VAR_3->px_quirk_flags = VAR_4->px_quirk_flags;
   break;
  }
  ++VAR_4;
 }

 if (VAR_3->px_quirk_flags & VAR_1)
  VAR_3->flags &= ~VAR_0;


 if (!FUNC_1() &&
     !FUNC_0())
  VAR_3->flags &= ~VAR_0;
}
