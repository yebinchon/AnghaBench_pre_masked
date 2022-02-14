
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_mux_priv {TYPE_1__* muxc; } ;
struct i2c_adapter {int mux_lock; struct i2c_mux_priv* algo_data; } ;
struct TYPE_2__ {struct i2c_adapter* parent; } ;


 int FUNC_0 (struct i2c_adapter*,unsigned int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct i2c_adapter *VAR_0,
      unsigned int VAR_1)
{
 struct i2c_mux_priv *VAR_2 = VAR_0->algo_data;
 struct i2c_adapter *VAR_3 = VAR_2->muxc->parent;

 FUNC_0(VAR_3, VAR_1);
 FUNC_1(&VAR_3->mux_lock);
}
