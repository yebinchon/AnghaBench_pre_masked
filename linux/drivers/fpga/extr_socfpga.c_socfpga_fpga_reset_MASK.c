
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct socfpga_fpga_priv {int dummy; } ;
struct fpga_manager {struct socfpga_fpga_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct socfpga_fpga_priv*) ;
 scalar_t__ FUNC_1 (struct socfpga_fpga_priv*,int ) ;
 int FUNC_2 (struct socfpga_fpga_priv*,int ,int ) ;
 scalar_t__ FUNC_3 (struct socfpga_fpga_priv*,int ) ;
 int FUNC_4 (struct socfpga_fpga_priv*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct fpga_manager *VAR_5)
{
 struct socfpga_fpga_priv *VAR_6 = VAR_5->priv;
 u32 VAR_7, VAR_8;
 int VAR_9;






 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9)
  return VAR_9;


 FUNC_2(VAR_6, VAR_3,
          VAR_1);


 VAR_7 = FUNC_1(VAR_6, VAR_3);
 VAR_7 |= VAR_2;
 FUNC_4(VAR_6, VAR_3, VAR_7);


 VAR_8 = FUNC_3(VAR_6, VAR_4);


 VAR_7 &= ~VAR_2;
 FUNC_4(VAR_6, VAR_3, VAR_7);


 if (VAR_8)
  return -VAR_0;

 return 0;
}
