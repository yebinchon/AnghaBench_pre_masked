
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xilinx_spi_conf {struct spi_device* spi; } ;
struct spi_device {int dev; } ;
typedef int din_data ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct spi_device*,int const*,int) ;

__attribute__((used)) static int FUNC_2(struct xilinx_spi_conf *VAR_0)
{
 struct spi_device *VAR_1 = VAR_0->spi;
 const u8 VAR_2[1] = { 0xff };
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->spi, VAR_2, sizeof(VAR_2));
 if (VAR_3)
  FUNC_0(&VAR_1->dev, "applying CCLK cycles failed: %d\n", VAR_3);

 return VAR_3;
}
