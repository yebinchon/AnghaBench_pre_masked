
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxcpld_i2c_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlxcpld_i2c_priv*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct mlxcpld_i2c_priv *VAR_3)
{
 int VAR_4 = 0;

 do {
  if (!FUNC_0(VAR_3))
   break;
  FUNC_1(VAR_1 / 2, VAR_1);
  VAR_4 += VAR_1;
 } while (VAR_4 <= VAR_2);

 if (VAR_4 > VAR_2)
  return -VAR_0;

 return 0;
}
