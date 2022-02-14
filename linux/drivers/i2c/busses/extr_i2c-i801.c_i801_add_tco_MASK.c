
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tco_res ;
struct resource {int start; int end; void* flags; } ;
struct pci_dev {int dev; int bus; int devfn; } ;
struct i801_priv {int features; int tco_pdev; struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct i801_priv*,struct pci_dev*,struct resource*) ;
 int FUNC_6 (struct i801_priv*,struct pci_dev*,struct resource*) ;
 int FUNC_7 (struct resource*,int ,int) ;
 int FUNC_8 (int ,unsigned int,int ,int*) ;
 int FUNC_9 (int ,unsigned int,int ,int) ;
 int FUNC_10 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_11(struct i801_priv *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 struct pci_dev *VAR_17 = VAR_12->pci_dev;
 struct resource VAR_18[3], *VAR_19;
 unsigned int VAR_20;


 if (FUNC_3())
  return;

 if (!(VAR_12->features & (VAR_5 | VAR_4)))
  return;

 FUNC_10(VAR_17, VAR_9, &VAR_14);
 FUNC_10(VAR_17, VAR_10, &VAR_15);
 if (!(VAR_15 & VAR_11))
  return;

 FUNC_7(VAR_18, 0, sizeof(VAR_18));

 VAR_19 = &VAR_18[VAR_7];
 VAR_19->start = VAR_14 & ~1;
 VAR_19->end = VAR_19->start + 32 - 1;
 VAR_19->flags = VAR_8;




 VAR_20 = FUNC_1(FUNC_2(VAR_17->devfn), 2);
 FUNC_8(VAR_17->bus, VAR_20, VAR_0, &VAR_13);

 VAR_19 = &VAR_18[VAR_6];
 VAR_19->start = (VAR_13 & ~1) + VAR_1;
 VAR_19->end = VAR_19->start + 3;
 VAR_19->flags = VAR_8;




 FUNC_8(VAR_17->bus, VAR_20, VAR_2, &VAR_16);
 VAR_16 |= VAR_3;
 FUNC_9(VAR_17->bus, VAR_20, VAR_2, VAR_16);

 if (VAR_12->features & VAR_4)
  VAR_12->tco_pdev = FUNC_5(VAR_12, VAR_17, VAR_18);
 else
  VAR_12->tco_pdev = FUNC_6(VAR_12, VAR_17, VAR_18);

 if (FUNC_0(VAR_12->tco_pdev))
  FUNC_4(&VAR_17->dev, "failed to create iTCO device\n");
}
