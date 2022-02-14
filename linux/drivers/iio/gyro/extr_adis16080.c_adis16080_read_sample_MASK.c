
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_transfer {int len; int cs_change; int * rx_buf; int * tx_buf; } ;
struct iio_dev {int dummy; } ;
struct adis16080_state {int buf; int us; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_transfer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct adis16080_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_1,
  u16 VAR_2, int *VAR_3)
{
 struct adis16080_state *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;
 struct spi_transfer VAR_6[] = {
  {
   .tx_buf = &VAR_4->buf,
   .len = 2,
   .cs_change = 1,
  }, {
   .rx_buf = &VAR_4->buf,
   .len = 2,
  },
 };

 VAR_4->buf = FUNC_2(VAR_2 | VAR_0);

 VAR_5 = FUNC_5(VAR_4->us, VAR_6, FUNC_0(VAR_6));
 if (VAR_5 == 0)
  *VAR_3 = FUNC_4(FUNC_1(VAR_4->buf), 11);

 return VAR_5;
}
