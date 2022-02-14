
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
struct bme680_spi_bus_context {int current_page; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct spi_device*,int*,int) ;
 int FUNC_2 (struct spi_device*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_3(
 struct bme680_spi_bus_context *VAR_2, u8 VAR_3)
{
 struct spi_device *VAR_4 = VAR_2->spi;
 int VAR_5;
 u8 VAR_6[2];
 u8 VAR_7 = (VAR_3 & 0x80) ? 0 : 1;

 if (VAR_7 == VAR_2->current_page)
  return 0;





 VAR_6[0] = VAR_0;
 VAR_5 = FUNC_2(VAR_4, VAR_6, 1, VAR_6 + 1, 1);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->dev, "failed to set page %u\n", VAR_7);
  return VAR_5;
 }

 VAR_6[0] = VAR_0;
 if (VAR_7)
  VAR_6[1] |= VAR_1;
 else
  VAR_6[1] &= ~VAR_1;

 VAR_5 = FUNC_1(VAR_4, VAR_6, 2);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->dev, "failed to set page %u\n", VAR_7);
  return VAR_5;
 }

 VAR_2->current_page = VAR_7;

 return 0;
}
