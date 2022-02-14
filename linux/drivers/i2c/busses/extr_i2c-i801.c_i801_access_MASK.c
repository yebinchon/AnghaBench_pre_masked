
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union i2c_smbus_data {int byte; int word; } ;
typedef int u8 ;
typedef int u16 ;
struct i801_priv {int features; int original_hstcfg; int acpi_lock; TYPE_1__* pci_dev; scalar_t__ acpi_reserved; } ;
struct i2c_adapter {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;






 char VAR_4 ;

 char VAR_5 ;


 int VAR_6 ;

 int FUNC_0 (struct i801_priv*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct i801_priv*) ;
 int VAR_9 ;
 int FUNC_2 (struct i801_priv*) ;
 int FUNC_3 (struct i801_priv*) ;
 int FUNC_4 (struct i801_priv*) ;
 int FUNC_5 (int *,char*,int) ;
 struct i801_priv* FUNC_6 (struct i2c_adapter*) ;
 int FUNC_7 (struct i801_priv*,union i2c_smbus_data*,char,int,int) ;
 int FUNC_8 (struct i801_priv*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static s32 FUNC_16(struct i2c_adapter *VAR_10, u16 VAR_11,
         unsigned short VAR_12, char VAR_13, u8 VAR_14,
         int VAR_15, union i2c_smbus_data *VAR_16)
{
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19 = 0, VAR_20 = 0;
 struct i801_priv *VAR_21 = FUNC_6(VAR_10);

 FUNC_10(&VAR_21->acpi_lock);
 if (VAR_21->acpi_reserved) {
  FUNC_11(&VAR_21->acpi_lock);
  return -VAR_0;
 }

 FUNC_13(&VAR_21->pci_dev->dev);

 VAR_17 = (VAR_21->features & VAR_2) && (VAR_12 & VAR_3)
  && VAR_15 != 132
  && VAR_15 != 133;

 switch (VAR_15) {
 case 132:
  FUNC_12(((VAR_11 & 0x7f) << 1) | (VAR_13 & 0x01),
         FUNC_1(VAR_21));
  VAR_20 = VAR_6;
  break;
 case 135:
  FUNC_12(((VAR_11 & 0x7f) << 1) | (VAR_13 & 0x01),
         FUNC_1(VAR_21));
  if (VAR_13 == VAR_5)
   FUNC_12(VAR_14, FUNC_2(VAR_21));
  VAR_20 = 130;
  break;
 case 134:
  FUNC_12(((VAR_11 & 0x7f) << 1) | (VAR_13 & 0x01),
         FUNC_1(VAR_21));
  FUNC_12(VAR_14, FUNC_2(VAR_21));
  if (VAR_13 == VAR_5)
   FUNC_12(VAR_16->byte, FUNC_3(VAR_21));
  VAR_20 = 129;
  break;
 case 131:
  FUNC_12(((VAR_11 & 0x7f) << 1) | (VAR_13 & 0x01),
         FUNC_1(VAR_21));
  FUNC_12(VAR_14, FUNC_2(VAR_21));
  if (VAR_13 == VAR_5) {
   FUNC_12(VAR_16->word & 0xff, FUNC_3(VAR_21));
   FUNC_12((VAR_16->word & 0xff00) >> 8, FUNC_4(VAR_21));
  }
  VAR_20 = 128;
  break;
 case 137:
  FUNC_12(((VAR_11 & 0x7f) << 1) | (VAR_13 & 0x01),
         FUNC_1(VAR_21));
  FUNC_12(VAR_14, FUNC_2(VAR_21));
  VAR_18 = 1;
  break;
 case 133:






  FUNC_12(((VAR_11 & 0x7f) << 1) |
         ((VAR_21->original_hstcfg & VAR_9) ?
   (VAR_13 & 0x01) : 0),
         FUNC_1(VAR_21));
  if (VAR_13 == VAR_4) {


   FUNC_12(VAR_14, FUNC_4(VAR_21));
  } else
   FUNC_12(VAR_14, FUNC_2(VAR_21));
  VAR_18 = 1;
  break;
 case 136:




  FUNC_12((VAR_11 & 0x7f) << 1, FUNC_1(VAR_21));
  FUNC_12(VAR_14, FUNC_2(VAR_21));
  VAR_18 = 1;
  break;
 default:
  FUNC_5(&VAR_21->pci_dev->dev, "Unsupported transaction %d\n",
   VAR_15);
  VAR_19 = -VAR_1;
  goto out;
 }

 if (VAR_17)
  FUNC_12(FUNC_9(FUNC_0(VAR_21)) | VAR_7, FUNC_0(VAR_21));
 else
  FUNC_12(FUNC_9(FUNC_0(VAR_21)) & (~VAR_7),
         FUNC_0(VAR_21));

 if (VAR_18)
  VAR_19 = FUNC_7(VAR_21, VAR_16, VAR_13, VAR_15,
          VAR_17);
 else
  VAR_19 = FUNC_8(VAR_21, VAR_20);




 if (VAR_17 || VAR_18)
  FUNC_12(FUNC_9(FUNC_0(VAR_21)) &
         ~(VAR_7 | VAR_8), FUNC_0(VAR_21));

 if (VAR_18)
  goto out;
 if (VAR_19)
  goto out;
 if ((VAR_13 == VAR_5) || (VAR_20 == VAR_6))
  goto out;

 switch (VAR_20 & 0x7f) {
 case 130:
 case 129:
  VAR_16->byte = FUNC_9(FUNC_3(VAR_21));
  break;
 case 128:
  VAR_16->word = FUNC_9(FUNC_3(VAR_21)) +
        (FUNC_9(FUNC_4(VAR_21)) << 8);
  break;
 }

out:
 FUNC_14(&VAR_21->pci_dev->dev);
 FUNC_15(&VAR_21->pci_dev->dev);
 FUNC_11(&VAR_21->acpi_lock);
 return VAR_19;
}
