
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_spi_conf {int done; } ;
struct fpga_manager {struct xilinx_spi_conf* priv; } ;
typedef enum fpga_mgr_states { ____Placeholder_fpga_mgr_states } fpga_mgr_states ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static enum fpga_mgr_states FUNC_1(struct fpga_manager *VAR_2)
{
 struct xilinx_spi_conf *VAR_3 = VAR_2->priv;

 if (!FUNC_0(VAR_3->done))
  return VAR_0;

 return VAR_1;
}
