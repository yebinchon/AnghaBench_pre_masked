
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_spi_conf {int done; int prog_b; } ;
struct fpga_manager {int dev; struct xilinx_spi_conf* priv; } ;
struct fpga_image_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (size_t const) ;
 int FUNC_4 (size_t const,size_t const) ;

__attribute__((used)) static int FUNC_5(struct fpga_manager *VAR_3,
     struct fpga_image_info *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct xilinx_spi_conf *VAR_7 = VAR_3->priv;
 const size_t VAR_8 = 7500;
 const size_t VAR_9 = 1;

 if (VAR_4->flags & VAR_2) {
  FUNC_0(&VAR_3->dev, "Partial reconfiguration not supported.\n");
  return -VAR_0;
 }

 FUNC_2(VAR_7->prog_b, 1);

 FUNC_3(VAR_9);

 FUNC_2(VAR_7->prog_b, 0);

 if (FUNC_1(VAR_7->done)) {
  FUNC_0(&VAR_3->dev, "Unexpected DONE pin state...\n");
  return -VAR_1;
 }


 FUNC_4(VAR_8, VAR_8 + 100);
 return 0;
}
