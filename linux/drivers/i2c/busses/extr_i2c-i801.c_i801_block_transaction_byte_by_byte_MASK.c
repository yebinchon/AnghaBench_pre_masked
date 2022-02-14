
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union i2c_smbus_data {int* block; } ;
struct i2c_adapter {int timeout; } ;
struct i801_priv {int features; int is_read; int cmd; int len; int* data; int status; TYPE_1__* pci_dev; int waitq; scalar_t__ count; struct i2c_adapter adapter; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct i801_priv*) ;
 int FUNC_1 (struct i801_priv*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct i801_priv*) ;
 int FUNC_3 (struct i801_priv*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct i801_priv*,int) ;
 int FUNC_7 (struct i801_priv*) ;
 int FUNC_8 (struct i801_priv*) ;
 int FUNC_9 (struct i801_priv*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int,int ) ;

__attribute__((used)) static int FUNC_14(struct i801_priv *VAR_17,
            union i2c_smbus_data *VAR_18,
            char VAR_19, int VAR_20,
            int VAR_21)
{
 int VAR_22, VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 const struct i2c_adapter *VAR_27 = &VAR_17->adapter;

 if (VAR_20 == VAR_5)
  return -VAR_0;

 VAR_26 = FUNC_7(VAR_17);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_23 = VAR_18->block[0];

 if (VAR_19 == VAR_8) {
  FUNC_12(VAR_23, FUNC_2(VAR_17));
  FUNC_12(VAR_18->block[1], FUNC_0(VAR_17));
 }

 if (VAR_20 == VAR_6 &&
     VAR_19 == VAR_7)
  VAR_24 = VAR_10;
 else
  VAR_24 = VAR_9;

 if (VAR_17->features & VAR_3) {
  VAR_17->is_read = (VAR_19 == VAR_7);
  if (VAR_23 == 1 && VAR_17->is_read)
   VAR_24 |= VAR_12;
  VAR_17->cmd = VAR_24 | VAR_11;
  VAR_17->len = VAR_23;
  VAR_17->count = 0;
  VAR_17->data = &VAR_18->block[1];

  FUNC_12(VAR_17->cmd | VAR_13, FUNC_1(VAR_17));
  VAR_26 = FUNC_13(VAR_17->waitq,
         (VAR_25 = VAR_17->status),
         VAR_27->timeout);
  if (!VAR_26) {
   VAR_25 = -VAR_2;
   FUNC_5(&VAR_17->pci_dev->dev,
     "Timeout waiting for interrupt!\n");
  }
  VAR_17->status = 0;
  return FUNC_6(VAR_17, VAR_25);
 }

 for (VAR_22 = 1; VAR_22 <= VAR_23; VAR_22++) {
  if (VAR_22 == VAR_23 && VAR_19 == VAR_7)
   VAR_24 |= VAR_12;
  FUNC_12(VAR_24, FUNC_1(VAR_17));

  if (VAR_22 == 1)
   FUNC_12(FUNC_10(FUNC_1(VAR_17)) | VAR_13,
          FUNC_1(VAR_17));

  VAR_25 = FUNC_8(VAR_17);
  if (VAR_25)
   goto exit;

  if (VAR_22 == 1 && VAR_19 == VAR_7
   && VAR_20 != VAR_6) {
   VAR_23 = FUNC_11(FUNC_2(VAR_17));
   if (VAR_23 < 1 || VAR_23 > VAR_4) {
    FUNC_4(&VAR_17->pci_dev->dev,
     "Illegal SMBus block read size %d\n",
     VAR_23);

    while (FUNC_11(FUNC_3(VAR_17)) &
           VAR_15)
     FUNC_12(VAR_14,
            FUNC_3(VAR_17));
    FUNC_12(VAR_16, FUNC_3(VAR_17));
    return -VAR_1;
   }
   VAR_18->block[0] = VAR_23;
  }


  if (VAR_19 == VAR_7)
   VAR_18->block[VAR_22] = FUNC_11(FUNC_0(VAR_17));
  if (VAR_19 == VAR_8 && VAR_22+1 <= VAR_23)
   FUNC_12(VAR_18->block[VAR_22+1], FUNC_0(VAR_17));


  FUNC_12(VAR_14, FUNC_3(VAR_17));
 }

 VAR_25 = FUNC_9(VAR_17);
exit:
 return FUNC_6(VAR_17, VAR_25);
}
