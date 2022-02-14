
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i801_priv {int features; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i801_priv*) ;
 int VAR_6 ;
 int FUNC_1 (struct i801_priv*) ;
 int VAR_7 ;
 int FUNC_2 (struct i801_priv*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct i801_priv *VAR_13, int VAR_14)
{
 int VAR_15 = 0;







 if (FUNC_7(VAR_14 < 0)) {
  FUNC_4(&VAR_13->pci_dev->dev, "Transaction timeout\n");

  FUNC_3(&VAR_13->pci_dev->dev, "Terminating the current operation\n");
  FUNC_6(FUNC_5(FUNC_1(VAR_13)) | VAR_7,
         FUNC_1(VAR_13));
  FUNC_8(1000, 2000);
  FUNC_6(FUNC_5(FUNC_1(VAR_13)) & (~VAR_7),
         FUNC_1(VAR_13));


  VAR_14 = FUNC_5(FUNC_2(VAR_13));
  if ((VAR_14 & VAR_11) ||
      !(VAR_14 & VAR_10))
   FUNC_4(&VAR_13->pci_dev->dev,
    "Failed terminating the transaction\n");
  FUNC_6(VAR_12, FUNC_2(VAR_13));
  return -VAR_4;
 }

 if (VAR_14 & VAR_10) {
  VAR_15 = -VAR_2;
  FUNC_4(&VAR_13->pci_dev->dev, "Transaction failed\n");
 }
 if (VAR_14 & VAR_9) {
  if ((VAR_13->features & VAR_5) &&
      (FUNC_5(FUNC_0(VAR_13)) & VAR_6)) {
   FUNC_6(VAR_6, FUNC_0(VAR_13));
   VAR_15 = -VAR_1;
   FUNC_3(&VAR_13->pci_dev->dev, "PEC error\n");
  } else {
   VAR_15 = -VAR_3;
   FUNC_3(&VAR_13->pci_dev->dev, "No response\n");
  }
 }
 if (VAR_14 & VAR_8) {
  VAR_15 = -VAR_0;
  FUNC_3(&VAR_13->pci_dev->dev, "Lost arbitration\n");
 }


 FUNC_6(VAR_14, FUNC_2(VAR_13));

 return VAR_15;
}
