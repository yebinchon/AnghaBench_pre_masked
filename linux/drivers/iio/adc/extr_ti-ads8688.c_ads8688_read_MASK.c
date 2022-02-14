
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_transfer {int len; int cs_change; int * rx_buf; int * tx_buf; } ;
struct iio_dev {int dummy; } ;
struct ads8688_state {TYPE_1__* data; int spi; } ;
struct TYPE_2__ {void* d32; int * d8; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (struct spi_transfer*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ) ;
 struct ads8688_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_2, unsigned int VAR_3)
{
 struct ads8688_state *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;
 u32 VAR_6;
 struct spi_transfer VAR_7[] = {
  {
   .tx_buf = &VAR_4->data[0].d8[0],
   .len = 4,
   .cs_change = 1,
  }, {
   .tx_buf = &VAR_4->data[1].d8[0],
   .rx_buf = &VAR_4->data[1].d8[0],
   .len = 4,
  },
 };

 VAR_6 = FUNC_0(FUNC_1(VAR_3));
 VAR_6 <<= VAR_0;
 VAR_4->data[0].d32 = FUNC_4(VAR_6);

 VAR_6 = FUNC_0(VAR_1);
 VAR_6 <<= VAR_0;
 VAR_4->data[1].d32 = FUNC_4(VAR_6);

 VAR_5 = FUNC_6(VAR_4->spi, VAR_7, FUNC_2(VAR_7));
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_3(VAR_4->data[1].d32) & 0xffff;
}
