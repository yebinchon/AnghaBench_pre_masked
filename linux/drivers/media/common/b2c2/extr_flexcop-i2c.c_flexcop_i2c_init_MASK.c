
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct flexcop_device {TYPE_3__* fc_i2c_adap; int init_state; int dev; int i2c_mutex; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_7__ {TYPE_1__ dev; int * algo_data; int * algo; int name; } ;
struct TYPE_8__ {TYPE_2__ i2c_adap; int port; struct flexcop_device* fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5(struct flexcop_device *VAR_5)
{
 int VAR_6;
 FUNC_3(&VAR_5->i2c_mutex);

 VAR_5->fc_i2c_adap[0].fc = VAR_5;
 VAR_5->fc_i2c_adap[1].fc = VAR_5;
 VAR_5->fc_i2c_adap[2].fc = VAR_5;
 VAR_5->fc_i2c_adap[0].port = VAR_0;
 VAR_5->fc_i2c_adap[1].port = VAR_1;
 VAR_5->fc_i2c_adap[2].port = VAR_2;

 FUNC_4(VAR_5->fc_i2c_adap[0].i2c_adap.name, "B2C2 FlexCop I2C to demod",
  sizeof(VAR_5->fc_i2c_adap[0].i2c_adap.name));
 FUNC_4(VAR_5->fc_i2c_adap[1].i2c_adap.name, "B2C2 FlexCop I2C to eeprom",
  sizeof(VAR_5->fc_i2c_adap[1].i2c_adap.name));
 FUNC_4(VAR_5->fc_i2c_adap[2].i2c_adap.name, "B2C2 FlexCop I2C to tuner",
  sizeof(VAR_5->fc_i2c_adap[2].i2c_adap.name));

 FUNC_2(&VAR_5->fc_i2c_adap[0].i2c_adap, &VAR_5->fc_i2c_adap[0]);
 FUNC_2(&VAR_5->fc_i2c_adap[1].i2c_adap, &VAR_5->fc_i2c_adap[1]);
 FUNC_2(&VAR_5->fc_i2c_adap[2].i2c_adap, &VAR_5->fc_i2c_adap[2]);

 VAR_5->fc_i2c_adap[0].i2c_adap.algo =
  VAR_5->fc_i2c_adap[1].i2c_adap.algo =
  VAR_5->fc_i2c_adap[2].i2c_adap.algo = &VAR_4;
 VAR_5->fc_i2c_adap[0].i2c_adap.algo_data =
  VAR_5->fc_i2c_adap[1].i2c_adap.algo_data =
  VAR_5->fc_i2c_adap[2].i2c_adap.algo_data = ((void*)0);
 VAR_5->fc_i2c_adap[0].i2c_adap.dev.parent =
  VAR_5->fc_i2c_adap[1].i2c_adap.dev.parent =
  VAR_5->fc_i2c_adap[2].i2c_adap.dev.parent = VAR_5->dev;

 VAR_6 = FUNC_0(&VAR_5->fc_i2c_adap[0].i2c_adap);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_0(&VAR_5->fc_i2c_adap[1].i2c_adap);
 if (VAR_6 < 0)
  goto adap_1_failed;

 VAR_6 = FUNC_0(&VAR_5->fc_i2c_adap[2].i2c_adap);
 if (VAR_6 < 0)
  goto adap_2_failed;

 VAR_5->init_state |= VAR_3;
 return 0;

adap_2_failed:
 FUNC_1(&VAR_5->fc_i2c_adap[1].i2c_adap);
adap_1_failed:
 FUNC_1(&VAR_5->fc_i2c_adap[0].i2c_adap);
 return VAR_6;
}
