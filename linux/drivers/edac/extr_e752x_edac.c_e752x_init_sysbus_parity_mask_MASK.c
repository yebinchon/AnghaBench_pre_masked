
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct e752x_pvt {struct pci_dev* dev_d0f1; } ;
struct TYPE_2__ {char* x86_model_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct e752x_pvt *VAR_3)
{
 char *VAR_4 = FUNC_0(0).x86_model_id;
 struct pci_dev *VAR_5 = VAR_3->dev_d0f1;
 int VAR_6 = 1;


 if (VAR_2 != -1) {
  VAR_6 = VAR_2;
 } else if (VAR_4[0] && !FUNC_3(VAR_4, "Xeon")) {
  FUNC_1(VAR_1, "System Bus Parity not "
        "supported by CPU, disabling\n");
  VAR_6 = 0;
 }

 if (VAR_6)
  FUNC_2(VAR_5, VAR_0, 0x0000);
 else
  FUNC_2(VAR_5, VAR_0, 0x0309);
}
