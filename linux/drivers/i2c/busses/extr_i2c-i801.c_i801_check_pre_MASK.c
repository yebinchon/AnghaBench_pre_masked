
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i801_priv {int features; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i801_priv*) ;
 int VAR_2 ;
 int FUNC_1 (struct i801_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct i801_priv *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_4(FUNC_1(VAR_5));
 if (VAR_6 & VAR_3) {
  FUNC_3(&VAR_5->pci_dev->dev, "SMBus is busy, can't use it!\n");
  return -VAR_0;
 }

 VAR_6 &= VAR_4;
 if (VAR_6) {
  FUNC_2(&VAR_5->pci_dev->dev, "Clearing status flags (%02x)\n",
   VAR_6);
  FUNC_5(VAR_6, FUNC_1(VAR_5));
  VAR_6 = FUNC_4(FUNC_1(VAR_5)) & VAR_4;
  if (VAR_6) {
   FUNC_3(&VAR_5->pci_dev->dev,
    "Failed clearing status flags (%02x)\n",
    VAR_6);
   return -VAR_0;
  }
 }
 if (VAR_5->features & VAR_1) {
  VAR_6 = FUNC_4(FUNC_0(VAR_5)) & VAR_2;
  if (VAR_6) {
   FUNC_2(&VAR_5->pci_dev->dev,
    "Clearing aux status flags (%02x)\n", VAR_6);
   FUNC_5(VAR_6, FUNC_0(VAR_5));
   VAR_6 = FUNC_4(FUNC_0(VAR_5)) & VAR_2;
   if (VAR_6) {
    FUNC_3(&VAR_5->pci_dev->dev,
     "Failed clearing aux status flags (%02x)\n",
     VAR_6);
    return -VAR_0;
   }
  }
 }

 return 0;
}
