
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_tool_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct mlx5_tool_addr const*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, const struct mlx5_tool_addr *VAR_2)
{

 if (FUNC_0(VAR_1, VAR_0, VAR_2) == -1) {
  FUNC_1("MLX5_FWDUMP_RESET");
  return (1);
 }
 return (0);
}
