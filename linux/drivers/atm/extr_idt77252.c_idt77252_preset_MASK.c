
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct idt77252_dev {int name; int pcidev; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct idt77252_dev*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ,int*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct idt77252_dev *VAR_6)
{
 u16 VAR_7;





 FUNC_1("%s: Enable PCI master and memory access for SAR.\n",
  VAR_6->name);
 if (FUNC_4(VAR_6->pcidev, VAR_0, &VAR_7)) {
  FUNC_6("%s: can't read PCI_COMMAND.\n", VAR_6->name);
  FUNC_2(VAR_6);
  return -1;
 }
 if (!(VAR_7 & VAR_1)) {
  FUNC_6("%s: PCI_COMMAND: %04x (???)\n",
         VAR_6->name, VAR_7);
  FUNC_2(VAR_6);
  return (-1);
 }
 VAR_7 |= (VAR_3 | VAR_2);
 if (FUNC_5(VAR_6->pcidev, VAR_0, VAR_7)) {
  FUNC_6("%s: can't write PCI_COMMAND.\n", VAR_6->name);
  FUNC_2(VAR_6);
  return -1;
 }





 FUNC_7(VAR_4, VAR_5);
 FUNC_3(1);
 FUNC_7(0, VAR_5);

 FUNC_0("%s: Software resetted.\n", VAR_6->name);
 return 0;
}
