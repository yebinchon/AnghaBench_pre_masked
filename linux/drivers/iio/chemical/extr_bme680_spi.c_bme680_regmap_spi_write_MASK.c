
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct bme680_spi_bus_context {struct spi_device* spi; } ;


 int FUNC_0 (struct bme680_spi_bus_context*,int) ;
 int FUNC_1 (int*,void const*,int) ;
 int FUNC_2 (struct spi_device*,int*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const void *VAR_1,
       size_t VAR_2)
{
 struct bme680_spi_bus_context *VAR_3 = VAR_0;
 struct spi_device *VAR_4 = VAR_3->spi;
 int VAR_5;
 u8 VAR_6[2];

 FUNC_1(VAR_6, VAR_1, 2);

 VAR_5 = FUNC_0(VAR_3, VAR_6[0]);
 if (VAR_5)
  return VAR_5;





 VAR_6[0] &= ~0x80;

 return FUNC_2(VAR_4, VAR_6, 2);
}
