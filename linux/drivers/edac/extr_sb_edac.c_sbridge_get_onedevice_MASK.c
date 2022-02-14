
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sbridge_dev {size_t i_devs; struct pci_dev** pdev; } ;
struct pci_id_table {int n_imcs_per_sock; struct pci_id_descr* descr; } ;
struct pci_id_descr {scalar_t__ dom; int dev_id; scalar_t__ optional; } ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct sbridge_dev* FUNC_0 (int,int ,scalar_t__,struct pci_id_table const*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 struct sbridge_dev* FUNC_2 (int,int ,scalar_t__,int const,struct sbridge_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 struct pci_dev* FUNC_7 (int ,int ,struct pci_dev*) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct pci_dev **VAR_8,
     u8 *VAR_9,
     const struct pci_id_table *VAR_10,
     const unsigned VAR_11,
     const int VAR_12)
{
 struct sbridge_dev *VAR_13 = ((void*)0);
 const struct pci_id_descr *VAR_14 = &VAR_10->descr[VAR_11];
 struct pci_dev *VAR_15 = ((void*)0);
 int VAR_16 = 0;
 u8 VAR_17 = 0;
 int VAR_18 = 0;

 FUNC_8(VAR_3,
  "Seeking for: PCI ID %04x:%04x\n",
  VAR_6, VAR_14->dev_id);

 VAR_15 = FUNC_7(VAR_6,
         VAR_14->dev_id, *VAR_8);

 if (!VAR_15) {
  if (*VAR_8) {
   *VAR_8 = VAR_15;
   return 0;
  }

  if (VAR_14->optional)
   return 0;


  if (VAR_11 == 0)
   return -VAR_0;

  FUNC_8(VAR_5,
   "Device not found: %04x:%04x\n",
   VAR_6, VAR_14->dev_id);


  return -VAR_0;
 }
 VAR_16 = FUNC_5(VAR_15->bus);
 VAR_17 = VAR_15->bus->number;

next_imc:
 VAR_13 = FUNC_2(VAR_16, VAR_17, VAR_14->dom,
          VAR_12, VAR_13);
 if (!VAR_13) {

  if (VAR_14->dom == VAR_2 && VAR_11 != 1) {
   FUNC_1(0, "Skip IMC1: %04x:%04x (since HA1 was absent)\n",
     VAR_6, VAR_14->dev_id);
   FUNC_4(VAR_15);
   return 0;
  }

  if (VAR_14->dom == VAR_7)
   goto out_imc;

  VAR_13 = FUNC_0(VAR_16, VAR_17, VAR_14->dom, VAR_10);
  if (!VAR_13) {
   FUNC_4(VAR_15);
   return -VAR_1;
  }
  (*VAR_9)++;
 }

 if (VAR_13->pdev[VAR_13->i_devs]) {
  FUNC_8(VAR_4,
   "Duplicated device for %04x:%04x\n",
   VAR_6, VAR_14->dev_id);
  FUNC_4(VAR_15);
  return -VAR_0;
 }

 VAR_13->pdev[VAR_13->i_devs++] = VAR_15;


 if (++VAR_18 > 1)
  FUNC_3(VAR_15);

 if (VAR_14->dom == VAR_7 && VAR_18 < VAR_10->n_imcs_per_sock)
  goto next_imc;

out_imc:

 if (FUNC_9(FUNC_6(VAR_15) < 0)) {
  FUNC_8(VAR_4,
   "Couldn't enable %04x:%04x\n",
   VAR_6, VAR_14->dev_id);
  return -VAR_0;
 }

 FUNC_1(0, "Detected %04x:%04x\n",
   VAR_6, VAR_14->dev_id);






 FUNC_3(VAR_15);

 *VAR_8 = VAR_15;

 return 0;
}
