
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int idle; scalar_t__ idle_in_use; } ;
struct regmux {TYPE_1__ data; } ;
struct i2c_mux_core {int dummy; } ;


 struct regmux* FUNC_0 (struct i2c_mux_core*) ;
 int FUNC_1 (struct regmux*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct regmux *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->data.idle_in_use)
  return FUNC_1(VAR_2, VAR_2->data.idle);

 return 0;
}
