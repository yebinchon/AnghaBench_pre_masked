
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int device; int vendor; } ;
struct driver_data {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,unsigned short*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,unsigned short) ;

__attribute__((used)) static void FUNC_4(struct driver_data *VAR_4, struct pci_dev *VAR_5)
{
 int VAR_6;
 unsigned short VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 if (VAR_6) {
  FUNC_2(VAR_5,
   VAR_6 + VAR_1,
   &VAR_7);
  if (VAR_7 & (1 << 11) ||
      VAR_7 & (1 << 4)) {
   FUNC_0(&VAR_4->pdev->dev,
    "Disabling ERO/No-Snoop on bridge device %04x:%04x\n",
     VAR_5->vendor, VAR_5->device);
   VAR_7 &= ~(VAR_2 |
      VAR_3);
   FUNC_3(VAR_5,
    VAR_6 + VAR_1,
    VAR_7);
  }
 }
}
