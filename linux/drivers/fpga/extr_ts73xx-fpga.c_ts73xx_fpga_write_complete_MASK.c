
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ts73xx_fpga_priv {scalar_t__ io_base; } ;
struct fpga_manager {struct ts73xx_fpga_priv* priv; } ;
struct fpga_image_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct fpga_manager *VAR_4,
          struct fpga_image_info *VAR_5)
{
 struct ts73xx_fpga_priv *VAR_6 = VAR_4->priv;
 u8 VAR_7;

 FUNC_1(1000, 2000);
 VAR_7 = FUNC_0(VAR_6->io_base + VAR_2);
 VAR_7 |= VAR_1;
 FUNC_2(VAR_7, VAR_6->io_base + VAR_2);

 FUNC_1(1000, 2000);
 VAR_7 = FUNC_0(VAR_6->io_base + VAR_2);
 VAR_7 &= ~VAR_1;
 FUNC_2(VAR_7, VAR_6->io_base + VAR_2);

 VAR_7 = FUNC_0(VAR_6->io_base + VAR_2);
 if ((VAR_7 & VAR_3) != VAR_3)
  return -VAR_0;

 return 0;
}
