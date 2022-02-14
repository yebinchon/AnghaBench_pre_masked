
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts73xx_fpga_priv {scalar_t__ io_base; } ;
struct fpga_manager {struct ts73xx_fpga_priv* priv; } ;
struct fpga_image_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fpga_manager *VAR_4,
      struct fpga_image_info *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 struct ts73xx_fpga_priv *VAR_8 = VAR_4->priv;


 FUNC_1(0, VAR_8->io_base + VAR_0);
 FUNC_0(VAR_3);
 FUNC_1(VAR_1, VAR_8->io_base + VAR_0);
 FUNC_0(VAR_2);

 return 0;
}
