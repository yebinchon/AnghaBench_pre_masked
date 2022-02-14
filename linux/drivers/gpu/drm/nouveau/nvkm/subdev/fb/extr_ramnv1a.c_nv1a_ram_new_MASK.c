
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int bus; } ;
struct nvkm_ram {int dummy; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_fb {TYPE_2__ subdev; } ;
struct TYPE_3__ {int chipset; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int *,struct nvkm_fb*,int ,int,struct nvkm_ram**) ;
 int FUNC_4 (int ) ;
 struct pci_dev* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_7 (int ) ;

int
FUNC_8(struct nvkm_fb *VAR_3, struct nvkm_ram **VAR_4)
{
 struct pci_dev *VAR_5;
 u32 VAR_6, VAR_7;
 int VAR_8 = 0;
 struct pci_dev *VAR_9 = ((void*)0);

 if (FUNC_1(VAR_3->subdev.device->dev))
  VAR_9 = FUNC_7(VAR_3->subdev.device->dev);

 if (VAR_9)
  VAR_8 = FUNC_4(VAR_9->bus);

 VAR_5 = FUNC_5(VAR_8, 0, FUNC_0(0, 1));
 if (!VAR_5) {
  FUNC_2(&VAR_3->subdev, "no bridge device\n");
  return -VAR_0;
 }

 if (VAR_3->subdev.device->chipset == 0x1a) {
  FUNC_6(VAR_5, 0x7c, &VAR_6);
  VAR_7 = ((VAR_6 >> 6) & 31) + 1;
 } else {
  FUNC_6(VAR_5, 0x84, &VAR_6);
  VAR_7 = ((VAR_6 >> 4) & 127) + 1;
 }

 return FUNC_3(&VAR_2, VAR_3, VAR_1,
        VAR_7 * 1024 * 1024, VAR_4);
}
