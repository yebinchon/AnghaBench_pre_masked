
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct rtl2832_dev {TYPE_1__* pdata; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct rtl2832_dev* demodulator_priv; } ;
struct TYPE_2__ {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct rtl2832_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2, u32 VAR_3)
{
 struct rtl2832_dev *VAR_4 = VAR_2->demodulator_priv;
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6;
 u64 VAR_7;
 u8 VAR_8 = (VAR_3 == 0 ? 0x1 : 0x0);





 VAR_7 = VAR_3 % VAR_4->pdata->clk;
 VAR_7 *= 0x400000;
 VAR_7 = FUNC_1(VAR_7, VAR_4->pdata->clk);
 VAR_7 = -VAR_7;
 VAR_7 = VAR_7 & 0x3fffff;
 FUNC_0(&VAR_5->dev, "if_frequency=%d pset_iffreq=%08x\n",
  VAR_3, (unsigned)VAR_7);

 VAR_6 = FUNC_2(VAR_4, VAR_0, VAR_8);
 if (VAR_6)
  goto err;

 VAR_6 = FUNC_2(VAR_4, VAR_1, VAR_7);
 if (VAR_6)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_5->dev, "failed=%d\n", VAR_6);
 return VAR_6;
}
