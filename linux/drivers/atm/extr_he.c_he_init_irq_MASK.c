
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct he_irq {int dummy; } ;
struct he_dev {int irq_phys; unsigned int* irq_tailoffset; TYPE_1__* pci_dev; int irq; TYPE_2__* irq_base; TYPE_2__* irq_tail; TYPE_2__* irq_head; } ;
struct TYPE_4__ {int isw; } ;
struct TYPE_3__ {int irq; int dev; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 TYPE_2__* FUNC_2 (int *,int,int*,int ) ;
 int VAR_30 ;
 int FUNC_3 (struct he_dev*,int,int ) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,struct he_dev*) ;

__attribute__((used)) static int FUNC_6(struct he_dev *VAR_31)
{
 int VAR_32;




 VAR_31->irq_base = FUNC_2(&VAR_31->pci_dev->dev,
           (VAR_0 + 1) * sizeof(struct he_irq),
           &VAR_31->irq_phys, VAR_5);
 if (VAR_31->irq_base == ((void*)0)) {
  FUNC_4("failed to allocate irq\n");
  return -VAR_4;
 }
 VAR_31->irq_tailoffset = (unsigned *)
     &VAR_31->irq_base[VAR_0];
 *VAR_31->irq_tailoffset = 0;
 VAR_31->irq_head = VAR_31->irq_base;
 VAR_31->irq_tail = VAR_31->irq_base;

 for (VAR_32 = 0; VAR_32 < VAR_0; ++VAR_32)
  VAR_31->irq_base[VAR_32].isw = VAR_29;

 FUNC_3(VAR_31, VAR_31->irq_phys, VAR_10);
 FUNC_3(VAR_31,
  FUNC_0(VAR_0) | FUNC_1(VAR_1),
        VAR_13);
 FUNC_3(VAR_31, VAR_27 | VAR_28, VAR_11);
 FUNC_3(VAR_31, 0x0, VAR_12);

 FUNC_3(VAR_31, 0x0, VAR_14);
 FUNC_3(VAR_31, 0x0, VAR_17);
 FUNC_3(VAR_31, 0x0, VAR_15);
 FUNC_3(VAR_31, 0x0, VAR_16);

 FUNC_3(VAR_31, 0x0, VAR_18);
 FUNC_3(VAR_31, 0x0, VAR_21);
 FUNC_3(VAR_31, 0x0, VAR_19);
 FUNC_3(VAR_31, 0x0, VAR_20);

 FUNC_3(VAR_31, 0x0, VAR_22);
 FUNC_3(VAR_31, 0x0, VAR_25);
 FUNC_3(VAR_31, 0x0, VAR_23);
 FUNC_3(VAR_31, 0x0, VAR_24);



 FUNC_3(VAR_31, 0x0, VAR_6);
 FUNC_3(VAR_31, 0x0, VAR_7);
 FUNC_3(VAR_31, 0x0, VAR_8);
 FUNC_3(VAR_31, 0x0, VAR_9);

 if (FUNC_5(VAR_31->pci_dev->irq,
   VAR_30, VAR_26, VAR_2, VAR_31)) {
  FUNC_4("irq %d already in use\n", VAR_31->pci_dev->irq);
  return -VAR_3;
 }

 VAR_31->irq = VAR_31->pci_dev->irq;

 return 0;
}
