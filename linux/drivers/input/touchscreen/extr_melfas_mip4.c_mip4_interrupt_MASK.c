
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct mip4_ts {int* buf; int input; scalar_t__ event_size; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
typedef int irqreturn_t ;
typedef int cmd ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mip4_ts*,int*) ;
 int FUNC_5 (struct mip4_ts*,unsigned int*,int,int*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct mip4_ts *VAR_6 = VAR_5;
 struct i2c_client *VAR_7 = VAR_6->client;
 unsigned int VAR_8;
 int VAR_9;
 u8 VAR_10[2];
 u8 VAR_11;
 bool VAR_12;


 VAR_10[0] = VAR_1;
 VAR_10[1] = VAR_3;
 VAR_9 = FUNC_5(VAR_6, VAR_10, sizeof(VAR_10), VAR_6->buf, 1);
 if (VAR_9) {
  FUNC_2(&VAR_7->dev,
   "Failed to read packet info: %d\n", VAR_9);
  goto out;
 }

 VAR_11 = VAR_6->buf[0] & 0x7F;
 VAR_12 = VAR_6->buf[0] & FUNC_0(7);
 FUNC_1(&VAR_7->dev, "packet size: %d, alert: %d\n", VAR_11, VAR_12);


 if (!VAR_11) {
  FUNC_2(&VAR_7->dev, "Empty packet\n");
  goto out;
 }


 VAR_10[0] = VAR_1;
 VAR_10[1] = VAR_2;
 VAR_9 = FUNC_5(VAR_6, VAR_10, sizeof(VAR_10), VAR_6->buf, VAR_11);
 if (VAR_9) {
  FUNC_2(&VAR_7->dev,
   "Failed to read packet data: %d\n", VAR_9);
  goto out;
 }

 if (VAR_12) {
  FUNC_1(&VAR_7->dev, "Alert: %d\n", VAR_6->buf[0]);
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8 += VAR_6->event_size) {
   VAR_9 = FUNC_4(VAR_6, &VAR_6->buf[VAR_8]);
   if (VAR_9)
    break;
  }

  FUNC_3(VAR_6->input);
 }

out:
 return VAR_0;
}
