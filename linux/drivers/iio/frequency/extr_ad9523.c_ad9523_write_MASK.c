
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int len; int * tx_buf; } ;
struct iio_dev {int dev; } ;
struct ad9523_state {int spi; TYPE_1__* data; } ;
struct TYPE_2__ {void* d32; int * d8; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_3 (struct spi_transfer*) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (int *,char*,int) ;
 struct ad9523_state* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3)
{
 struct ad9523_state *VAR_4 = FUNC_6(VAR_1);
 int VAR_5;
 struct spi_transfer VAR_6[] = {
  {
   .tx_buf = &VAR_4->data[0].d8[2],
   .len = 2,
  }, {
   .tx_buf = &VAR_4->data[1].d8[4 - FUNC_2(VAR_2)],
   .len = FUNC_2(VAR_2),
  },
 };

 VAR_4->data[0].d32 = FUNC_4(VAR_0 |
          FUNC_1(FUNC_2(VAR_2)) |
          FUNC_0(VAR_2));
 VAR_4->data[1].d32 = FUNC_4(VAR_3);

 VAR_5 = FUNC_7(VAR_4->spi, VAR_6, FUNC_3(VAR_6));

 if (VAR_5 < 0)
  FUNC_5(&VAR_1->dev, "write failed (%d)", VAR_5);

 return VAR_5;
}
