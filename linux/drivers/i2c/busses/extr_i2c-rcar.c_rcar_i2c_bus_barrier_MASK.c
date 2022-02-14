
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_i2c_priv {int recovery_icmcr; int adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rcar_i2c_priv*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct rcar_i2c_priv *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {

  if (!(FUNC_1(VAR_6, VAR_2) & VAR_1))
   return 0;
  FUNC_2(1);
 }


 VAR_6->recovery_icmcr = VAR_4 | VAR_5 | VAR_1 | VAR_0;
 return FUNC_0(&VAR_6->adap);
}
