
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct e752x_pvt {TYPE_1__* dev_info; struct pci_dev* dev_d0f1; } ;
struct TYPE_2__ {scalar_t__ err_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct e752x_pvt*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct e752x_pvt *VAR_10)
{
 struct pci_dev *VAR_11;

 VAR_11 = VAR_10->dev_d0f1;

 if (VAR_10->dev_info->err_dev == VAR_9) {
  FUNC_2(VAR_11, VAR_7, 0);
  FUNC_2(VAR_11, VAR_8, 0);
 } else {
  FUNC_1(VAR_11, VAR_4, 0x00);
  FUNC_1(VAR_11, VAR_5, 0x00);
 }

 FUNC_0(VAR_10);

 FUNC_3(VAR_11, VAR_6, 0x00);
 FUNC_1(VAR_11, VAR_0, 0x00);
 FUNC_1(VAR_11, VAR_1, 0x00);
 FUNC_1(VAR_11, VAR_2, 0x00);
 FUNC_1(VAR_11, VAR_3, 0x00);
}
