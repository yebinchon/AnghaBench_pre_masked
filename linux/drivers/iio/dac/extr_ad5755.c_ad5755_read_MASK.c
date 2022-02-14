
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int len; int cs_change; int * rx_buf; int * tx_buf; } ;
struct iio_dev {int mlock; } ;
struct ad5755_state {TYPE_1__* data; int spi; } ;
struct TYPE_2__ {void* d32; int * d8; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct spi_transfer*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (unsigned int) ;
 struct ad5755_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_2, unsigned int VAR_3)
{
 struct ad5755_state *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;
 struct spi_transfer VAR_6[] = {
  {
   .tx_buf = &VAR_4->data[0].d8[1],
   .len = 3,
   .cs_change = 1,
  }, {
   .tx_buf = &VAR_4->data[1].d8[1],
   .rx_buf = &VAR_4->data[1].d8[1],
   .len = 3,
  },
 };

 FUNC_4(&VAR_2->mlock);

 VAR_4->data[0].d32 = FUNC_2(VAR_1 | (VAR_3 << 16));
 VAR_4->data[1].d32 = FUNC_2(VAR_0);

 VAR_5 = FUNC_6(VAR_4->spi, VAR_6, FUNC_0(VAR_6));
 if (VAR_5 >= 0)
  VAR_5 = FUNC_1(VAR_4->data[1].d32) & 0xffff;

 FUNC_5(&VAR_2->mlock);

 return VAR_5;
}
