
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tda998x_priv {TYPE_1__* hdmi; int cec_addr; } ;
struct i2c_msg {int len; scalar_t__* buf; int flags; int addr; } ;
struct TYPE_2__ {int dev; int adapter; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int,scalar_t__) ;
 int FUNC_2 (int ,struct i2c_msg*,int ) ;

__attribute__((used)) static u8
FUNC_3(struct tda998x_priv *VAR_1, u8 VAR_2)
{
 u8 VAR_3;
 struct i2c_msg VAR_4[2] = {
  {
   .addr = VAR_1->cec_addr,
   .len = 1,
   .buf = &VAR_2,
  }, {
   .addr = VAR_1->cec_addr,
   .flags = VAR_0,
   .len = 1,
   .buf = &VAR_3,
  },
 };
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1->hdmi->adapter, VAR_4, FUNC_0(VAR_4));
 if (VAR_5 < 0) {
  FUNC_1(&VAR_1->hdmi->dev, "Error %d reading from cec:0x%x\n",
   VAR_5, VAR_2);
  VAR_3 = 0;
 }

 return VAR_3;
}
