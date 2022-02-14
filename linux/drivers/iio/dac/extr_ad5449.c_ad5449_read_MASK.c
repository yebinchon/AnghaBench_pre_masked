
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int cs_change; void** rx_buf; void** tx_buf; } ;
struct iio_dev {int mlock; } ;
struct ad5449 {void** data; int spi; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct spi_transfer*) ;
 unsigned int FUNC_1 (void*) ;
 void* FUNC_2 (unsigned int) ;
 struct ad5449* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_1, unsigned int VAR_2,
 unsigned int *VAR_3)
{
 struct ad5449 *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;
 struct spi_transfer VAR_6[] = {
  {
   .tx_buf = &VAR_4->data[0],
   .len = 2,
   .cs_change = 1,
  }, {
   .tx_buf = &VAR_4->data[1],
   .rx_buf = &VAR_4->data[1],
   .len = 2,
  },
 };

 FUNC_4(&VAR_1->mlock);
 VAR_4->data[0] = FUNC_2(VAR_2 << 12);
 VAR_4->data[1] = FUNC_2(VAR_0);

 VAR_5 = FUNC_6(VAR_4->spi, VAR_6, FUNC_0(VAR_6));
 if (VAR_5 < 0)
  goto out_unlock;

 *VAR_3 = FUNC_1(VAR_4->data[1]);

out_unlock:
 FUNC_5(&VAR_1->mlock);
 return VAR_5;
}
