
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct ad7124_state {int * vref; int mclk; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iio_dev*) ;
 struct ad7124_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ) ;
 struct iio_dev* FUNC_7 (struct spi_device*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_7(VAR_0);
 struct ad7124_state *VAR_2 = FUNC_5(VAR_1);
 int VAR_3;

 FUNC_4(VAR_1);
 FUNC_2(VAR_1);
 FUNC_3(VAR_2->mclk);

 for (VAR_3 = FUNC_0(VAR_2->vref) - 1; VAR_3 >= 0; VAR_3--) {
  if (!FUNC_1(VAR_2->vref[VAR_3]))
   FUNC_6(VAR_2->vref[VAR_3]);
 }

 return 0;
}
