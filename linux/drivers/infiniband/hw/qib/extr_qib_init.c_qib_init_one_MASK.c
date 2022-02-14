
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int num_pports; scalar_t__ pport; int (* f_quiet_serdes ) (scalar_t__) ;int flags; } ;
struct pci_device_id {int device; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 struct qib_devdata* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct qib_devdata*) ;



 int FUNC_2 (struct qib_devdata*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct qib_devdata*) ;
 int FUNC_5 (struct qib_devdata*,char*,int) ;
 int FUNC_6 (struct qib_devdata*) ;
 int FUNC_7 (struct qib_devdata*) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (struct qib_devdata*) ;
 int FUNC_10 (struct qib_devdata*,int ) ;
 struct qib_devdata* FUNC_11 (struct pci_dev*,struct pci_device_id const*) ;
 struct qib_devdata* FUNC_12 (struct pci_dev*,struct pci_device_id const*) ;
 struct qib_devdata* FUNC_13 (struct pci_dev*,struct pci_device_id const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_14 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_15 (struct qib_devdata*) ;
 int FUNC_16 (struct qib_devdata*) ;
 int FUNC_17 (struct qib_devdata*) ;
 int FUNC_18 (struct qib_devdata*) ;
 int FUNC_19 (struct qib_devdata*) ;
 int FUNC_20 (struct qib_devdata*) ;
 int FUNC_21 (struct qib_devdata*) ;
 int FUNC_22 (scalar_t__) ;

__attribute__((used)) static int FUNC_23(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;
 struct qib_devdata *VAR_10 = ((void*)0);

 VAR_6 = FUNC_14(VAR_4, VAR_5);
 if (VAR_6)
  goto bail;





 switch (VAR_5->device) {
 case 130:



  FUNC_8(&VAR_4->dev,
   "Intel PCIE device 0x%x cannot work if CONFIG_PCI_MSI is not enabled\n",
   VAR_5->device);
  VAR_10 = FUNC_0(-VAR_0);

  break;

 case 129:
  VAR_10 = FUNC_12(VAR_4, VAR_5);
  break;

 case 128:
  VAR_10 = FUNC_13(VAR_4, VAR_5);
  break;

 default:
  FUNC_8(&VAR_4->dev,
   "Failing on unknown Intel deviceid 0x%x\n",
   VAR_5->device);
  VAR_6 = -VAR_0;
 }

 if (FUNC_1(VAR_10))
  VAR_6 = FUNC_2(VAR_10);
 if (VAR_6)
  goto bail;

 VAR_6 = FUNC_4(VAR_10);
 if (VAR_6)
  goto bail;


 VAR_9 = FUNC_10(VAR_10, 0);

 VAR_6 = FUNC_16(VAR_10);







 if (!VAR_3 && !VAR_9 && !VAR_6)
  VAR_10->flags |= VAR_1;

 VAR_7 = FUNC_6(VAR_10);
 if (VAR_7)
  FUNC_5(VAR_10, "Failed to create /dev devices: %d\n", -VAR_7);
 VAR_7 = FUNC_20(VAR_10);
 if (VAR_7)
  FUNC_5(VAR_10, "Failed filesystem setup for counters: %d\n",
       -VAR_7);

 if (VAR_3 || VAR_9 || VAR_6) {
  FUNC_17(VAR_10);
  FUNC_3(VAR_2);
  for (VAR_8 = 0; VAR_8 < VAR_10->num_pports; ++VAR_8)
   VAR_10->f_quiet_serdes(VAR_10->pport + VAR_8);
  if (VAR_3)
   goto bail;
  if (!VAR_7) {
   (void) FUNC_21(VAR_10);
   FUNC_7(VAR_10);
  }
  if (!VAR_6)
   FUNC_18(VAR_10);
  FUNC_15(VAR_10);
  if (VAR_9)
   VAR_6 = VAR_9;
  goto bail;
 }

 VAR_6 = FUNC_9(VAR_10);
 if (VAR_6) {
  FUNC_5(VAR_10,
   "Write combining not enabled (err %d): performance may be poor\n",
   -VAR_6);
  VAR_6 = 0;
 }

 FUNC_19(VAR_10);
bail:
 return VAR_6;
}
