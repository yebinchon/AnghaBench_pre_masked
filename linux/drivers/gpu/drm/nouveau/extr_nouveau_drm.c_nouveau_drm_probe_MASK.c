
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_device_id {int driver_data; } ;
struct pci_dev {int dev; TYPE_2__* resource; } ;
struct nvkm_device {int dummy; } ;
struct drm_device {struct pci_dev* pdev; } ;
struct apertures_struct {int count; TYPE_1__* ranges; } ;
struct TYPE_7__ {int driver_features; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {void* size; void* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 size_t VAR_4 ;
 int FUNC_1 (struct drm_device*) ;
 struct apertures_struct* FUNC_2 (int) ;
 TYPE_3__ VAR_5 ;
 struct drm_device* FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct apertures_struct*,char*,int) ;
 int FUNC_7 (struct apertures_struct*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int VAR_9 ;
 int FUNC_10 (struct nvkm_device**) ;
 int FUNC_11 (struct pci_dev*,int ,char*,int,int,unsigned long long,struct nvkm_device**) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 void* FUNC_14 (struct pci_dev*,int) ;
 void* FUNC_15 (struct pci_dev*,int) ;
 int FUNC_16 (struct pci_dev*,struct drm_device*) ;
 int FUNC_17 (struct pci_dev*) ;
 scalar_t__ FUNC_18 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_19(struct pci_dev *VAR_10,
        const struct pci_device_id *VAR_11)
{
 struct nvkm_device *VAR_12;
 struct drm_device *VAR_13;
 struct apertures_struct *VAR_14;
 bool VAR_15 = 0;
 int VAR_16;

 if (FUNC_18(VAR_10))
  return -VAR_2;




 VAR_16 = FUNC_11(VAR_10, VAR_7, "error",
      1, 0, 0, &VAR_12);
 if (VAR_16)
  return VAR_16;

 FUNC_10(&VAR_12);


 VAR_14 = FUNC_2(3);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->ranges[0].base = FUNC_15(VAR_10, 1);
 VAR_14->ranges[0].size = FUNC_14(VAR_10, 1);
 VAR_14->count = 1;

 if (FUNC_14(VAR_10, 2)) {
  VAR_14->ranges[VAR_14->count].base = FUNC_15(VAR_10, 2);
  VAR_14->ranges[VAR_14->count].size = FUNC_14(VAR_10, 2);
  VAR_14->count++;
 }

 if (FUNC_14(VAR_10, 3)) {
  VAR_14->ranges[VAR_14->count].base = FUNC_15(VAR_10, 3);
  VAR_14->ranges[VAR_14->count].size = FUNC_14(VAR_10, 3);
  VAR_14->count++;
 }




 if (VAR_9 != 2)
  FUNC_6(VAR_14, "nouveaufb", VAR_15);
 FUNC_7(VAR_14);

 VAR_16 = FUNC_11(VAR_10, VAR_7, VAR_8,
      1, 1, ~0ULL, &VAR_12);
 if (VAR_16)
  return VAR_16;

 FUNC_17(VAR_10);

 if (VAR_6)
  VAR_5.driver_features |= VAR_0;

 VAR_13 = FUNC_3(&VAR_5, &VAR_10->dev);
 if (FUNC_0(VAR_13)) {
  VAR_16 = FUNC_1(VAR_13);
  goto fail_nvkm;
 }

 VAR_16 = FUNC_13(VAR_10);
 if (VAR_16)
  goto fail_drm;

 VAR_13->pdev = VAR_10;
 FUNC_16(VAR_10, VAR_13);

 VAR_16 = FUNC_9(VAR_13);
 if (VAR_16)
  goto fail_pci;

 VAR_16 = FUNC_5(VAR_13, VAR_11->driver_data);
 if (VAR_16)
  goto fail_drm_dev_init;

 return 0;

fail_drm_dev_init:
 FUNC_8(VAR_13);
fail_pci:
 FUNC_12(VAR_10);
fail_drm:
 FUNC_4(VAR_13);
fail_nvkm:
 FUNC_10(&VAR_12);
 return VAR_16;
}
