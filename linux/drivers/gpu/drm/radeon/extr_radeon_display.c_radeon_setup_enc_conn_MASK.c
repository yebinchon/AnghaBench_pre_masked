
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ is_atom_bios; scalar_t__ bios; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;

__attribute__((used)) static bool FUNC_7(struct drm_device *VAR_0)
{
 struct radeon_device *VAR_1 = VAR_0->dev_private;
 bool VAR_2 = 0;

 if (VAR_1->bios) {
  if (VAR_1->is_atom_bios) {
   VAR_2 = FUNC_2(VAR_0);
   if (VAR_2 == 0)
    VAR_2 = FUNC_1(VAR_0);
  } else {
   VAR_2 = FUNC_3(VAR_0);
   if (VAR_2 == 0)
    VAR_2 = FUNC_4(VAR_0);
  }
 } else {
  if (!FUNC_0(VAR_1))
   VAR_2 = FUNC_4(VAR_0);
 }
 if (VAR_2) {
  FUNC_6(VAR_0);
  FUNC_5(VAR_0);
 }

 return VAR_2;
}
