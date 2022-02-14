
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct ad5064_state {int vref_reg; int use_internal_vref; } ;


 int FUNC_0 (struct ad5064_state*) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ad5064_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);
 struct ad5064_state *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1);

 if (!VAR_2->use_internal_vref)
  FUNC_4(FUNC_0(VAR_2), VAR_2->vref_reg);

 return 0;
}
