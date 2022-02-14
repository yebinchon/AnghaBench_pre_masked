
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st33zp24_spi_phy {int* tx_buf; int* rx_buf; int latency; struct spi_device* spi_device; } ;
struct spi_transfer {int* tx_buf; int* rx_buf; int len; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct spi_device*,struct spi_transfer*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, u8 VAR_5, u8 *VAR_6,
        int VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 struct st33zp24_spi_phy *VAR_10 = VAR_4;
 struct spi_device *VAR_11 = VAR_10->spi_device;
 struct spi_transfer VAR_12 = {
  .tx_buf = VAR_10->tx_buf,
  .rx_buf = VAR_10->rx_buf,
 };


 VAR_10->tx_buf[VAR_8++] = VAR_3 | VAR_0;
 VAR_10->tx_buf[VAR_8++] = VAR_5;

 if (VAR_7 > 0 && VAR_5 == VAR_1) {
  VAR_10->tx_buf[VAR_8++] = VAR_7 >> 8;
  VAR_10->tx_buf[VAR_8++] = VAR_7;
 }

 FUNC_0(&VAR_10->tx_buf[VAR_8], VAR_6, VAR_7);
 VAR_8 += VAR_7;

 FUNC_1(&VAR_10->tx_buf[VAR_8], VAR_2, VAR_10->latency);

 VAR_12.len = VAR_8 + VAR_10->latency;

 VAR_9 = FUNC_2(VAR_11, &VAR_12, 1);
 if (VAR_9 == 0)
  VAR_9 = VAR_10->rx_buf[VAR_8 + VAR_10->latency - 1];

 return FUNC_3(VAR_9);
}
