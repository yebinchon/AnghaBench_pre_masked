
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fpga_manager {struct a10_fpga_priv* priv; } ;
struct a10_fpga_priv {int dummy; } ;
typedef enum fpga_mgr_states { ____Placeholder_fpga_mgr_states } fpga_mgr_states ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct a10_fpga_priv*) ;

__attribute__((used)) static enum fpga_mgr_states FUNC_1(struct fpga_manager *VAR_9)
{
 struct a10_fpga_priv *VAR_10 = VAR_9->priv;
 u32 VAR_11 = FUNC_0(VAR_10);

 if (VAR_11 & VAR_3)
  return VAR_4;

 if (VAR_11 & VAR_2)
  return VAR_7;

 if (VAR_11 & VAR_0)
  return VAR_8;

 if ((VAR_11 & VAR_1) == 0)
  return VAR_5;

 return VAR_6;
}
