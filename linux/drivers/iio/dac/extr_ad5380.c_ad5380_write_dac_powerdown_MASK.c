
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; } ;
struct iio_chan_spec {int dummy; } ;
struct ad5380_state {int pwr_down; int regmap; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ad5380_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_5(struct iio_dev *VAR_2,
  uintptr_t VAR_3, const struct iio_chan_spec *VAR_4, const char *VAR_5,
  size_t VAR_6)
{
 struct ad5380_state *VAR_7 = FUNC_0(VAR_2);
 bool VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_5, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_1(&VAR_2->mlock);

 if (VAR_8)
  VAR_9 = FUNC_3(VAR_7->regmap, VAR_0, 0);
 else
  VAR_9 = FUNC_3(VAR_7->regmap, VAR_1, 0);

 VAR_7->pwr_down = VAR_8;

 FUNC_2(&VAR_2->mlock);

 return VAR_9 ? VAR_9 : VAR_6;
}
