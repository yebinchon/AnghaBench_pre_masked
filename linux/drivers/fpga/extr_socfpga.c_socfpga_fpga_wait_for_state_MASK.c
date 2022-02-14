
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct socfpga_fpga_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct socfpga_fpga_priv*) ;

__attribute__((used)) static int FUNC_2(struct socfpga_fpga_priv *VAR_1,
           u32 VAR_2)
{
 int VAR_3 = 2;





 do {
  if ((FUNC_1(VAR_1) & VAR_2) != 0)
   return 0;
  FUNC_0(20);
 } while (VAR_3--);

 return -VAR_0;
}
