
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {int dummy; } ;
struct mn88472_dev {struct dvb_frontend fe; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct mn88472_dev* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static struct dvb_frontend *FUNC_2(struct i2c_client *VAR_0)
{
 struct mn88472_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");

 return &VAR_1->fe;
}
