
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct bme680_spi_bus_context {struct spi_device* spi; } ;


 int FUNC_0 (struct bme680_spi_bus_context*,int) ;
 int FUNC_1 (struct spi_device*,int*,int,void*,size_t) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const void *VAR_1,
      size_t VAR_2, void *VAR_3, size_t VAR_4)
{
 struct bme680_spi_bus_context *VAR_5 = VAR_0;
 struct spi_device *VAR_6 = VAR_5->spi;
 int VAR_7;
 u8 VAR_8 = *(const u8 *)VAR_1;

 VAR_7 = FUNC_0(VAR_5, VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_8 |= 0x80;

 return FUNC_1(VAR_6, &VAR_8, 1, VAR_3, VAR_4);
}
