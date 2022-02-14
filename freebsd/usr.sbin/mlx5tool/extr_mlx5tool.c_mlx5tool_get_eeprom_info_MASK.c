
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_tool_addr {int dummy; } ;
struct mlx5_eeprom_get {int * eeprom_info_buf; scalar_t__ eeprom_info_out_len; struct mlx5_tool_addr devaddr; } ;
typedef int eeprom_info ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ,struct mlx5_eeprom_get*) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct mlx5_eeprom_get*,int ,int) ;
 int FUNC_4 (struct mlx5_eeprom_get*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(int VAR_3, const struct mlx5_tool_addr *VAR_4)
{
 struct mlx5_eeprom_get VAR_5;
 int VAR_6;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.devaddr = *VAR_4;

 VAR_6 = FUNC_1(VAR_3, VAR_1, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_5("MLX5_EEPROM_GET");
  return (VAR_6);
 }
 VAR_5.eeprom_info_buf =
     FUNC_2(VAR_5.eeprom_info_out_len + VAR_2);
 if (VAR_5.eeprom_info_buf == ((void*)0)) {
  FUNC_5("alloc eeprom_info.eeprom_info_buf ");
  return (VAR_0);
 }
 VAR_6 = FUNC_1(VAR_3, VAR_1, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_5("MLX5_EEPROM_GET");
  FUNC_0(VAR_5.eeprom_info_buf);
  return (VAR_6);
 }

 FUNC_4(&VAR_5);

 FUNC_0(VAR_5.eeprom_info_buf);
 return (0);
}
