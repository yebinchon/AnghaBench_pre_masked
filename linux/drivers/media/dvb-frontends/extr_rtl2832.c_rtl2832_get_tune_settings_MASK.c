
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl2832_dev {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend_tune_settings {int min_delay_ms; int step_size; int max_drift; } ;
struct TYPE_3__ {int frequency_stepsize_hz; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct dvb_frontend {TYPE_2__ ops; struct rtl2832_dev* demodulator_priv; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
 struct dvb_frontend_tune_settings *VAR_1)
{
 struct rtl2832_dev *VAR_2 = VAR_0->demodulator_priv;
 struct i2c_client *VAR_3 = VAR_2->client;

 FUNC_0(&VAR_3->dev, "\n");
 VAR_1->min_delay_ms = 1000;
 VAR_1->step_size = VAR_0->ops.info.frequency_stepsize_hz * 2;
 VAR_1->max_drift = (VAR_0->ops.info.frequency_stepsize_hz * 2) + 1;
 return 0;
}
