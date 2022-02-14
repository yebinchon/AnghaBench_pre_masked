
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * release; } ;
struct TYPE_4__ {int * demodulator_priv; TYPE_1__ ops; } ;
struct lgdt3306a_state {struct lgdt3306a_state* cfg; TYPE_2__ frontend; int muxc; } ;
struct i2c_client {int dummy; } ;


 struct lgdt3306a_state* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lgdt3306a_state*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct lgdt3306a_state *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->muxc);

 VAR_1->frontend.ops.release = ((void*)0);
 VAR_1->frontend.demodulator_priv = ((void*)0);

 FUNC_2(VAR_1->cfg);
 FUNC_2(VAR_1);

 return 0;
}
