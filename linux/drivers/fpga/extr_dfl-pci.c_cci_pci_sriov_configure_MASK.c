
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct dfl_fpga_cdev {int dummy; } ;
struct cci_drvdata {struct dfl_fpga_cdev* cdev; } ;


 int FUNC_0 (struct dfl_fpga_cdev*) ;
 int FUNC_1 (struct dfl_fpga_cdev*,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int) ;
 struct cci_drvdata* FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_0, int VAR_1)
{
 struct cci_drvdata *VAR_2 = FUNC_4(VAR_0);
 struct dfl_fpga_cdev *VAR_3 = VAR_2->cdev;
 int VAR_4 = 0;

 if (!VAR_1) {




  FUNC_2(VAR_0);

  FUNC_0(VAR_3);

 } else {




  VAR_4 = FUNC_1(VAR_3, VAR_1);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_3(VAR_0, VAR_1);
  if (VAR_4)
   FUNC_0(VAR_3);
 }

 return VAR_4;
}
