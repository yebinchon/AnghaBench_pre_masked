
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlxcpld_i2c_priv {int base_addr; } ;


 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct mlxcpld_i2c_priv *VAR_0, u8 VAR_1,
       u8 *VAR_2, u8 VAR_3)
{
 u32 VAR_4 = VAR_0->base_addr + VAR_1;

 switch (VAR_3) {
 case 1:
  FUNC_1(*(VAR_2), VAR_4);
  break;
 case 2:
  FUNC_3(*((u16 *)VAR_2), VAR_4);
  break;
 case 3:
  FUNC_3(*((u16 *)VAR_2), VAR_4);
  FUNC_1(*(VAR_2 + 2), VAR_4 + 2);
  break;
 case 4:
  FUNC_2(*((u32 *)VAR_2), VAR_4);
  break;
 default:
  FUNC_0(VAR_2, VAR_3, VAR_4);
  break;
 }
}
