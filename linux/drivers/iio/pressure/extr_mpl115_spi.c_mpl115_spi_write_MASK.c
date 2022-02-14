
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {int len; int * tx_buf; } ;
struct spi_device {int dummy; } ;
struct mpl115_spi_buf {int * tx; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct mpl115_spi_buf* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_device*,struct spi_transfer*,int) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct spi_device *VAR_3 = FUNC_3(VAR_0);
 struct mpl115_spi_buf *VAR_4 = FUNC_1(VAR_3);
 struct spi_transfer VAR_5 = {
  .tx_buf = VAR_4->tx,
  .len = 2,
 };

 VAR_4->tx[0] = FUNC_0(VAR_1);
 VAR_4->tx[1] = VAR_2;

 return FUNC_2(VAR_3, &VAR_5, 1);
}
