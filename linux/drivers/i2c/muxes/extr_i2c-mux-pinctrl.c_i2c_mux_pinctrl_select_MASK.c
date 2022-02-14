
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct i2c_mux_pinctrl {int * states; int pinctrl; } ;
struct i2c_mux_core {int dummy; } ;


 struct i2c_mux_pinctrl* FUNC_0 (struct i2c_mux_core*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct i2c_mux_pinctrl *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->pinctrl, VAR_2->states[VAR_1]);
}
