
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_msix_entry {int isr_name; } ;
struct skd_device {char* devno; struct skd_msix_entry* msix_entries; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int handler; int name; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ,struct skd_device*) ;
 int FUNC_3 (int *,int ,int ,int ,int ,struct skd_device*) ;
 struct skd_msix_entry* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct skd_msix_entry*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_6 (struct pci_dev*,int,int,int ) ;
 int FUNC_7 (struct pci_dev*,int) ;
 int FUNC_8 (int ,int,char*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_9(struct skd_device *VAR_6)
{
 int VAR_7, VAR_8;
 struct pci_dev *VAR_9 = VAR_6->pdev;

 VAR_8 = FUNC_6(VAR_9, VAR_4, VAR_4,
   VAR_3);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_6->pdev->dev, "failed to enable MSI-X %d\n", VAR_8);
  goto out;
 }

 VAR_6->msix_entries = FUNC_4(VAR_4,
   sizeof(struct skd_msix_entry), VAR_2);
 if (!VAR_6->msix_entries) {
  VAR_8 = -VAR_1;
  FUNC_1(&VAR_6->pdev->dev, "msix table allocation error\n");
  goto out;
 }


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  struct skd_msix_entry *VAR_10 = &VAR_6->msix_entries[VAR_7];

  FUNC_8(VAR_10->isr_name, sizeof(VAR_10->isr_name),
    "%s%d-msix %s", VAR_0, VAR_6->devno,
    VAR_5[VAR_7].name);

  VAR_8 = FUNC_3(&VAR_6->pdev->dev,
    FUNC_7(VAR_6->pdev, VAR_7),
    VAR_5[VAR_7].handler, 0,
    VAR_10->isr_name, VAR_6);
  if (VAR_8) {
   FUNC_1(&VAR_6->pdev->dev,
    "Unable to register(%d) MSI-X handler %d: %s\n",
    VAR_8, VAR_7, VAR_10->isr_name);
   goto msix_out;
  }
 }

 FUNC_0(&VAR_6->pdev->dev, "%d msix irq(s) enabled\n",
  VAR_4);
 return 0;

msix_out:
 while (--VAR_7 >= 0)
  FUNC_2(&VAR_9->dev, FUNC_7(VAR_9, VAR_7), VAR_6);
out:
 FUNC_5(VAR_6->msix_entries);
 VAR_6->msix_entries = ((void*)0);
 return VAR_8;
}
