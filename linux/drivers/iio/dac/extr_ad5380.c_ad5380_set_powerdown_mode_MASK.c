
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad5380_state {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ad5380_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, unsigned int VAR_4)
{
 struct ad5380_state *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5->regmap, VAR_1,
  1 << VAR_0,
  VAR_4 << VAR_0);

 return VAR_6;
}
