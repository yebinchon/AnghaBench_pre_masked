
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct socfpga_fpga_priv {scalar_t__ fpga_base_addr; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct socfpga_fpga_priv *VAR_0, u32 VAR_1,
    u32 VAR_2)
{
 FUNC_0(VAR_2, VAR_0->fpga_base_addr + VAR_1);
}
