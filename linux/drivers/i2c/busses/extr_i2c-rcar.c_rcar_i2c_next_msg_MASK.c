
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_i2c_priv {int flags; int msgs_left; int msg; } ;


 int VAR_0 ;
 int FUNC_0 (struct rcar_i2c_priv*) ;

__attribute__((used)) static void FUNC_1(struct rcar_i2c_priv *VAR_1)
{
 VAR_1->msg++;
 VAR_1->msgs_left--;
 VAR_1->flags &= VAR_0;
 FUNC_0(VAR_1);
}
