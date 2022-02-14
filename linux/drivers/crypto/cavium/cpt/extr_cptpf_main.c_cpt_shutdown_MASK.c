
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {scalar_t__ device; scalar_t__ vendor; int dev; } ;
struct cpt_device {int dummy; } ;


 int FUNC_0 (struct cpt_device*) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 struct cpt_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct cpt_device *VAR_1 = FUNC_3(VAR_0);

 if (!VAR_1)
  return;

 FUNC_1(&VAR_0->dev, "Shutdown device %x:%x.\n",
   (u32)VAR_0->vendor, (u32)VAR_0->device);

 FUNC_0(VAR_1);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
 FUNC_5(VAR_0, ((void*)0));
}
