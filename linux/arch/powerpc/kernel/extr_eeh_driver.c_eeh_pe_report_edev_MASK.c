
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int name; int err_handler; } ;
struct pci_dev {int dev; } ;
struct eeh_dev {int mode; struct pci_dev* pdev; int pe; } ;
typedef enum pci_ers_result { ____Placeholder_pci_ers_result } pci_ers_result ;
typedef int (* eeh_report_fn ) (struct eeh_dev*,struct pci_dev*,struct pci_driver*) ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct eeh_dev*) ;
 scalar_t__ FUNC_3 (struct eeh_dev*) ;
 int FUNC_4 (struct eeh_dev*,char*,...) ;
 int FUNC_5 (struct eeh_dev*,char*) ;
 struct pci_driver* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct eeh_dev *VAR_1, eeh_report_fn VAR_2,
          enum pci_ers_result *VAR_3)
{
 struct pci_dev *VAR_4;
 struct pci_driver *VAR_5;
 enum pci_ers_result VAR_6;

 FUNC_12();
 VAR_4 = VAR_1->pdev;
 if (VAR_4)
  FUNC_9(&VAR_4->dev);
 FUNC_13();
 if (!VAR_4) {
  FUNC_4(VAR_1, "no device");
  return;
 }
 FUNC_0(&VAR_4->dev);
 if (FUNC_3(VAR_1)) {
  VAR_5 = FUNC_6(VAR_4);

  if (!VAR_5)
   FUNC_4(VAR_1, "no driver");
  else if (!VAR_5->err_handler)
   FUNC_4(VAR_1, "driver not EEH aware");
  else if (VAR_1->mode & VAR_0)
   FUNC_4(VAR_1, "driver bound too late");
  else {
   VAR_6 = VAR_2(VAR_1, VAR_4, VAR_5);
   FUNC_4(VAR_1, "%s driver reports: '%s'",
          VAR_5->name,
          FUNC_11(VAR_6));
   if (VAR_3)
    *VAR_3 = FUNC_10(*VAR_3,
              VAR_6);
  }
  if (VAR_5)
   FUNC_7(VAR_4);
 } else {
  FUNC_4(VAR_1, "not actionable (%d,%d,%d)", !!VAR_4,
         !FUNC_2(VAR_1), !FUNC_8(VAR_1->pe));
 }
 FUNC_1(&VAR_4->dev);
 if (VAR_1->pdev != VAR_4)
  FUNC_5(VAR_1, "Device changed during processing!\n");
 FUNC_14(&VAR_4->dev);
}
