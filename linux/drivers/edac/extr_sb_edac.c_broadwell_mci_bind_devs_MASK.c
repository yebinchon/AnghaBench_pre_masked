
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * pci_vtd; } ;
struct sbridge_pvt {TYPE_1__ info; struct pci_dev* pci_ta; struct pci_dev* pci_ras; struct pci_dev* pci_sad1; struct pci_dev* pci_ha; struct pci_dev* pci_sad0; struct pci_dev* pci_ddrio; struct pci_dev** pci_tad; } ;
struct sbridge_dev {int n_devs; int bus; struct pci_dev** pdev; } ;
struct pci_dev {int device; int devfn; } ;
struct mem_ctl_info {struct sbridge_pvt* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ,int ,int ,struct pci_dev*) ;
 int * FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct mem_ctl_info *VAR_4,
     struct sbridge_dev *VAR_5)
{
 struct sbridge_pvt *VAR_6 = VAR_4->pvt_info;
 struct pci_dev *VAR_7;
 u8 VAR_8 = 0;
 int VAR_9;


 if (VAR_6->info.pci_vtd == ((void*)0))

  VAR_6->info.pci_vtd = FUNC_4(VAR_3,
         VAR_2,
         ((void*)0));

 for (VAR_9 = 0; VAR_9 < VAR_5->n_devs; VAR_9++) {
  VAR_7 = VAR_5->pdev[VAR_9];
  if (!VAR_7)
   continue;

  switch (VAR_7->device) {
  case 144:
   VAR_6->pci_sad0 = VAR_7;
   break;
  case 143:
   VAR_6->pci_sad1 = VAR_7;
   break;
  case 141:
  case 134:
   VAR_6->pci_ha = VAR_7;
   break;
  case 140:
  case 133:
   VAR_6->pci_ta = VAR_7;
   break;
  case 135:
  case 128:
   VAR_6->pci_ras = VAR_7;
   break;
  case 139:
  case 138:
  case 137:
  case 136:
  case 132:
  case 131:
  case 130:
  case 129:
  {
   int VAR_10 = FUNC_2(VAR_7->device);
   VAR_6->pci_tad[VAR_10] = VAR_7;
   VAR_8 |= 1 << VAR_10;
  }
   break;
  case 142:
   VAR_6->pci_ddrio = VAR_7;
   break;
  default:
   break;
  }

  FUNC_3(0, "Associated PCI %02x.%02d.%d with dev = %p\n",
    VAR_5->bus,
    FUNC_1(VAR_7->devfn), FUNC_0(VAR_7->devfn),
    VAR_7);
 }


 if (!VAR_6->pci_sad0 || !VAR_6->pci_ha || !VAR_6->pci_sad1 ||
     !VAR_6->pci_ras || !VAR_6->pci_ta || !VAR_6->info.pci_vtd)
  goto enodev;

 if (VAR_8 != 0x0f &&
     VAR_8 != 0x03)
  goto enodev;
 return 0;

enodev:
 FUNC_5(VAR_1, "Some needed devices are missing\n");
 return -VAR_0;
}
