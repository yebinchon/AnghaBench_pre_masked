
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct ads8344 {int rx_buf; int tx_buf; struct spi_device* spi; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct spi_device*,int*,int) ;
 int FUNC_2 (struct spi_device*,int *,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ads8344 *VAR_3, int VAR_4,
      bool VAR_5)
{
 struct spi_device *VAR_6 = VAR_3->spi;
 int VAR_7;

 VAR_3->tx_buf = VAR_2;
 if (!VAR_5)
  VAR_3->tx_buf |= VAR_1;
 VAR_3->tx_buf |= FUNC_0(VAR_4);
 VAR_3->tx_buf |= VAR_0;

 VAR_7 = FUNC_2(VAR_6, &VAR_3->tx_buf, 1);
 if (VAR_7)
  return VAR_7;

 FUNC_3(9);

 VAR_7 = FUNC_1(VAR_6, &VAR_3->rx_buf, 2);
 if (VAR_7)
  return VAR_7;

 return VAR_3->rx_buf;
}
