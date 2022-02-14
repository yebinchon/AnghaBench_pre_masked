
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct bt8xxgpio {int gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*) ;
 struct bt8xxgpio* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_3)
{
 struct bt8xxgpio *VAR_4 = FUNC_3(VAR_3);

 FUNC_1(&VAR_4->gpio);

 FUNC_0(0, VAR_1);
 FUNC_0(~0x0, VAR_2);
 FUNC_0(0x0, VAR_0);

 FUNC_2(VAR_3);
}
