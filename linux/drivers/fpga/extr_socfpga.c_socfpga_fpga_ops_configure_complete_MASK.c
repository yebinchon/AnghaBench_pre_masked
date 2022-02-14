
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct socfpga_fpga_priv {int dummy; } ;
struct fpga_manager {struct socfpga_fpga_priv* priv; } ;
struct fpga_image_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct socfpga_fpga_priv*,int ,int ) ;
 scalar_t__ FUNC_1 (struct socfpga_fpga_priv*,int) ;
 int FUNC_2 (struct socfpga_fpga_priv*) ;
 scalar_t__ FUNC_3 (struct socfpga_fpga_priv*,int ) ;

__attribute__((used)) static int FUNC_4(struct fpga_manager *VAR_5,
            struct fpga_image_info *VAR_6)
{
 struct socfpga_fpga_priv *VAR_7 = VAR_5->priv;
 u32 VAR_8;







 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;


 FUNC_0(VAR_7, VAR_3,
          VAR_1);







 if (FUNC_1(VAR_7, 4))
  return -VAR_0;


 if (FUNC_3(VAR_7, VAR_4))
  return -VAR_0;


 FUNC_0(VAR_7, VAR_3,
          VAR_2);

 return 0;
}
