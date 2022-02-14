
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2632_state {int powerdown_cache_mask; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
typedef int ssize_t ;


 struct ltc2632_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct iio_dev *VAR_0,
       uintptr_t VAR_1,
       const struct iio_chan_spec *VAR_2,
       char *VAR_3)
{
 struct ltc2632_state *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_3, "%d\n",
         !!(VAR_4->powerdown_cache_mask & (1 << VAR_2->channel)));
}
