
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct adxl372_state {unsigned int watermark; } ;


 unsigned int VAR_0 ;
 struct adxl372_state* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1, unsigned int VAR_2)
{
 struct adxl372_state *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 VAR_3->watermark = VAR_2;

 return 0;
}
