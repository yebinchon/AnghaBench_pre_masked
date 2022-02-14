
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct migor_ts_priv {int input; int irq; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,struct migor_ts_priv*) ;
 struct migor_ts_priv* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct migor_ts_priv*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct migor_ts_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_3(VAR_1->input);
 FUNC_4(VAR_1);

 FUNC_0(&VAR_0->dev, ((void*)0));

 return 0;
}
