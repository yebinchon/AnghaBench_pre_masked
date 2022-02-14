
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_sdvo {TYPE_2__* i2c; int ddc_bus; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {struct intel_sdvo* algo_data; } ;
struct TYPE_4__ {TYPE_1__* algo; } ;
struct TYPE_3__ {int (* master_xfer ) (TYPE_2__*,struct i2c_msg*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct intel_sdvo*,int ) ;
 int FUNC_1 (TYPE_2__*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_1,
         struct i2c_msg *VAR_2,
         int VAR_3)
{
 struct intel_sdvo *VAR_4 = VAR_1->algo_data;

 if (!FUNC_0(VAR_4, VAR_4->ddc_bus))
  return -VAR_0;

 return VAR_4->i2c->algo->master_xfer(VAR_4->i2c, VAR_2, VAR_3);
}
