
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct radeon_device {scalar_t__ family; struct drm_device* ddev; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;

bool FUNC_2(struct radeon_device *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->ddev;
 u16 VAR_4;


 if (VAR_2->family == VAR_0)
  return 0;

 VAR_4 = FUNC_1(VAR_3, VAR_1);

 if (VAR_4) {
  if (FUNC_0(VAR_4 + 0x4))
   return 1;
 }
 return 0;
}
