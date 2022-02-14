
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct grpci1_priv {int pci_err_mask; int dev; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct grpci1_priv*,int ,int ,int ,int*) ;
 int FUNC_2 (struct grpci1_priv*,int ,int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_10, void *VAR_11)
{
 struct grpci1_priv *VAR_12 = VAR_11;
 u32 VAR_13;

 FUNC_1(VAR_12, VAR_9, 0, VAR_2, &VAR_13);
 VAR_13 &= VAR_12->pci_err_mask;

 if (VAR_13 == 0)
  return VAR_1;

 if (VAR_13 & VAR_4)
  FUNC_0(VAR_12->dev, "Data Parity Error\n");

 if (VAR_13 & VAR_8)
  FUNC_0(VAR_12->dev, "Signalled Target Abort\n");

 if (VAR_13 & VAR_6)
  FUNC_0(VAR_12->dev, "Received Target Abort\n");

 if (VAR_13 & VAR_5)
  FUNC_0(VAR_12->dev, "Received Master Abort\n");

 if (VAR_13 & VAR_7)
  FUNC_0(VAR_12->dev, "Signalled System Error\n");

 if (VAR_13 & VAR_3)
  FUNC_0(VAR_12->dev, "Parity Error\n");


 FUNC_2(VAR_12, VAR_9, 0, VAR_2, VAR_13);

 return VAR_0;
}
