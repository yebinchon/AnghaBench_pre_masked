
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlnx_pr_decoupler_data {int clk; int io_base; } ;
struct fpga_bridge {struct xlnx_pr_decoupler_data* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct fpga_bridge *VAR_0)
{
 const struct xlnx_pr_decoupler_data *VAR_1 = VAR_0->priv;
 u32 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->clk);
 if (VAR_3)
  return VAR_3;

 VAR_2 = FUNC_2(VAR_1->io_base);

 FUNC_0(VAR_1->clk);

 return !VAR_2;
}
