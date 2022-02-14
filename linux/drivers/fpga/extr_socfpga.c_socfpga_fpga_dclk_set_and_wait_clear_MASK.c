
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct socfpga_fpga_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct socfpga_fpga_priv*) ;
 scalar_t__ FUNC_1 (struct socfpga_fpga_priv*,int ) ;
 int FUNC_2 (struct socfpga_fpga_priv*,int ,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct socfpga_fpga_priv *VAR_4,
      u32 VAR_5)
{
 int VAR_6 = 2;
 u32 VAR_7;


 if (FUNC_1(VAR_4, VAR_3))
  FUNC_0(VAR_4);


 FUNC_2(VAR_4, VAR_1, VAR_5);


 do {
  VAR_7 = FUNC_1(VAR_4, VAR_3);
  if (VAR_7 == VAR_2) {
   FUNC_0(VAR_4);
   return 0;
  }
  FUNC_3(1);
 } while (VAR_6--);

 return -VAR_0;
}
