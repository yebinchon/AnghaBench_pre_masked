
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset; } ;
union zip_cmd_ctl {int u_reg64; TYPE_1__ s; } ;
struct zip_device {size_t index; scalar_t__ reg_base; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pci_dev*) ;
 struct zip_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int *) ;
 int FUNC_5 (struct zip_device*,int) ;
 int ** VAR_2 ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_3)
{
 struct zip_device *VAR_4 = FUNC_2(VAR_3);
 union zip_cmd_ctl VAR_5;
 int VAR_6 = 0;

 if (!VAR_4)
  return;

 if (VAR_4->reg_base) {
  VAR_5.u_reg64 = 0x0ull;
  VAR_5.s.reset = 1;
  FUNC_6(VAR_5.u_reg64, (VAR_4->reg_base + VAR_0));
  FUNC_0(VAR_4->reg_base);
 }

 FUNC_3(VAR_3);
 FUNC_1(VAR_3);





 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_5(VAR_4, VAR_6);

 FUNC_4(VAR_3, ((void*)0));

 VAR_2[VAR_4->index] = ((void*)0);
}
