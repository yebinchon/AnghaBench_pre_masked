
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct spi_device {scalar_t__ max_speed_hz; struct device dev; } ;
struct fpga_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 struct fpga_manager* FUNC_1 (struct device*,char*,int *,struct spi_device*) ;
 int FUNC_2 (struct fpga_manager*) ;
 int VAR_3 ;
 int FUNC_3 (struct spi_device*,struct fpga_manager*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct fpga_manager *VAR_6;

 if (VAR_4->max_speed_hz > VAR_2) {
  FUNC_0(VAR_5, "Speed is too high\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_5, "Lattice MachXO2 SPI FPGA Manager",
       &VAR_3, VAR_4);
 if (!VAR_6)
  return -VAR_1;

 FUNC_3(VAR_4, VAR_6);

 return FUNC_2(VAR_6);
}
