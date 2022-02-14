
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int flags; int addr; int adapter; } ;
struct at91_twi_dev {int dev; int smr; struct i2c_client* slave; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct at91_twi_dev*) ;
 int FUNC_2 (struct at91_twi_dev*,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 struct at91_twi_dev* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_5)
{
 struct at91_twi_dev *VAR_6 = FUNC_4(VAR_5->adapter);

 if (VAR_6->slave)
  return -VAR_3;

 if (VAR_5->flags & VAR_4)
  return -VAR_2;


 FUNC_5(VAR_6->dev);

 VAR_6->slave = VAR_5;
 VAR_6->smr = FUNC_0(VAR_5->addr);

 FUNC_1(VAR_6);
 FUNC_2(VAR_6, VAR_0, VAR_1);

 FUNC_3(VAR_6->dev, "entered slave mode (ADR=%d)\n", VAR_5->addr);

 return 0;
}
