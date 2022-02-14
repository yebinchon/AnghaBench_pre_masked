
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {scalar_t__ is_atom_bios; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_encoder*,int) ;
 int FUNC_1 (struct drm_encoder*,int) ;
 int FUNC_2 (struct drm_encoder*,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_1)
{
 struct radeon_device *VAR_2 = VAR_1->dev->dev_private;

 FUNC_2(VAR_1, VAR_0);

 if (VAR_2->is_atom_bios)
  FUNC_0(VAR_1, 0);
 else
  FUNC_1(VAR_1, 0);
}
