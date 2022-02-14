
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_tool_addr {int dummy; } ;
struct mlx5_fwdump_reg {int addr; int val; } ;
struct mlx5_fwdump_get {size_t reg_filled; size_t reg_cnt; struct mlx5_fwdump_reg* buf; struct mlx5_tool_addr devaddr; } ;
typedef int fdg ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct mlx5_fwdump_reg* FUNC_0 (size_t,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,int,int) ;
 int FUNC_4 (int,int ,struct mlx5_fwdump_get*) ;
 int FUNC_5 (struct mlx5_fwdump_get*,int ,int) ;
 int * VAR_3 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(int VAR_4, const struct mlx5_tool_addr *VAR_5,
    const char *VAR_6)
{
 struct mlx5_fwdump_get VAR_7;
 struct mlx5_fwdump_reg *VAR_8;
 FILE *VAR_9;
 size_t VAR_10;
 int VAR_11, VAR_12;

 if (VAR_6 == ((void*)0))
  VAR_9 = VAR_3;
 else
  VAR_9 = FUNC_2(VAR_6, "w");
 if (VAR_9 == ((void*)0)) {
  FUNC_6("open %s", VAR_6);
  return (1);
 }
 VAR_12 = 1;
 FUNC_5(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.devaddr = *VAR_5;
 VAR_11 = FUNC_4(VAR_4, VAR_1, &VAR_7);
 if (VAR_11 != 0) {
  FUNC_6("MLX5_FWDUMP_GET dumpsize");
  goto out;
 }
 VAR_8 = FUNC_0(VAR_7.reg_filled, sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_6("alloc rege");
  goto out;
 }
 VAR_7.buf = VAR_8;
 VAR_7.reg_cnt = VAR_7.reg_filled;
 VAR_11 = FUNC_4(VAR_4, VAR_1, &VAR_7);
 if (VAR_11 != 0) {
  if (VAR_2 == VAR_0)
   FUNC_7("no dump recorded");
  else
   FUNC_6("MLX5_FWDUMP_GET dump fetch");
  goto out;
 }
 for (VAR_10 = 0; VAR_10 < VAR_7.reg_cnt; VAR_10++, VAR_8++)
  FUNC_3(VAR_9, "0x%08x\t0x%08x\n", VAR_8->addr, VAR_8->val);
 VAR_12 = 0;
out:
 if (VAR_9 != VAR_3)
  FUNC_1(VAR_9);
 return (VAR_12);
}
