
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_i2c_priv {scalar_t__ membase; int comp; } ;
struct i2c_adapter {int dev; int timeout; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct uniphier_i2c_priv* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 unsigned long FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_4, u32 VAR_5,
      u32 *VAR_6)
{
 struct uniphier_i2c_priv *VAR_7 = FUNC_1(VAR_4);
 unsigned long VAR_8;
 u32 VAR_9;

 FUNC_3(&VAR_7->comp);

 VAR_5 |= VAR_3;
 FUNC_6(VAR_5, VAR_7->membase + VAR_2);

 VAR_8 = FUNC_5(&VAR_7->comp, VAR_4->timeout);
 if (FUNC_4(!VAR_8)) {
  FUNC_0(&VAR_4->dev, "transaction timeout\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_7->membase + VAR_1);
 if (VAR_6)
  *VAR_6 = VAR_9;

 return 0;
}
