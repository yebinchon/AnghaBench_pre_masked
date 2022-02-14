
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_i2c_priv {int * slave; int irq; } ;
struct i2c_client {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct rcar_i2c_priv* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rcar_i2c_priv*) ;
 int FUNC_4 (struct rcar_i2c_priv*,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2)
{
 struct rcar_i2c_priv *VAR_3 = FUNC_1(VAR_2->adapter);

 FUNC_0(!VAR_3->slave);


 FUNC_4(VAR_3, VAR_1, 0);
 FUNC_4(VAR_3, VAR_0, 0);

 FUNC_5(VAR_3->irq);
 VAR_3->slave = ((void*)0);

 FUNC_2(FUNC_3(VAR_3));

 return 0;
}
