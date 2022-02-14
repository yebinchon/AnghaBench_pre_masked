
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_i2c_priv {int sg; int pos; } ;


 int FUNC_0 (struct rcar_i2c_priv*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct rcar_i2c_priv *VAR_1 = VAR_0;

 VAR_1->pos += FUNC_1(&VAR_1->sg);

 FUNC_0(VAR_1);
}
