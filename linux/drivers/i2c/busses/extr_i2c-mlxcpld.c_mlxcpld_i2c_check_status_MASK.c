
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxcpld_i2c_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mlxcpld_i2c_priv*,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct mlxcpld_i2c_priv *VAR_7, int *VAR_8)
{
 u8 VAR_9;

 FUNC_0(VAR_7, VAR_5, &VAR_9, 1);

 if (VAR_9 & VAR_6) {
  if (VAR_9 & VAR_4)





   *VAR_8 = VAR_2;
  else
   *VAR_8 = VAR_1;
  return 0;
 }
 *VAR_8 = VAR_3;

 return -VAR_0;
}
