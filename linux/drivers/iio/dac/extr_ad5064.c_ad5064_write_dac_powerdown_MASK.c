
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct ad5064_state {int* pwr_down; int lock; } ;
typedef int ssize_t ;


 int FUNC_0 (struct ad5064_state*,struct iio_chan_spec const*) ;
 struct ad5064_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_5(struct iio_dev *VAR_0,
  uintptr_t VAR_1, const struct iio_chan_spec *VAR_2, const char *VAR_3,
  size_t VAR_4)
{
 struct ad5064_state *VAR_5 = FUNC_1(VAR_0);
 bool VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_5->lock);
 VAR_5->pwr_down[VAR_2->channel] = VAR_6;

 VAR_7 = FUNC_0(VAR_5, VAR_2);
 FUNC_3(&VAR_5->lock);
 return VAR_7 ? VAR_7 : VAR_4;
}
