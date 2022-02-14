
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad7606_state {int gpio_range; } ;


 int FUNC_0 (int ,int) ;
 struct ad7606_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_0, int VAR_1, int VAR_2)
{
 struct ad7606_state *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->gpio_range, VAR_2);

 return 0;
}
