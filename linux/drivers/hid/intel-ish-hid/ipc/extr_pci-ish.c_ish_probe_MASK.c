
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {int irq; int msix_enabled; int msi_enabled; struct device dev; } ;
struct ishtp_device {int resume_wait; int suspend_wait; int devc; struct pci_dev* pdev; int print_log; } ;
struct ish_hw {int mem_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int ,struct ishtp_device*) ;
 int FUNC_2 (struct device*,int ,int ,unsigned long,int ,struct ishtp_device*) ;
 int FUNC_3 (int *) ;
 struct ishtp_device* FUNC_4 (struct pci_dev*) ;
 int VAR_5 ;
 int FUNC_5 (struct ishtp_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct pci_dev*,int,int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int,int ) ;
 int * FUNC_11 (struct pci_dev*) ;
 struct ish_hw* FUNC_12 (struct ishtp_device*) ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_8, const struct pci_device_id *VAR_9)
{
 int VAR_10;
 struct ish_hw *VAR_11;
 unsigned long VAR_12 = 0;
 struct ishtp_device *VAR_13;
 struct device *VAR_14 = &VAR_8->dev;


 if (FUNC_7(VAR_6))
  return -VAR_0;


 VAR_10 = FUNC_9(VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_14, "ISH: Failed to enable PCI device\n");
  return VAR_10;
 }


 FUNC_8(VAR_8);


 VAR_10 = FUNC_10(VAR_8, 1 << 0, VAR_3);
 if (VAR_10) {
  FUNC_0(VAR_14, "ISH: Failed to get PCI regions\n");
  return VAR_10;
 }


 VAR_13 = FUNC_4(VAR_8);
 if (!VAR_13) {
  VAR_10 = -VAR_1;
  return VAR_10;
 }
 VAR_11 = FUNC_12(VAR_13);
 VAR_13->print_log = VAR_5;


 VAR_11->mem_addr = FUNC_11(VAR_8)[0];
 VAR_13->pdev = VAR_8;


 VAR_10 = FUNC_6(VAR_8, 1, 1, VAR_4);
 if (!VAR_8->msi_enabled && !VAR_8->msix_enabled)
  VAR_12 = VAR_2;

 VAR_10 = FUNC_2(VAR_14, VAR_8->irq, VAR_7,
          VAR_12, VAR_3, VAR_13);
 if (VAR_10) {
  FUNC_0(VAR_14, "ISH: request IRQ %d failed\n", VAR_8->irq);
  return VAR_10;
 }

 FUNC_1(VAR_13->devc, VAR_13);

 FUNC_3(&VAR_13->suspend_wait);
 FUNC_3(&VAR_13->resume_wait);

 VAR_10 = FUNC_5(VAR_13);
 if (VAR_10)
  return VAR_10;

 return 0;
}
