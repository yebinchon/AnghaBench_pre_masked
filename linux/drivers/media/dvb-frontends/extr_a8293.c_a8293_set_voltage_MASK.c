
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct a8293_dev* sec_priv; } ;
struct a8293_dev {void** reg; struct i2c_client* client; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;


 int VAR_0 ;



 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,void**,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1,
        enum fe_sec_voltage VAR_2)
{
 struct a8293_dev *VAR_3 = VAR_1->sec_priv;
 struct i2c_client *VAR_4 = VAR_3->client;
 int VAR_5;
 u8 VAR_6, VAR_7;

 FUNC_0(&VAR_4->dev, "fe_sec_voltage=%d\n", VAR_2);

 switch (VAR_2) {
 case 128:

  VAR_6 = 0x10;
  break;
 case 130:

  VAR_6 = 0x31;
  break;
 case 129:

  VAR_6 = 0x38;
  break;
 default:
  VAR_5 = -VAR_0;
  goto err;
 }
 if (VAR_6 != VAR_3->reg[0]) {
  VAR_5 = FUNC_1(VAR_4, &VAR_6, 1);
  if (VAR_5 < 0)
   goto err;
  VAR_3->reg[0] = VAR_6;
 }


 VAR_7 = 0x82;
 if (VAR_7 != VAR_3->reg[1]) {
  VAR_5 = FUNC_1(VAR_4, &VAR_7, 1);
  if (VAR_5 < 0)
   goto err;
  VAR_3->reg[1] = VAR_7;
 }

 FUNC_2(1500, 50000);
 return 0;
err:
 FUNC_0(&VAR_4->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
