
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int pdev; TYPE_1__* dev_private; } ;
struct TYPE_2__ {scalar_t__ chipset; int aperture; int fb; int mmio; void** mtrr_handles; } ;
typedef TYPE_1__ drm_savage_private_t ;


 int FUNC_0 (char*,unsigned long long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_2 (unsigned long,int) ;
 int FUNC_3 (struct drm_device*,unsigned long,unsigned long,int ,int ,int *) ;
 int FUNC_4 (int ,int) ;
 unsigned long FUNC_5 (int ,int) ;

int FUNC_6(struct drm_device *VAR_11)
{
 drm_savage_private_t *VAR_12 = VAR_11->dev_private;
 unsigned long VAR_13, VAR_14, VAR_15, VAR_16;




 unsigned int VAR_17, VAR_18;
 int VAR_19 = 0;

 if (FUNC_1(VAR_12->chipset)) {
  VAR_17 = 0;
  VAR_14 = FUNC_5(VAR_11->pdev, 0);
  VAR_15 = VAR_4;
  VAR_13 = VAR_14 + VAR_4;
  VAR_18 = 0;
  VAR_16 = VAR_14 + VAR_2;

  if (FUNC_4(VAR_11->pdev, 0) == 0x08000000) {


   VAR_12->mtrr_handles[0] =
    FUNC_2(VAR_14, 0x01000000);
   VAR_12->mtrr_handles[1] =
    FUNC_2(VAR_14 + 0x02000000,
       0x02000000);
   VAR_12->mtrr_handles[2] =
    FUNC_2(VAR_14 + 0x04000000,
      0x04000000);
  } else {
   FUNC_0("strange pci_resource_len %08llx\n",
      (unsigned long long)
      FUNC_4(VAR_11->pdev, 0));
  }
 } else if (VAR_12->chipset != VAR_1 &&
     VAR_12->chipset != VAR_0) {
  VAR_13 = FUNC_5(VAR_11->pdev, 0);
  VAR_17 = 1;
  VAR_14 = FUNC_5(VAR_11->pdev, 1);
  VAR_15 = VAR_5;
  VAR_18 = 1;
  VAR_16 = VAR_14 + VAR_2;

  if (FUNC_4(VAR_11->pdev, 1) == 0x08000000) {


   VAR_12->mtrr_handles[0] =
    FUNC_2(VAR_14,
       0x08000000);
  } else {
   FUNC_0("strange pci_resource_len %08llx\n",
      (unsigned long long)
      FUNC_4(VAR_11->pdev, 1));
  }
 } else {
  VAR_13 = FUNC_5(VAR_11->pdev, 0);
  VAR_17 = 1;
  VAR_14 = FUNC_5(VAR_11->pdev, 1);
  VAR_15 = FUNC_4(VAR_11->pdev, 1);
  VAR_18 = 2;
  VAR_16 = FUNC_5(VAR_11->pdev, 2);

 }

 VAR_19 = FUNC_3(VAR_11, VAR_13, VAR_6,
    VAR_9, VAR_8,
    &VAR_12->mmio);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_11, VAR_14, VAR_15, VAR_7,
    VAR_10, &VAR_12->fb);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_11, VAR_16, VAR_3,
    VAR_7, VAR_10,
    &VAR_12->aperture);
 return VAR_19;
}
