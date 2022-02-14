
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct adxl372_state {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct adxl372_state*,unsigned long,int ) ;
 struct adxl372_state* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;

__attribute__((used)) static int FUNC_3(struct iio_trigger *VAR_1,
      bool VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_2(VAR_1);
 struct adxl372_state *VAR_4 = FUNC_1(VAR_3);
 unsigned long int VAR_5 = 0;

 if (VAR_2)
  VAR_5 = VAR_0;

 return FUNC_0(VAR_4, VAR_5, 0);
}
