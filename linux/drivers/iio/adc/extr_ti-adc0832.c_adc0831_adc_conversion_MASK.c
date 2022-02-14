
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct adc0832 {int* rx_buf; struct spi_device* spi; } ;


 int FUNC_0 (struct spi_device*,int**,int) ;

__attribute__((used)) static int FUNC_1(struct adc0832 *VAR_0)
{
 struct spi_device *VAR_1 = VAR_0->spi;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_0->rx_buf, 2);
 if (VAR_2)
  return VAR_2;




 return (VAR_0->rx_buf[0] << 2 & 0xff) | (VAR_0->rx_buf[1] >> 6);
}
