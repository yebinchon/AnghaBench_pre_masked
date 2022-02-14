
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct adxl372_state {int fifo_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct adxl372_state*) ;
 int FUNC_1 (struct adxl372_state*,int ,int ) ;
 struct adxl372_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1)
{
 struct adxl372_state *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2, 0, 0);
 VAR_2->fifo_mode = VAR_0;
 FUNC_0(VAR_2);

 return FUNC_3(VAR_1);
}
