
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sht15_data {scalar_t__ state; int val_status; int dev; int checksum_ok; scalar_t__ checksumming; int data; int wait_queue; int read_work; int interrupt_handled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sht15_data*) ;
 int FUNC_11 (struct sht15_data*,int) ;
 int FUNC_12 (struct sht15_data*,int) ;
 int FUNC_13 (struct sht15_data*) ;
 int FUNC_14 (int ,int,int ) ;

__attribute__((used)) static int FUNC_15(struct sht15_data *VAR_4,
        int VAR_5,
        int VAR_6)
{
 int VAR_7;
 u8 VAR_8;

 VAR_7 = FUNC_11(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_4->data);
 if (VAR_7)
  return VAR_7;
 FUNC_1(&VAR_4->interrupt_handled, 0);

 FUNC_4(FUNC_7(VAR_4->data));
 if (FUNC_6(VAR_4->data) == 0) {
  FUNC_3(FUNC_7(VAR_4->data));

  if (!FUNC_0(&VAR_4->interrupt_handled))
   FUNC_9(&VAR_4->read_work);
 }
 VAR_7 = FUNC_14(VAR_4->wait_queue,
     (VAR_4->state == VAR_3),
     FUNC_8(VAR_6));
 if (VAR_4->state != VAR_3) {
  VAR_4->state = VAR_3;
  return -VAR_1;
 } else if (VAR_7 == 0) {
  FUNC_3(FUNC_7(VAR_4->data));
  VAR_7 = FUNC_10(VAR_4);
  if (VAR_7)
   return VAR_7;
  return -VAR_2;
 }






 if (VAR_4->checksumming && !VAR_4->checksum_ok) {
  VAR_8 = VAR_4->val_status & 0x07;
  VAR_7 = FUNC_13(VAR_4);
  if (VAR_7)
   return VAR_7;
  if (VAR_8) {
   VAR_7 = FUNC_12(VAR_4, VAR_8);
   if (VAR_7) {
    FUNC_2(VAR_4->dev,
     "CRC validation failed, unable "
     "to restore device settings\n");
    return VAR_7;
   }
  }
  return -VAR_0;
 }

 return 0;
}
