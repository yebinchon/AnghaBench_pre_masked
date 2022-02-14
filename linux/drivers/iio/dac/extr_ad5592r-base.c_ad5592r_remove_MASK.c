
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct ad5592r_state {scalar_t__ reg; } ;


 int FUNC_0 (struct ad5592r_state*) ;
 int FUNC_1 (struct ad5592r_state*) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ad5592r_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (scalar_t__) ;

int FUNC_6(struct device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_2(VAR_0);
 struct ad5592r_state *VAR_2 = FUNC_4(VAR_1);

 FUNC_3(VAR_1);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 if (VAR_2->reg)
  FUNC_5(VAR_2->reg);

 return 0;
}
