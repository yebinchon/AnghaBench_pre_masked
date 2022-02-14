
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st33zp24_spi_phy {int* rx_buf; int latency; int * tx_buf; struct spi_device* spi_device; } ;
struct spi_transfer {int* rx_buf; int len; int * tx_buf; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct spi_device*,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, u8 VAR_3, u8 *VAR_4,
      int VAR_5)
{
 int VAR_6 = 0, VAR_7;
 struct st33zp24_spi_phy *VAR_8 = VAR_2;
 struct spi_device *VAR_9 = VAR_8->spi_device;
 struct spi_transfer VAR_10 = {
  .tx_buf = VAR_8->tx_buf,
  .rx_buf = VAR_8->rx_buf,
 };


 VAR_8->tx_buf[VAR_6++] = VAR_0;
 VAR_8->tx_buf[VAR_6++] = VAR_3;

 FUNC_1(&VAR_8->tx_buf[VAR_6], VAR_1,
        VAR_8->latency + VAR_5);

 VAR_10.len = VAR_6 + VAR_8->latency + VAR_5;


 VAR_7 = FUNC_2(VAR_9, &VAR_10, 1);
 if (VAR_5 > 0 && VAR_7 == 0) {
  VAR_7 = VAR_8->rx_buf[VAR_6 + VAR_8->latency - 1];

  FUNC_0(VAR_4, VAR_8->rx_buf + VAR_6 + VAR_8->latency,
         VAR_5);
 }

 return VAR_7;
}
