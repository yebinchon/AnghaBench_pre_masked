
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct socfpga_fpga_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct socfpga_fpga_priv*) ;
 int FUNC_1 (struct socfpga_fpga_priv*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct socfpga_fpga_priv *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4);

 if ((VAR_5 & VAR_0) == 0)
  return VAR_2;

 return FUNC_1(VAR_4, VAR_1) &
  VAR_3;
}
