
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_fpga_priv {int clk; } ;
struct fpga_manager {struct zynq_fpga_priv* priv; } ;
typedef enum fpga_mgr_states { ____Placeholder_fpga_mgr_states } fpga_mgr_states ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct zynq_fpga_priv*,int ) ;

__attribute__((used)) static enum fpga_mgr_states FUNC_3(struct fpga_manager *VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 struct zynq_fpga_priv *VAR_7;

 VAR_7 = VAR_4->priv;

 VAR_5 = FUNC_1(VAR_7->clk);
 if (VAR_5)
  return VAR_1;

 VAR_6 = FUNC_2(VAR_7, VAR_2);
 FUNC_0(VAR_7->clk);

 if (VAR_6 & VAR_3)
  return VAR_0;

 return VAR_1;
}
