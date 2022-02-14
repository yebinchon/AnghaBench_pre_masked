
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hfi1_devdata {int lbus_width; int lbus_speed; int lbus_info; int pcidev; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int,char*,int,int) ;

__attribute__((used)) static void FUNC_5(struct hfi1_devdata *VAR_1)
{
 u16 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1->pcidev, VAR_0, &VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_1, "Unable to read from PCI config\n");
  return;
 }

 VAR_1->lbus_width = FUNC_2(VAR_2);
 VAR_1->lbus_speed = FUNC_1(VAR_2);
 FUNC_4(VAR_1->lbus_info, sizeof(VAR_1->lbus_info),
   "PCIe,%uMHz,x%u", VAR_1->lbus_speed, VAR_1->lbus_width);
}
