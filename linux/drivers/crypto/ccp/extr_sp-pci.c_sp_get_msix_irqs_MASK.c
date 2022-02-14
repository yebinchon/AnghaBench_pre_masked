
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sp_pci {int msix_count; TYPE_1__* msix_entry; } ;
struct sp_device {int use_tasklet; int ccp_irq; int psp_irq; struct device* dev; struct sp_pci* dev_specific; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int entry; int vector; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct pci_dev*,TYPE_1__*,int,int) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct sp_device *VAR_0)
{
 struct sp_pci *VAR_1 = VAR_0->dev_specific;
 struct device *VAR_2 = VAR_0->dev;
 struct pci_dev *VAR_3 = FUNC_2(VAR_2);
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->msix_entry); VAR_4++)
  VAR_1->msix_entry[VAR_4].entry = VAR_4;

 VAR_5 = FUNC_1(VAR_3, VAR_1->msix_entry, 1, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_1->msix_count = VAR_5;
 VAR_0->use_tasklet = 1;

 VAR_0->psp_irq = VAR_1->msix_entry[0].vector;
 VAR_0->ccp_irq = (VAR_1->msix_count > 1) ? VAR_1->msix_entry[1].vector
            : VAR_1->msix_entry[0].vector;
 return 0;
}
