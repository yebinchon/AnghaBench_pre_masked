
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int irq; TYPE_1__* bus; int dev; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*,int,int,...) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,int ) ;
 int FUNC_3 (struct pci_dev const*,int ,int*) ;
 int FUNC_4 (struct pci_dev const*,int ,int) ;
 int FUNC_5 (struct pci_dev const*,int ,int) ;
 int FUNC_6 (int,int ) ;

int FUNC_7(const struct pci_dev *VAR_11, u8 VAR_12, u8 VAR_13)
{
 u16 VAR_14;
 u32 VAR_15;
 int VAR_16 = 0;

 if ((VAR_11->bus->number == 0) && (VAR_12 == 0)) {
  FUNC_6(0x7FFF0001, VAR_9);
  FUNC_2(VAR_11->bus, 0, VAR_0, 4,
     VAR_10);
  FUNC_1(VAR_11->bus, 0, VAR_0, 4, &VAR_15);
 } else if ((VAR_11->bus->number == 1) && (VAR_12 == 0x0)) {
  VAR_16 = VAR_8;
 } else {
  FUNC_0(&VAR_11->dev, "no irq found - bus=0x%x, slot = 0x%x\n",
   VAR_11->bus->number, VAR_12);
  return 0;
 }
 FUNC_0(&VAR_11->dev, "card - bus=0x%x, slot = 0x%x irq=%d\n",
  VAR_11->bus->number, VAR_12, VAR_16);


 FUNC_4(VAR_11, VAR_1, 0x14);


 FUNC_4(VAR_11, VAR_7, 0xff);
 FUNC_3(VAR_11, VAR_2, &VAR_14);


 VAR_14 = VAR_14 | VAR_4 | VAR_3 | VAR_5;
 FUNC_5(VAR_11, VAR_2, VAR_14);
 FUNC_4(VAR_11, VAR_6, VAR_11->irq);

 return VAR_16;
}
