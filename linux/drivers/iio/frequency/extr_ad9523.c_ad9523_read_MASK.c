
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct iio_dev {int dev; } ;
struct ad9523_state {TYPE_1__* data; int spi; } ;
struct TYPE_2__ {int d32; int * d8; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct spi_transfer*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,char*,int) ;
 struct ad9523_state* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_1, unsigned int VAR_2)
{
 struct ad9523_state *VAR_3 = FUNC_7(VAR_1);
 int VAR_4;






 struct spi_transfer VAR_5[] = {
  {
   .tx_buf = &VAR_3->data[0].d8[2],
   .len = 2,
  }, {
   .rx_buf = &VAR_3->data[1].d8[4 - FUNC_2(VAR_2)],
   .len = FUNC_2(VAR_2),
  },
 };

 VAR_3->data[0].d32 = FUNC_5(VAR_0 |
          FUNC_1(FUNC_2(VAR_2)) |
          FUNC_0(VAR_2));

 VAR_4 = FUNC_8(VAR_3->spi, VAR_5, FUNC_3(VAR_5));
 if (VAR_4 < 0)
  FUNC_6(&VAR_1->dev, "read failed (%d)", VAR_4);
 else
  VAR_4 = FUNC_4(VAR_3->data[1].d32) & (0xFFFFFF >>
      (8 * (3 - FUNC_2(VAR_2))));

 return VAR_4;
}
