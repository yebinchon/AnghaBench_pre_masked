
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_spi_conf {int done; } ;
struct fpga_manager {int dev; struct xilinx_spi_conf* priv; } ;
struct fpga_image_info {int config_complete_timeout_us; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct xilinx_spi_conf*) ;

__attribute__((used)) static int FUNC_5(struct fpga_manager *VAR_2,
         struct fpga_image_info *VAR_3)
{
 struct xilinx_spi_conf *VAR_4 = VAR_2->priv;
 unsigned long VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_4->done))
  return FUNC_4(VAR_4);

 VAR_5 = VAR_1 + FUNC_3(VAR_3->config_complete_timeout_us);

 while (FUNC_2(VAR_1, VAR_5)) {

  VAR_6 = FUNC_4(VAR_4);
  if (VAR_6)
   return VAR_6;

  if (FUNC_1(VAR_4->done))
   return FUNC_4(VAR_4);
 }

 FUNC_0(&VAR_2->dev, "Timeout after config data transfer.\n");
 return -VAR_0;
}
