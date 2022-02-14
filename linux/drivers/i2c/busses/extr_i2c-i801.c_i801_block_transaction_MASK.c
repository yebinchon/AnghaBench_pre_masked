
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union i2c_smbus_data {int* block; } ;
struct i801_priv {int features; TYPE_1__* pci_dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i801_priv*,union i2c_smbus_data*,char,int,int) ;
 int FUNC_2 (struct i801_priv*,union i2c_smbus_data*,char,int,int) ;
 scalar_t__ FUNC_3 (struct i801_priv*) ;
 int FUNC_4 (TYPE_1__*,int ,unsigned char*) ;
 int FUNC_5 (TYPE_1__*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_6(struct i801_priv *VAR_8,
      union i2c_smbus_data *VAR_9, char VAR_10,
      int VAR_11, int VAR_12)
{
 int VAR_13 = 0;
 unsigned char VAR_14;

 if (VAR_11 == VAR_4) {
  if (VAR_10 == VAR_5) {

   FUNC_4(VAR_8->pci_dev, VAR_6, &VAR_14);
   FUNC_5(VAR_8->pci_dev, VAR_6,
           VAR_14 | VAR_7);
  } else if (!(VAR_8->features & VAR_2)) {
   FUNC_0(&VAR_8->pci_dev->dev,
    "I2C block read is unsupported!\n");
   return -VAR_0;
  }
 }

 if (VAR_10 == VAR_5
  || VAR_11 == VAR_4) {
  if (VAR_9->block[0] < 1)
   VAR_9->block[0] = 1;
  if (VAR_9->block[0] > VAR_3)
   VAR_9->block[0] = VAR_3;
 } else {
  VAR_9->block[0] = 32;
 }




 if ((VAR_8->features & VAR_1)
  && VAR_11 != VAR_4
  && FUNC_3(VAR_8) == 0)
  VAR_13 = FUNC_1(VAR_8, VAR_9,
        VAR_10,
        VAR_11, VAR_12);
 else
  VAR_13 = FUNC_2(VAR_8, VAR_9,
            VAR_10,
            VAR_11, VAR_12);

 if (VAR_11 == VAR_4
  && VAR_10 == VAR_5) {

  FUNC_5(VAR_8->pci_dev, VAR_6, VAR_14);
 }
 return VAR_13;
}
