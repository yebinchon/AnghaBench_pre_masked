
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct jz4780_i2c {TYPE_1__ adap; } ;
struct i2c_msg {int flags; int len; int buf; int addr; } ;
struct i2c_adapter {struct jz4780_i2c* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct jz4780_i2c*) ;
 int FUNC_2 (struct jz4780_i2c*) ;
 int FUNC_3 (struct jz4780_i2c*,int ) ;
 int FUNC_4 (struct jz4780_i2c*,int ) ;
 int FUNC_5 (struct jz4780_i2c*,int ,int ,int,int) ;
 int FUNC_6 (struct jz4780_i2c*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_3, struct i2c_msg *VAR_4,
      int VAR_5)
{
 int VAR_6 = -VAR_0;
 int VAR_7 = 0;
 struct jz4780_i2c *VAR_8 = VAR_3->algo_data;

 VAR_7 = FUNC_2(VAR_8);
 if (VAR_7) {
  FUNC_0(&VAR_8->adap.dev, "I2C prepare failed\n");
  goto out;
 }

 if (VAR_4->addr != FUNC_3(VAR_8, VAR_2)) {
  VAR_7 = FUNC_4(VAR_8, VAR_4->addr);
  if (VAR_7)
   goto out;
 }
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_4++) {
  if (VAR_4->flags & VAR_1)
   VAR_7 = FUNC_5(VAR_8, VAR_4->buf, VAR_4->len,
         VAR_5, VAR_6);
  else
   VAR_7 = FUNC_6(VAR_8, VAR_4->buf, VAR_4->len,
          VAR_5, VAR_6);

  if (VAR_7)
   goto out;
 }

 VAR_7 = VAR_6;

out:
 FUNC_1(VAR_8);
 return VAR_7;
}
