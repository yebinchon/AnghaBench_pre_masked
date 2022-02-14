
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int start; int end; } ;
struct pci_dev {int irq; } ;
struct device_node {int dummy; } ;
typedef int DEFINE_SPINLOCK ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned long VAR_1 ;
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
 int FUNC_1 (int,int ) ;
 int VAR_22 ;
 struct pci_dev* VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int FUNC_2 (int,int ) ;
 unsigned long VAR_29 ;
 void** VAR_30 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct pci_dev*,int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_5 (struct device_node*,int,struct resource*) ;
 int VAR_33 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct pci_dev*) ;
 struct device_node* FUNC_9 (struct pci_dev*) ;
 struct pci_dev* FUNC_10 (int ,int,struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ,int*) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct resource*) ;
 int VAR_34 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (unsigned long,unsigned long) ;
 int VAR_35 ;
 int FUNC_18 (int ) ;

int FUNC_19(void)
{
 static DEFINE_SPINLOCK(VAR_36);
 struct pci_dev *VAR_37;
 struct pci_dev *VAR_38;
 struct resource VAR_39;
 struct device_node *VAR_40;
 int VAR_41, VAR_42, VAR_43 = 0;
 unsigned long VAR_44;
 u32 VAR_45;

 if (!FUNC_3(VAR_33))
  return -VAR_0;

 FUNC_15(&VAR_36);


 if (VAR_23)
  goto out;

 VAR_37 = FUNC_10(VAR_21, 0xa001, ((void*)0));
 if (!VAR_37) {
  FUNC_0();
  FUNC_13("Can't find I/O Bridge\n");
  VAR_43 = -VAR_0;
  goto out;
 }
 VAR_28 = FUNC_4(VAR_37, 0);

 VAR_23 = FUNC_10(VAR_21, 0xa007, ((void*)0));
 if (!VAR_23) {
  FUNC_0();
  FUNC_13("Can't find DMA controller\n");
  VAR_43 = -VAR_0;
  goto out;
 }
 VAR_24 = FUNC_4(VAR_23, 0);
 VAR_22 = FUNC_18(VAR_23->irq);

 FUNC_11(VAR_23, VAR_9, &VAR_45);
 VAR_32 = (VAR_45 & VAR_10) >> VAR_11;

 FUNC_11(VAR_23, VAR_6, &VAR_45);
 VAR_31 = (VAR_45 & VAR_7) >> VAR_8;

 VAR_42 = 0;
 for (VAR_38 = FUNC_10(VAR_21, 0xa006, ((void*)0));
      VAR_38;
      VAR_38 = FUNC_10(VAR_21, 0xa006, VAR_38))
  VAR_30[VAR_42++] = FUNC_4(VAR_38, 0);

 FUNC_8(VAR_38);

 for (VAR_38 = FUNC_10(VAR_21, 0xa005, ((void*)0));
      VAR_38;
      VAR_38 = FUNC_10(VAR_21, 0xa005, VAR_38))
  VAR_30[VAR_42++] = FUNC_4(VAR_38, 0);

 FUNC_8(VAR_38);

 VAR_40 = FUNC_9(VAR_37);
 if (VAR_40)
  VAR_43 = FUNC_5(VAR_40, 1, &VAR_39);
 if (!VAR_40 || VAR_43) {

  VAR_39.start = 0xfd800000;
  VAR_39.end = VAR_39.start + 0x1000;
 }
 VAR_25 = FUNC_2(VAR_39.start, FUNC_14(&VAR_39));
 FUNC_8(VAR_37);

 for (VAR_41 = 0; VAR_41 < VAR_5; VAR_41++)
  FUNC_1(VAR_41, VAR_35);

 for (VAR_41 = 0; VAR_41 < VAR_4; VAR_41++)
  FUNC_1(VAR_41, VAR_34);

 VAR_44 = VAR_29 + VAR_1;
 FUNC_7(VAR_13, 0);
 while (FUNC_6(VAR_15) & 1) {
  if (FUNC_17(VAR_29, VAR_44)) {
   FUNC_13("Warning: Could not disable RX section\n");
   break;
  }
 }

 VAR_44 = VAR_29 + VAR_1;
 FUNC_7(VAR_16, 0);
 while (FUNC_6(VAR_18) & 1) {
  if (FUNC_17(VAR_29, VAR_44)) {
   FUNC_13("Warning: Could not disable TX section\n");
   break;
  }
 }


 VAR_45 = FUNC_6(VAR_12);
 FUNC_7(VAR_12, VAR_45 | 0x18000000);


 FUNC_7(VAR_16, VAR_17);


 FUNC_7(VAR_13, VAR_14);

 for (VAR_41 = 0; VAR_41 < VAR_2; VAR_41++)
  FUNC_1(VAR_41, VAR_26);

 for (VAR_41 = 0; VAR_41 < VAR_3; VAR_41++)
  FUNC_1(VAR_41, VAR_27);


 FUNC_7(VAR_19, 0xffffffff);
 FUNC_7(VAR_20, 0xffffffff);

 FUNC_12("PA Semi PWRficient DMA library initialized "
  "(%d tx, %d rx channels)\n", VAR_32, VAR_31);

out:
 FUNC_16(&VAR_36);
 return VAR_43;
}
