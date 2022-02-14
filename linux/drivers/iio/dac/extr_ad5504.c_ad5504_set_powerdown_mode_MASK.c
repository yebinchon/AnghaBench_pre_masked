
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad5504_state {unsigned int pwr_down_mode; } ;


 struct ad5504_state* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_0,
 const struct iio_chan_spec *VAR_1, unsigned int VAR_2)
{
 struct ad5504_state *VAR_3 = FUNC_0(VAR_0);

 VAR_3->pwr_down_mode = VAR_2;

 return 0;
}
