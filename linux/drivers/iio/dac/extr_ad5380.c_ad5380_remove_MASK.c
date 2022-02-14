
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int channels; } ;
struct device {int dummy; } ;
struct ad5380_state {int vref_reg; } ;


 int FUNC_0 (int ) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ad5380_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);
 struct ad5380_state *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1);

 FUNC_4(VAR_1->channels);

 if (!FUNC_0(VAR_2->vref_reg)) {
  FUNC_5(VAR_2->vref_reg);
 }

 return 0;
}
