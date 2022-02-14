
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_i2c_priv {scalar_t__ devtype; int icccr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rcar_i2c_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rcar_i2c_priv *VAR_8)
{

 FUNC_0(VAR_8, VAR_4, 0);
 FUNC_0(VAR_8, VAR_3, VAR_6);
 FUNC_0(VAR_8, VAR_5, 0);

 FUNC_0(VAR_8, VAR_1, VAR_8->icccr);

 if (VAR_8->devtype == VAR_0)
  FUNC_0(VAR_8, VAR_2, VAR_7);

}
