
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union i2c_smbus_data {int byte; int word; int * block; } ;
typedef int u8 ;
struct ismt_priv {TYPE_1__* pci_dev; int * buffer; } ;
struct ismt_desc {int status; int rxbytes; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct ismt_desc const*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct ismt_priv*) ;
 int FUNC_4 (struct ismt_priv*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,int*,int ) ;

__attribute__((used)) static int FUNC_7(const struct ismt_desc *VAR_15,
        union i2c_smbus_data *VAR_16,
        struct ismt_priv *VAR_17, int VAR_18,
        char VAR_19)
{
 u8 *VAR_20 = FUNC_0(&VAR_17->buffer[0], 16);

 FUNC_2(&VAR_17->pci_dev->dev, "Processing completed descriptor\n");
 FUNC_1(&VAR_17->pci_dev->dev, VAR_15);
 FUNC_3(VAR_17);
 FUNC_4(VAR_17);

 if (VAR_15->status & VAR_14) {
  if (VAR_19 == VAR_7 &&
      VAR_18 != 129)
   return 0;

  switch (VAR_18) {
  case 132:
  case 131:
   VAR_16->byte = VAR_20[0];
   break;
  case 128:
  case 129:
   VAR_16->word = VAR_20[0] | (VAR_20[1] << 8);
   break;
  case 133:
   if (VAR_15->rxbytes != VAR_20[0] + 1)
    return -VAR_3;

   FUNC_6(VAR_16->block, VAR_20, VAR_15->rxbytes);
   break;
  case 130:
   FUNC_6(&VAR_16->block[1], VAR_20, VAR_15->rxbytes);
   VAR_16->block[0] = VAR_15->rxbytes;
   break;
  }
  return 0;
 }

 if (FUNC_5(VAR_15->status & VAR_13))
  return -VAR_4;

 if (VAR_15->status & VAR_10)
  return -VAR_1;

 if (VAR_15->status & VAR_9)
  return -VAR_0;

 if (VAR_15->status & VAR_12)
  return -VAR_5;

 if (VAR_15->status & (VAR_11 | VAR_8))
  return -VAR_6;

 return -VAR_2;
}
