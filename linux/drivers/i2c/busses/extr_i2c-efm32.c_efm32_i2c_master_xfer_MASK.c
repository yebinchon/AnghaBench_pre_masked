
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct efm32_i2c_ddata {int num_msgs; int current_msg; int retval; int done; TYPE_1__ adapter; scalar_t__ current_word; struct i2c_msg* msgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct efm32_i2c_ddata*,int ) ;
 int FUNC_2 (struct efm32_i2c_ddata*) ;
 struct efm32_i2c_ddata* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_4,
  struct i2c_msg *VAR_5, int VAR_6)
{
 struct efm32_i2c_ddata *VAR_7 = FUNC_3(VAR_4);
 int VAR_8;

 if (VAR_7->msgs)
  return -VAR_0;

 VAR_7->msgs = VAR_5;
 VAR_7->num_msgs = VAR_6;
 VAR_7->current_word = 0;
 VAR_7->current_msg = 0;
 VAR_7->retval = -VAR_1;

 FUNC_4(&VAR_7->done);

 FUNC_0(&VAR_7->adapter.dev, "state: %08x, status: %08x\n",
   FUNC_1(VAR_7, VAR_2),
   FUNC_1(VAR_7, VAR_3));

 FUNC_2(VAR_7);

 FUNC_5(&VAR_7->done);

 if (VAR_7->current_msg >= VAR_7->num_msgs)
  VAR_8 = VAR_7->num_msgs;
 else
  VAR_8 = VAR_7->retval;

 return VAR_8;
}
