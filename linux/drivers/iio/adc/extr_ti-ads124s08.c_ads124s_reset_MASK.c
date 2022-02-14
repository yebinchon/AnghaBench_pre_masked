
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ads124s_private {scalar_t__ reset_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 struct ads124s_private* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1)
{
 struct ads124s_private *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->reset_gpio) {
  FUNC_1(VAR_2->reset_gpio, 0);
  FUNC_3(200);
  FUNC_1(VAR_2->reset_gpio, 1);
 } else {
  return FUNC_0(VAR_1, VAR_0);
 }

 return 0;
}
