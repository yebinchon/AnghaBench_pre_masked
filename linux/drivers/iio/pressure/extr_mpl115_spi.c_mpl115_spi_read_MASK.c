
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct spi_transfer {int* rx_buf; int len; void** tx_buf; } ;
struct spi_device {int dummy; } ;
struct mpl115_spi_buf {int* rx; void** tx; } ;
struct device {int dummy; } ;


 void* FUNC_0 (scalar_t__) ;
 struct mpl115_spi_buf* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_device*,struct spi_transfer*,int) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, u8 VAR_1)
{
 struct spi_device *VAR_2 = FUNC_3(VAR_0);
 struct mpl115_spi_buf *VAR_3 = FUNC_1(VAR_2);
 struct spi_transfer VAR_4 = {
  .tx_buf = VAR_3->tx,
  .rx_buf = VAR_3->rx,
  .len = 4,
 };
 int VAR_5;

 VAR_3->tx[0] = FUNC_0(VAR_1);
 VAR_3->tx[2] = FUNC_0(VAR_1 + 1);

 VAR_5 = FUNC_2(VAR_2, &VAR_4, 1);
 if (VAR_5)
  return VAR_5;

 return (VAR_3->rx[1] << 8) | VAR_3->rx[3];
}
