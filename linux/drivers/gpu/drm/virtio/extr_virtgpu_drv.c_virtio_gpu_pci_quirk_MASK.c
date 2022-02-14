
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unique ;
struct TYPE_2__ {int parent; } ;
struct virtio_device {TYPE_1__ dev; } ;
struct pci_dev {int class; int dev; } ;
struct drm_device {struct pci_dev* pdev; } ;


 int FUNC_0 (char*,char*,char const*) ;
 int VAR_0 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,char*) ;
 int FUNC_3 (struct pci_dev*,int ,char*) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_1, struct virtio_device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_5(VAR_2->dev.parent);
 const char *VAR_4 = FUNC_1(&VAR_3->dev);
 bool VAR_5 = (VAR_3->class >> 8) == VAR_0;
 char VAR_6[20];

 FUNC_0("pci: %s detected at %s\n",
   VAR_5 ? "virtio-vga" : "virtio-gpu-pci",
   VAR_4);
 VAR_1->pdev = VAR_3;
 if (VAR_5)
  FUNC_3(VAR_3,
          0,
          "virtiodrmfb");
 FUNC_4(VAR_6, sizeof(VAR_6), "pci:%s", VAR_4);
 return FUNC_2(VAR_1, VAR_6);
}
