
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * release; } ;
struct TYPE_4__ {int * demodulator_priv; TYPE_1__ ops; } ;
struct si2168_dev {TYPE_2__ fe; int muxc; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct si2168_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct si2168_dev*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct si2168_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");

 FUNC_2(VAR_1->muxc);

 VAR_1->fe.ops.release = ((void*)0);
 VAR_1->fe.demodulator_priv = ((void*)0);

 FUNC_3(VAR_1);

 return 0;
}
