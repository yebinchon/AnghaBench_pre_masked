
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_6__ {struct dvb_pll_config* platform_data; } ;
struct i2c_client {TYPE_3__ dev; int adapter; int addr; } ;
struct dvb_pll_config {struct dvb_frontend* fe; } ;
struct TYPE_4__ {int * release; } ;
struct TYPE_5__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (struct dvb_frontend*,int ,int ,unsigned int) ;
 int FUNC_2 (struct i2c_client*,struct dvb_frontend*) ;

__attribute__((used)) static int
FUNC_3(struct i2c_client *VAR_1, const struct i2c_device_id *VAR_2)
{
 struct dvb_pll_config *VAR_3;
 struct dvb_frontend *VAR_4;
 unsigned int VAR_5;

 VAR_3 = VAR_1->dev.platform_data;
 VAR_4 = VAR_3->fe;
 FUNC_2(VAR_1, VAR_4);
 VAR_5 = (unsigned int) VAR_2->driver_data;

 if (!FUNC_1(VAR_4, VAR_1->addr, VAR_1->adapter, VAR_5))
  return -VAR_0;
 VAR_4->ops.tuner_ops.release = ((void*)0);
 FUNC_0(&VAR_1->dev, "DVB Simple Tuner attached.\n");
 return 0;
}
