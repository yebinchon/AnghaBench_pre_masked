
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct ad5064_state {int* pwr_down_mode; } ;


 struct ad5064_state* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_0,
 const struct iio_chan_spec *VAR_1)
{
 struct ad5064_state *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->pwr_down_mode[VAR_1->channel] - 1;
}
