
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
struct hih6130 {int valid; int lock; scalar_t__ last_update; int temperature; int humidity; int write_length; struct i2c_client* client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct hih6130* FUNC_1 (struct device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct i2c_client*,unsigned char*,int ) ;
 int FUNC_5 (int ,struct i2c_msg*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_4)
{
 struct hih6130 *VAR_5 = FUNC_1(VAR_4);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7 = 0;
 int VAR_8;
 unsigned char VAR_9[4];
 struct i2c_msg VAR_10[1] = {
  {
   .addr = VAR_6->addr,
   .flags = VAR_2,
   .len = 4,
   .buf = VAR_9,
  }
 };

 FUNC_7(&VAR_5->lock);
 if (FUNC_9(VAR_3, VAR_5->last_update + VAR_1) || !VAR_5->valid) {
  VAR_9[0] = 0;
  VAR_7 = FUNC_4(VAR_6, VAR_9, VAR_5->write_length);
  if (VAR_7 < 0)
   goto out;


  FUNC_6(40);

  VAR_7 = FUNC_5(VAR_6->adapter, VAR_10, 1);
  if (VAR_7 < 0)
   goto out;

  if ((VAR_9[0] & 0xC0) != 0) {
   FUNC_0(&VAR_6->dev, "Error while reading measurement result\n");
   VAR_7 = -VAR_0;
   goto out;
  }

  VAR_8 = (VAR_9[0] << 8) + VAR_9[1];
  VAR_5->humidity = FUNC_2(VAR_8);

  VAR_8 = (VAR_9[2] << 8) + VAR_9[3];
  VAR_5->temperature = FUNC_3(VAR_8);

  VAR_5->last_update = VAR_3;
  VAR_5->valid = 1;
 }
out:
 FUNC_8(&VAR_5->lock);

 return VAR_7 >= 0 ? 0 : VAR_7;
}
