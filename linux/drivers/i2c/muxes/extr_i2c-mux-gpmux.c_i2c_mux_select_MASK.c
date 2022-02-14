
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mux {int do_not_deselect; int control; } ;
struct i2c_mux_core {int dummy; } ;


 struct mux* FUNC_0 (struct i2c_mux_core*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct mux *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->control, VAR_1);
 VAR_2->do_not_deselect = VAR_3 < 0;

 return VAR_3;
}
