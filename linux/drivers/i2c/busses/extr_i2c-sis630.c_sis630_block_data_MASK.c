
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int* block; } ;
typedef int u8 ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_adapter*,int ,int *) ;
 int FUNC_4 (struct i2c_adapter*,int ) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_6,
        union i2c_smbus_data *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = 0, VAR_11 = 0;
 u8 VAR_12 = 0;

 if (VAR_8 == VAR_1) {
  VAR_10 = VAR_7->block[0];
  if (VAR_10 < 0)
   VAR_10 = 0;
  else if (VAR_10 > 32)
   VAR_10 = 32;
  FUNC_5(VAR_4, VAR_10);
  for (VAR_9 = 1; VAR_9 <= VAR_10; VAR_9++) {
   FUNC_0(&VAR_6->dev,
    "set data 0x%02x\n", VAR_7->block[VAR_9]);

   FUNC_5(VAR_3 + (VAR_9 - 1) % 8, VAR_7->block[VAR_9]);
   if (VAR_9 == 8 || (VAR_10 < 8 && VAR_9 == VAR_10)) {
    FUNC_0(&VAR_6->dev,
     "start trans len=%d i=%d\n", VAR_10, VAR_9);

    VAR_11 = FUNC_3(VAR_6,
      VAR_2, &VAR_12);
    if (VAR_11)
     return VAR_11;
   } else if ((VAR_9 - 1) % 8 == 7 || VAR_9 == VAR_10) {
    FUNC_0(&VAR_6->dev,
     "trans_wait len=%d i=%d\n", VAR_10, VAR_9);
    if (VAR_9 > 8) {
     FUNC_0(&VAR_6->dev,
      "clear smbary_sts"
      " len=%d i=%d\n", VAR_10, VAR_9);





     FUNC_5(VAR_5, VAR_0);
    }
    VAR_11 = FUNC_4(VAR_6,
      VAR_2);
    if (VAR_11) {
     FUNC_0(&VAR_6->dev,
      "trans_wait failed\n");
     break;
    }
   }
  }
 } else {

  VAR_7->block[0] = VAR_10 = 0;
  VAR_11 = FUNC_3(VAR_6,
    VAR_2, &VAR_12);
  if (VAR_11)
   return VAR_11;
  do {
   VAR_11 = FUNC_4(VAR_6, VAR_2);
   if (VAR_11) {
    FUNC_0(&VAR_6->dev, "trans_wait failed\n");
    break;
   }

   if (VAR_10 == 0)
    VAR_7->block[0] = FUNC_1(VAR_4);


   if (VAR_7->block[0] > 32)
    VAR_7->block[0] = 32;

   FUNC_0(&VAR_6->dev,
    "block data read len=0x%x\n", VAR_7->block[0]);

   for (VAR_9 = 0; VAR_9 < 8 && VAR_10 < VAR_7->block[0]; VAR_9++, VAR_10++) {
    FUNC_0(&VAR_6->dev,
     "read i=%d len=%d\n", VAR_9, VAR_10);
    VAR_7->block[VAR_10 + 1] = FUNC_1(VAR_3 +
           VAR_9);
   }

   FUNC_0(&VAR_6->dev,
    "clear smbary_sts len=%d i=%d\n", VAR_10, VAR_9);


   FUNC_5(VAR_5, VAR_0);
  } while (VAR_10 < VAR_7->block[0]);
 }

 FUNC_2(VAR_6, VAR_12);

 return VAR_11;
}
