
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_sdvo {TYPE_2__* i2c; } ;
struct i2c_adapter {struct intel_sdvo* algo_data; } ;
struct TYPE_4__ {TYPE_1__* lock_ops; } ;
struct TYPE_3__ {int (* unlock_bus ) (TYPE_2__*,unsigned int) ;} ;


 int FUNC_0 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct i2c_adapter *VAR_0,
        unsigned int VAR_1)
{
 struct intel_sdvo *VAR_2 = VAR_0->algo_data;
 VAR_2->i2c->lock_ops->unlock_bus(VAR_2->i2c, VAR_1);
}
