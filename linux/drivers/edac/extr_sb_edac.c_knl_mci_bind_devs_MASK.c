
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct pci_dev** pci_cha; struct pci_dev** pci_channel; struct pci_dev* pci_mc1; struct pci_dev* pci_mc0; struct pci_dev* pci_mc_info; } ;
struct sbridge_pvt {TYPE_1__ knl; struct pci_dev* pci_ta; struct pci_dev* pci_sad1; struct pci_dev* pci_sad0; } ;
struct sbridge_dev {int n_devs; struct pci_dev** pdev; } ;
struct pci_dev {int devfn; int device; } ;
struct mem_ctl_info {struct sbridge_pvt* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct mem_ctl_info *VAR_4,
   struct sbridge_dev *VAR_5)
{
 struct sbridge_pvt *VAR_6 = VAR_4->pvt_info;
 struct pci_dev *VAR_7;
 int VAR_8, VAR_9;

 int VAR_10;
 int VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_5->n_devs; VAR_10++) {
  VAR_7 = VAR_5->pdev[VAR_10];
  if (!VAR_7)
   continue;


  VAR_8 = (VAR_7->devfn >> 3) & 0x1f;
  VAR_9 = VAR_7->devfn & 0x7;

  switch (VAR_7->device) {
  case 132:
   if (VAR_8 == 8)
    VAR_6->knl.pci_mc0 = VAR_7;
   else if (VAR_8 == 9)
    VAR_6->knl.pci_mc1 = VAR_7;
   else {
    FUNC_1(VAR_1,
     "Memory controller in unexpected place! (dev %d, fn %d)\n",
     VAR_8, VAR_9);
    continue;
   }
   break;

  case 131:
   VAR_6->pci_sad0 = VAR_7;
   break;

  case 130:
   VAR_6->pci_sad1 = VAR_7;
   break;

  case 134:



   VAR_11 = ((VAR_8-14)*8)+VAR_9;

   if (VAR_11 < 0 || VAR_11 >= VAR_3) {
    FUNC_1(VAR_1,
     "Caching and Home Agent in unexpected place! (dev %d, fn %d)\n",
     VAR_8, VAR_9);
    continue;
   }

   FUNC_0(VAR_6->knl.pci_cha[VAR_11] != ((void*)0));

   VAR_6->knl.pci_cha[VAR_11] = VAR_7;
   break;

  case 133:
   VAR_11 = -1;






   if (VAR_8 == 9)
    VAR_11 = VAR_9-2;
   else if (VAR_8 == 8)
    VAR_11 = 3 + (VAR_9-2);

   if (VAR_11 < 0 || VAR_11 >= VAR_2) {
    FUNC_1(VAR_1,
     "DRAM Channel Registers in unexpected place! (dev %d, fn %d)\n",
     VAR_8, VAR_9);
    continue;
   }

   FUNC_0(VAR_6->knl.pci_channel[VAR_11] != ((void*)0));
   VAR_6->knl.pci_channel[VAR_11] = VAR_7;
   break;

  case 128:
   VAR_6->knl.pci_mc_info = VAR_7;
   break;

  case 129:
   VAR_6->pci_ta = VAR_7;
   break;

  default:
   FUNC_1(VAR_1, "Unexpected device %d\n",
    VAR_7->device);
   break;
  }
 }

 if (!VAR_6->knl.pci_mc0 || !VAR_6->knl.pci_mc1 ||
     !VAR_6->pci_sad0 || !VAR_6->pci_sad1 ||
     !VAR_6->pci_ta) {
  goto enodev;
 }

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (!VAR_6->knl.pci_channel[VAR_10]) {
   FUNC_1(VAR_1, "Missing channel %d\n", VAR_10);
   goto enodev;
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (!VAR_6->knl.pci_cha[VAR_10]) {
   FUNC_1(VAR_1, "Missing CHA %d\n", VAR_10);
   goto enodev;
  }
 }

 return 0;

enodev:
 FUNC_1(VAR_1, "Some needed devices are missing\n");
 return -VAR_0;
}
