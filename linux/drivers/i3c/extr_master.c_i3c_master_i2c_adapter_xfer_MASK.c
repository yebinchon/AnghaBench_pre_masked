
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i3c_master_controller {int bus; TYPE_1__* ops; } ;
struct i2c_msg {scalar_t__ addr; } ;
struct i2c_dev_desc {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int (* i2c_xfers ) (struct i2c_dev_desc*,struct i2c_msg*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i3c_master_controller* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct i2c_dev_desc* FUNC_3 (struct i3c_master_controller*,scalar_t__) ;
 int FUNC_4 (struct i2c_dev_desc*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_3,
           struct i2c_msg *VAR_4, int VAR_5)
{
 struct i3c_master_controller *VAR_6 = FUNC_0(VAR_3);
 struct i2c_dev_desc *VAR_7;
 int VAR_8, VAR_9;
 u16 VAR_10;

 if (!VAR_4 || !VAR_6 || VAR_5 <= 0)
  return -VAR_0;

 if (!VAR_6->ops->i2c_xfers)
  return -VAR_2;


 VAR_10 = VAR_4[0].addr;
 for (VAR_8 = 1; VAR_8 < VAR_5; VAR_8++) {
  if (VAR_10 != VAR_4[VAR_8].addr)
   return -VAR_2;
 }

 FUNC_1(&VAR_6->bus);
 VAR_7 = FUNC_3(VAR_6, VAR_10);
 if (!VAR_7)
  VAR_9 = -VAR_1;
 else
  VAR_9 = VAR_6->ops->i2c_xfers(VAR_7, VAR_4, VAR_5);
 FUNC_2(&VAR_6->bus);

 return VAR_9 ? VAR_9 : VAR_5;
}
