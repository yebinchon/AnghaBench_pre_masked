
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int len; int cs_change; int * rx_buf; int * tx_buf; } ;
struct iio_dev {int mlock; } ;
struct ad5421_state {TYPE_1__* data; int spi; } ;
struct TYPE_2__ {int d32; int * d8; } ;


 int FUNC_0 (struct spi_transfer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct ad5421_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_0, unsigned int VAR_1)
{
 struct ad5421_state *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;
 struct spi_transfer VAR_4[] = {
  {
   .tx_buf = &VAR_2->data[0].d8[1],
   .len = 3,
   .cs_change = 1,
  }, {
   .rx_buf = &VAR_2->data[1].d8[1],
   .len = 3,
  },
 };

 FUNC_4(&VAR_0->mlock);

 VAR_2->data[0].d32 = FUNC_2((1 << 23) | (VAR_1 << 16));

 VAR_3 = FUNC_6(VAR_2->spi, VAR_4, FUNC_0(VAR_4));
 if (VAR_3 >= 0)
  VAR_3 = FUNC_1(VAR_2->data[1].d32) & 0xffff;

 FUNC_5(&VAR_0->mlock);

 return VAR_3;
}
