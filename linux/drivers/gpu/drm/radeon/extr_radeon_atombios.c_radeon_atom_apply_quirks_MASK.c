
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct radeon_i2c_bus_rec {int valid; } ;
struct radeon_hpd {int dummy; } ;
struct radeon_device {int dummy; } ;
struct drm_device {TYPE_1__* pdev; struct radeon_device* dev_private; } ;
struct TYPE_2__ {int device; int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct radeon_i2c_bus_rec FUNC_0 (struct radeon_device*,int) ;

__attribute__((used)) static bool FUNC_1(struct drm_device *VAR_16,
         uint32_t VAR_17,
         int *VAR_18,
         struct radeon_i2c_bus_rec *VAR_19,
         uint16_t *VAR_20,
         struct radeon_hpd *VAR_21)
{


 if ((VAR_16->pdev->device == 0x791e) &&
     (VAR_16->pdev->subsystem_vendor == 0x1043) &&
     (VAR_16->pdev->subsystem_device == 0x826d)) {
  if ((*VAR_18 == VAR_13) &&
      (VAR_17 == VAR_6))
   *VAR_18 = VAR_11;
 }


 if ((VAR_16->pdev->device == 0x7941) &&
     (VAR_16->pdev->subsystem_vendor == 0x1849) &&
     (VAR_16->pdev->subsystem_device == 0x7941)) {
  if ((*VAR_18 == VAR_13) &&
      (VAR_17 == VAR_6))
   *VAR_18 = VAR_11;
 }


 if ((VAR_16->pdev->device == 0x796e) &&
     (VAR_16->pdev->subsystem_vendor == 0x1462) &&
     (VAR_16->pdev->subsystem_device == 0x7302)) {
  if ((VAR_17 == VAR_5) ||
      (VAR_17 == VAR_6))
   return 0;
 }


 if ((VAR_16->pdev->device == 0x7941) &&
     (VAR_16->pdev->subsystem_vendor == 0x147b) &&
     (VAR_16->pdev->subsystem_device == 0x2412)) {
  if (*VAR_18 == VAR_12)
   return 0;
 }


 if ((VAR_16->pdev->device == 0x5653) &&
     (VAR_16->pdev->subsystem_vendor == 0x1462) &&
     (VAR_16->pdev->subsystem_device == 0x0291)) {
  if (*VAR_18 == VAR_14) {
   VAR_19->valid = 0;
   *VAR_20 = 53;
  }
 }


 if ((VAR_16->pdev->device == 0x7146) &&
     (VAR_16->pdev->subsystem_vendor == 0x17af) &&
     (VAR_16->pdev->subsystem_device == 0x2058)) {
  if (VAR_17 == VAR_4)
   return 0;
 }


 if ((VAR_16->pdev->device == 0x7142) &&
     (VAR_16->pdev->subsystem_vendor == 0x1458) &&
     (VAR_16->pdev->subsystem_device == 0x2134)) {
  if (VAR_17 == VAR_4)
   return 0;
 }



 if ((VAR_16->pdev->device == 0x71C5) &&
     (VAR_16->pdev->subsystem_vendor == 0x106b) &&
     (VAR_16->pdev->subsystem_device == 0x0080)) {
  if ((VAR_17 == VAR_0) ||
      (VAR_17 == VAR_5))
   return 0;
  if (VAR_17 == VAR_1)
   *VAR_20 = 0x90;
 }


 if ((VAR_17 == VAR_7) &&
     (*VAR_18 == VAR_12)) {
  *VAR_18 = VAR_10;
  *VAR_20 = VAR_9;
 }


 if ((VAR_16->pdev->device == 0x9598) &&
     (VAR_16->pdev->subsystem_vendor == 0x1043) &&
     (VAR_16->pdev->subsystem_device == 0x01da)) {
  if (*VAR_18 == VAR_13) {
   *VAR_18 = VAR_12;
  }
 }


 if ((VAR_16->pdev->device == 0x9598) &&
     (VAR_16->pdev->subsystem_vendor == 0x1043) &&
     (VAR_16->pdev->subsystem_device == 0x01e4)) {
  if (*VAR_18 == VAR_13) {
   *VAR_18 = VAR_12;
  }
 }


 if ((VAR_16->pdev->device == 0x95C5) &&
     (VAR_16->pdev->subsystem_vendor == 0x1043) &&
     (VAR_16->pdev->subsystem_device == 0x01e2)) {
  if (*VAR_18 == VAR_13) {
   *VAR_18 = VAR_12;
  }
 }




 if (*VAR_18 == VAR_13) {
  if (VAR_17 & (VAR_2)) {
   *VAR_18 = VAR_15;
   *VAR_20 = 0;
  }
 }
 if (((VAR_16->pdev->device == 0x95c4) || (VAR_16->pdev->device == 0x9591)) &&
     (VAR_16->pdev->subsystem_vendor == 0x1025) &&
     (VAR_16->pdev->subsystem_device == 0x013c)) {
  if ((*VAR_18 == VAR_12) &&
      (VAR_17 == VAR_4)) {

   *VAR_18 = VAR_11;
   return 0;
  }
 }




 if ((VAR_16->pdev->device == 0x9498) &&
     (VAR_16->pdev->subsystem_vendor == 0x1682) &&
     (VAR_16->pdev->subsystem_device == 0x2452) &&
     (VAR_19->valid == 0) &&
     !(VAR_17 & (VAR_8 | VAR_3))) {
  struct radeon_device *VAR_22 = VAR_16->dev_private;
  *VAR_19 = FUNC_0(VAR_22, 0x93);
 }


 if (((VAR_16->pdev->device == 0x9802) ||
      (VAR_16->pdev->device == 0x9805) ||
      (VAR_16->pdev->device == 0x9806)) &&
     (VAR_16->pdev->subsystem_vendor == 0x1734) &&
     (VAR_16->pdev->subsystem_device == 0x11bd)) {
  if (*VAR_18 == VAR_15) {
   *VAR_18 = VAR_12;
   *VAR_20 = 0x3103;
  } else if (*VAR_18 == VAR_11) {
   *VAR_18 = VAR_12;
  }
 }

 return 1;
}
