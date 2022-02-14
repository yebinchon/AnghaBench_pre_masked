
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;

__attribute__((used)) static
int FUNC_11(struct pci_dev *VAR_2, const struct pci_device_id *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_10(VAR_2);
 if (VAR_4 < 0) {
  FUNC_3(&VAR_2->dev, "Failed to enable device %d.\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4 && VAR_4 != -VAR_0)
  FUNC_4(&VAR_2->dev, "PCIE AER unavailable %d.\n", VAR_4);

 FUNC_9(VAR_2);

 if (!FUNC_8(VAR_2, FUNC_0(64))) {
  VAR_4 = FUNC_7(VAR_2, FUNC_0(64));
  if (VAR_4)
   goto disable_error_report_exit;
 } else if (!FUNC_8(VAR_2, FUNC_0(32))) {
  VAR_4 = FUNC_7(VAR_2, FUNC_0(32));
  if (VAR_4)
   goto disable_error_report_exit;
 } else {
  VAR_4 = -VAR_1;
  FUNC_3(&VAR_2->dev, "No suitable DMA support available.\n");
  goto disable_error_report_exit;
 }

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4) {
  FUNC_3(&VAR_2->dev, "Fail to init drvdata %d.\n", VAR_4);
  goto disable_error_report_exit;
 }

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4) {
  FUNC_3(&VAR_2->dev, "enumeration failure %d.\n", VAR_4);
  goto disable_error_report_exit;
 }

 return VAR_4;

disable_error_report_exit:
 FUNC_5(VAR_2);
 return VAR_4;
}
