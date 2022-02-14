
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad7606_state {int completion; int trig; int gpio_convst; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct iio_dev*) ;
 struct ad7606_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;
 struct ad7606_state *VAR_4 = FUNC_3(VAR_3);

 if (FUNC_2(VAR_3)) {
  FUNC_1(VAR_4->gpio_convst, 0);
  FUNC_4(VAR_4->trig);
 } else {
  FUNC_0(&VAR_4->completion);
 }

 return VAR_0;
}
