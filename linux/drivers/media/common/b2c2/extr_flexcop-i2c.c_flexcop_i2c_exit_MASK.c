
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flexcop_device {int init_state; TYPE_1__* fc_i2c_adap; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct flexcop_device *VAR_1)
{
 if (VAR_1->init_state & VAR_0) {
  FUNC_0(&VAR_1->fc_i2c_adap[2].i2c_adap);
  FUNC_0(&VAR_1->fc_i2c_adap[1].i2c_adap);
  FUNC_0(&VAR_1->fc_i2c_adap[0].i2c_adap);
 }
 VAR_1->init_state &= ~VAR_0;
}
