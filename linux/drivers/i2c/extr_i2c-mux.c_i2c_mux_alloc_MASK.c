
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_mux_core {int mux_locked; int arbitrator; int gate; int (* select ) (struct i2c_mux_core*,int) ;int (* deselect ) (struct i2c_mux_core*,int) ;int max_adapters; struct device* dev; struct i2c_adapter* parent; int * adapter; int * priv; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct i2c_mux_core* FUNC_0 (struct device*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct i2c_mux_core*,int ,int) ;

struct i2c_mux_core *FUNC_2(struct i2c_adapter *VAR_5,
       struct device *VAR_6, int VAR_7,
       int VAR_8, u32 VAR_9,
       int (*VAR_10)(struct i2c_mux_core *, u32),
       int (*VAR_11)(struct i2c_mux_core *, u32))
{
 struct i2c_mux_core *VAR_12;

 VAR_12 = FUNC_0(VAR_6, FUNC_1(VAR_12, VAR_4, VAR_7)
       + VAR_8, VAR_0);
 if (!VAR_12)
  return ((void*)0);
 if (VAR_8)
  VAR_12->priv = &VAR_12->adapter[VAR_7];

 VAR_12->parent = VAR_5;
 VAR_12->dev = VAR_6;
 if (VAR_9 & VAR_3)
  VAR_12->mux_locked = 1;
 if (VAR_9 & VAR_1)
  VAR_12->arbitrator = 1;
 if (VAR_9 & VAR_2)
  VAR_12->gate = 1;
 VAR_12->select = VAR_10;
 VAR_12->deselect = VAR_11;
 VAR_12->max_adapters = VAR_7;

 return VAR_12;
}
