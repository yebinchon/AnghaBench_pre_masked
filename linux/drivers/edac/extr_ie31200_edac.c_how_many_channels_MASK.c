
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5;

 FUNC_1(VAR_3, VAR_0 + 1, &VAR_5);


 if (VAR_5 & VAR_2) {
  FUNC_0(0, "In single channel mode\n");
  VAR_4 = 1;
 } else {
  FUNC_0(0, "In dual channel mode\n");
  VAR_4 = 2;
 }


 if (VAR_5 & VAR_1)
  FUNC_0(0, "2 DIMMS per channel disabled\n");
 else
  FUNC_0(0, "2 DIMMS per channel enabled\n");

 return VAR_4;
}
