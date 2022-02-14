
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct ad5064_state {unsigned int* pwr_down_mode; int lock; } ;


 int FUNC_0 (struct ad5064_state*,struct iio_chan_spec const*) ;
 struct ad5064_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_0,
 const struct iio_chan_spec *VAR_1, unsigned int VAR_2)
{
 struct ad5064_state *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 FUNC_2(&VAR_3->lock);
 VAR_3->pwr_down_mode[VAR_1->channel] = VAR_2 + 1;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 FUNC_3(&VAR_3->lock);

 return VAR_4;
}
