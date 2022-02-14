
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {struct pci_dev* misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,struct pci_dev*,int ) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_2, u32 VAR_3)
{
 int VAR_4;

 if (FUNC_0() < 0)
  return -VAR_1;

 if (!FUNC_1(VAR_0))
  return -VAR_1;

 VAR_4 = 0;
 for (VAR_4 = 0; VAR_4 < FUNC_2(); VAR_4++) {
  struct pci_dev *VAR_5 = FUNC_5(VAR_4)->misc;
  if (FUNC_4(VAR_5, VAR_2, VAR_3) < 0) {
   FUNC_3(&VAR_5->dev, "no usable aperture found\n");


   FUNC_3(&VAR_5->dev, "consider rebooting with iommu=memaper=2 to get a good aperture\n");

   return -1;
  }
 }
 return 0;
}
