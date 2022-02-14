
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct drm_device* dev; } ;
struct radeon_encoder {int devices; TYPE_2__ base; } ;
struct radeon_device {scalar_t__ family; scalar_t__ is_atom_bios; TYPE_1__* pdev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;
struct TYPE_3__ {int device; int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct radeon_encoder*,struct drm_connector*) ;
 int VAR_2 ;
 int FUNC_1 (struct radeon_encoder*,struct drm_connector*) ;

__attribute__((used)) static void FUNC_2(struct radeon_encoder *VAR_3,
      struct drm_connector *VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->base.dev;
 struct radeon_device *VAR_6 = VAR_5->dev_private;
 bool VAR_7 = 0;

 if (!(VAR_3->devices & (VAR_0)))
  return;

 if (VAR_2 == 0) {
  return;
 } else if (VAR_2 == 1) {
  VAR_7 = 1;
 } else if (VAR_2 == -1) {


  if ((VAR_6->pdev->device == 0x9583) &&
      (VAR_6->pdev->subsystem_vendor == 0x1734) &&
      (VAR_6->pdev->subsystem_device == 0x1107))
   VAR_7 = 0;



  else if (VAR_6->family < VAR_1)
   VAR_7 = 0;

  else
   VAR_7 = 1;
 }

 if (VAR_7) {
  if (VAR_6->is_atom_bios)
   FUNC_0(VAR_3, VAR_4);
  else
   FUNC_1(VAR_3, VAR_4);
 }
}
