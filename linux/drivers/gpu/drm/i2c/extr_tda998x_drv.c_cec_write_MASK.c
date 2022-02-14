
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tda998x_priv {TYPE_1__* hdmi; int cec_addr; } ;
struct i2c_msg {int len; int * buf; int addr; } ;
struct TYPE_2__ {int dev; int adapter; } ;


 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static void
FUNC_2(struct tda998x_priv *VAR_0, u16 VAR_1, u8 VAR_2)
{
 u8 VAR_3[] = {VAR_1, VAR_2};
 struct i2c_msg VAR_4 = {
  .addr = VAR_0->cec_addr,
  .len = 2,
  .buf = VAR_3,
 };
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0->hdmi->adapter, &VAR_4, 1);
 if (VAR_5 < 0)
  FUNC_0(&VAR_0->hdmi->dev, "Error %d writing to cec:0x%x\n",
   VAR_5, VAR_1);
}
