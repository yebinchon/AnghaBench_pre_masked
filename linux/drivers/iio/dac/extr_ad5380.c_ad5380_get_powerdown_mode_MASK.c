
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad5380_state {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct ad5380_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3)
{
 struct ad5380_state *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4->regmap, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5 = (VAR_5 >> VAR_0) & 1;

 return VAR_5;
}
