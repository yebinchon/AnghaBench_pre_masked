
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_i2c_bus_rec {int dummy; } ;
struct radeon_device {scalar_t__* i2c_bus; struct drm_device* ddev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*,struct radeon_i2c_bus_rec*,char const*) ;

void FUNC_1(struct radeon_device *VAR_1,
      struct radeon_i2c_bus_rec *VAR_2,
      const char *VAR_3)
{
 struct drm_device *VAR_4 = VAR_1->ddev;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!VAR_1->i2c_bus[VAR_5]) {
   VAR_1->i2c_bus[VAR_5] = FUNC_0(VAR_4, VAR_2, VAR_3);
   return;
  }
 }
}
