
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct socfpga_fpga_priv {int dummy; } ;
struct fpga_manager {struct socfpga_fpga_priv* priv; } ;
typedef enum fpga_mgr_states { ____Placeholder_fpga_mgr_states } fpga_mgr_states ;


 size_t FUNC_0 (int*) ;
 int VAR_0 ;
 size_t FUNC_1 (struct socfpga_fpga_priv*) ;
 int* VAR_1 ;

__attribute__((used)) static enum fpga_mgr_states FUNC_2(struct fpga_manager *VAR_2)
{
 struct socfpga_fpga_priv *VAR_3 = VAR_2->priv;
 enum fpga_mgr_states VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_3);

 if (VAR_5 < FUNC_0(VAR_1))
  VAR_4 = VAR_1[VAR_5];
 else
  VAR_4 = VAR_0;

 return VAR_4;
}
