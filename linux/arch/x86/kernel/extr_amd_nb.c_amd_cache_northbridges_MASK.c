
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct amd_northbridge {int dummy; } ;
struct TYPE_6__ {int num; int flags; struct amd_northbridge* nb; } ;
struct TYPE_5__ {scalar_t__ x86_vendor; int x86; int x86_model; int x86_stepping; } ;
struct TYPE_4__ {struct pci_dev* link; struct pci_dev* misc; struct pci_dev* root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 () ;
 struct pci_device_id* VAR_7 ;
 struct pci_device_id* VAR_8 ;
 TYPE_3__ VAR_9 ;
 struct pci_device_id* VAR_10 ;
 TYPE_2__ VAR_11 ;
 int FUNC_1 (int) ;
 struct pci_device_id* VAR_12 ;
 struct pci_device_id* VAR_13 ;
 struct pci_device_id* VAR_14 ;
 struct amd_northbridge* FUNC_2 (int,int,int ) ;
 struct pci_dev* FUNC_3 (struct pci_dev*,struct pci_device_id const*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (char*) ;

int FUNC_6(void)
{
 const struct pci_device_id *VAR_15 = VAR_8;
 const struct pci_device_id *VAR_16 = VAR_7;
 const struct pci_device_id *VAR_17 = VAR_10;
 struct pci_dev *VAR_18, *VAR_19, *VAR_20;
 struct amd_northbridge *VAR_21;
 u16 VAR_22 = 0;
 u16 VAR_23 = 0;
 u16 VAR_24 = 0;
 u16 VAR_25, VAR_26;

 if (VAR_9.num)
  return 0;

 if (VAR_11.x86_vendor == VAR_6) {
  VAR_17 = VAR_14;
  VAR_15 = VAR_13;
  VAR_16 = VAR_12;
 }

 VAR_19 = ((void*)0);
 while ((VAR_19 = FUNC_3(VAR_19, VAR_15)) != ((void*)0))
  VAR_23++;

 if (!VAR_23)
  return -VAR_3;

 VAR_18 = ((void*)0);
 while ((VAR_18 = FUNC_3(VAR_18, VAR_17)) != ((void*)0))
  VAR_24++;

 if (VAR_24) {
  VAR_22 = VAR_24 / VAR_23;





  if (!VAR_22 || (VAR_24 % VAR_22)) {
   FUNC_5("Unsupported AMD DF/PCI configuration found\n");
   return -VAR_3;
  }
 }

 VAR_21 = FUNC_2(VAR_23, sizeof(struct amd_northbridge), VAR_5);
 if (!VAR_21)
  return -VAR_4;

 VAR_9.nb = VAR_21;
 VAR_9.num = VAR_23;

 VAR_20 = VAR_19 = VAR_18 = ((void*)0);
 for (VAR_25 = 0; VAR_25 < VAR_9.num; VAR_25++) {
  FUNC_4(VAR_25)->root = VAR_18 =
   FUNC_3(VAR_18, VAR_17);
  FUNC_4(VAR_25)->misc = VAR_19 =
   FUNC_3(VAR_19, VAR_15);
  FUNC_4(VAR_25)->link = VAR_20 =
   FUNC_3(VAR_20, VAR_16);
  for (VAR_26 = 1; VAR_26 < VAR_22; VAR_26++)
   VAR_18 = FUNC_3(VAR_18, VAR_17);
 }

 if (FUNC_0())
  VAR_9.flags |= VAR_0;




 if (!FUNC_1(0x80000006))
  return 0;





 if (VAR_11.x86 == 0x10 &&
     VAR_11.x86_model >= 0x8 &&
     (VAR_11.x86_model > 0x9 ||
      VAR_11.x86_stepping >= 0x1))
  VAR_9.flags |= VAR_1;

 if (VAR_11.x86 == 0x15)
  VAR_9.flags |= VAR_1;


 if (VAR_11.x86 == 0x15)
  VAR_9.flags |= VAR_2;

 return 0;
}
