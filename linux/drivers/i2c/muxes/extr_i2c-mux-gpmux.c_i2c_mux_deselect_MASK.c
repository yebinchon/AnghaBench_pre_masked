
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mux {int control; scalar_t__ do_not_deselect; } ;
struct i2c_mux_core {int dummy; } ;


 struct mux* FUNC_0 (struct i2c_mux_core*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct mux *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->do_not_deselect)
  return 0;

 return FUNC_1(VAR_2->control);
}
