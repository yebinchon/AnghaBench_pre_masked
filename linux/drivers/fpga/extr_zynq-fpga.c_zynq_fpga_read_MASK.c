
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct zynq_fpga_priv {scalar_t__ io_base; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(const struct zynq_fpga_priv *VAR_0,
     u32 VAR_1)
{
 return FUNC_0(VAR_0->io_base + VAR_1);
}
