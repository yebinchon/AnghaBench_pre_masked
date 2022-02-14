
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlnx_pr_decoupler_data {int clk; } ;
struct fpga_bridge {struct xlnx_pr_decoupler_data* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xlnx_pr_decoupler_data*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct fpga_bridge *VAR_3, bool VAR_4)
{
 int VAR_5;
 struct xlnx_pr_decoupler_data *VAR_6 = VAR_3->priv;

 VAR_5 = FUNC_1(VAR_6->clk);
 if (VAR_5)
  return VAR_5;

 if (VAR_4)
  FUNC_2(VAR_6, VAR_2, VAR_0);
 else
  FUNC_2(VAR_6, VAR_2, VAR_1);

 FUNC_0(VAR_6->clk);

 return 0;
}
