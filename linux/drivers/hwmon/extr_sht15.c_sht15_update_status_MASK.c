
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sht15_data {int status_valid; int checksum_ok; int val_status; int read_lock; scalar_t__ last_status; int dev; scalar_t__ checksumming; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sht15_data*) ;
 int FUNC_5 (struct sht15_data*,int*,int) ;
 int FUNC_6 (struct sht15_data*) ;
 int FUNC_7 (struct sht15_data*) ;
 int FUNC_8 (struct sht15_data*,int) ;
 int FUNC_9 (struct sht15_data*,int) ;
 int FUNC_10 (struct sht15_data*) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct sht15_data *VAR_4)
{
 int VAR_5 = 0;
 u8 VAR_6;
 u8 VAR_7;
 u8 VAR_8 = 0;
 u8 VAR_9[2];
 int VAR_10 = VAR_1;

 FUNC_2(&VAR_4->read_lock);
 if (FUNC_11(VAR_3, VAR_4->last_status + VAR_10)
   || !VAR_4->status_valid) {
  VAR_5 = FUNC_8(VAR_4, VAR_2);
  if (VAR_5)
   goto unlock;
  VAR_6 = FUNC_7(VAR_4);

  if (VAR_4->checksumming) {
   FUNC_4(VAR_4);
   VAR_8 = FUNC_0(FUNC_7(VAR_4));
   VAR_9[0] = VAR_2;
   VAR_9[1] = VAR_6;
   VAR_4->checksum_ok = (FUNC_5(VAR_4, VAR_9, 2)
     == VAR_8);
  }

  VAR_5 = FUNC_6(VAR_4);
  if (VAR_5)
   goto unlock;






  if (VAR_4->checksumming && !VAR_4->checksum_ok) {
   VAR_7 = VAR_4->val_status & 0x07;
   VAR_5 = FUNC_10(VAR_4);
   if (VAR_5)
    goto unlock;
   if (VAR_7) {
    VAR_5 = FUNC_9(VAR_4, VAR_7);
    if (VAR_5) {
     FUNC_1(VAR_4->dev,
      "CRC validation failed, unable "
      "to restore device settings\n");
     goto unlock;
    }
   }
   VAR_5 = -VAR_0;
   goto unlock;
  }

  VAR_4->val_status = VAR_6;
  VAR_4->status_valid = 1;
  VAR_4->last_status = VAR_3;
 }

unlock:
 FUNC_3(&VAR_4->read_lock);
 return VAR_5;
}
