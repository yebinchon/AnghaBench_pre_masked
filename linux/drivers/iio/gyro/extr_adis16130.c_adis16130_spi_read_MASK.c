
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_transfer {int* tx_buf; int* rx_buf; int len; } ;
struct iio_dev {int dummy; } ;
struct adis16130_state {int* buf; int buf_lock; int us; } ;


 int VAR_0 ;
 struct adis16130_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1, u8 VAR_2, u32 *VAR_3)
{
 int VAR_4;
 struct adis16130_state *VAR_5 = FUNC_0(VAR_1);
 struct spi_transfer VAR_6 = {
  .tx_buf = VAR_5->buf,
  .rx_buf = VAR_5->buf,
  .len = 4,
 };

 FUNC_1(&VAR_5->buf_lock);

 VAR_5->buf[0] = VAR_0 | VAR_2;
 VAR_5->buf[1] = VAR_5->buf[2] = VAR_5->buf[3] = 0;

 VAR_4 = FUNC_3(VAR_5->us, &VAR_6, 1);
 if (VAR_4 == 0)
  *VAR_3 = (VAR_5->buf[1] << 16) | (VAR_5->buf[2] << 8) | VAR_5->buf[3];
 FUNC_2(&VAR_5->buf_lock);

 return VAR_4;
}
