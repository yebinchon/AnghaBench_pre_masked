
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int len; int cs_change; int * rx_buf; int * tx_buf; } ;
struct iio_dev {int mlock; } ;
struct ad5360_state {TYPE_1__* data; int spi; } ;
struct TYPE_2__ {int d32; int * d8; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_1 ;
 int FUNC_4 (struct spi_transfer*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 struct ad5360_state* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_11(struct iio_dev *VAR_2, unsigned int VAR_3,
 unsigned int VAR_4)
{
 struct ad5360_state *VAR_5 = FUNC_7(VAR_2);
 int VAR_6;
 struct spi_transfer VAR_7[] = {
  {
   .tx_buf = &VAR_5->data[0].d8[1],
   .len = 3,
   .cs_change = 1,
  }, {
   .rx_buf = &VAR_5->data[1].d8[1],
   .len = 3,
  },
 };

 FUNC_8(&VAR_2->mlock);

 VAR_5->data[0].d32 = FUNC_6(FUNC_1(VAR_0) |
  FUNC_0(VAR_1) |
  FUNC_3(VAR_3) |
  FUNC_2(VAR_4));

 VAR_6 = FUNC_10(VAR_5->spi, VAR_7, FUNC_4(VAR_7));
 if (VAR_6 >= 0)
  VAR_6 = FUNC_5(VAR_5->data[1].d32) & 0xffff;

 FUNC_9(&VAR_2->mlock);

 return VAR_6;
}
