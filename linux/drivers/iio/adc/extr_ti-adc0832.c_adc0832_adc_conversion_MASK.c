
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int* tx_buf; int* rx_buf; int len; } ;
struct spi_device {int dummy; } ;
struct adc0832 {int* tx_buf; int* rx_buf; int mux_bits; struct spi_device* spi; } ;


 int FUNC_0 (struct adc0832*) ;
 int FUNC_1 (struct spi_device*,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_2(struct adc0832 *VAR_0, int VAR_1,
    bool VAR_2)
{
 struct spi_device *VAR_3 = VAR_0->spi;
 struct spi_transfer VAR_4 = {
  .tx_buf = VAR_0->tx_buf,
  .rx_buf = VAR_0->rx_buf,
  .len = 2,
 };
 int VAR_5;

 if (!VAR_0->mux_bits)
  return FUNC_0(VAR_0);


 VAR_0->tx_buf[0] = 1 << (VAR_0->mux_bits + 1);

 VAR_0->tx_buf[0] |= VAR_2 ? 0 : (1 << VAR_0->mux_bits);

 VAR_0->tx_buf[0] |= (VAR_1 % 2) << (VAR_0->mux_bits - 1);

 if (VAR_0->mux_bits > 1)
  VAR_0->tx_buf[0] |= VAR_1 / 2;


 VAR_0->tx_buf[0] <<= 1;

 VAR_5 = FUNC_1(VAR_3, &VAR_4, 1);
 if (VAR_5)
  return VAR_5;

 return VAR_0->rx_buf[1];
}
