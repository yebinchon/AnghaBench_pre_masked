
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad5272_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {int max_pos; int shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (struct ad5272_data*,int ,int) ;
 struct ad5272_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int VAR_5, int VAR_6, long VAR_7)
{
 struct ad5272_data *VAR_8 = FUNC_1(VAR_3);

 if (VAR_7 != VAR_2)
  return -VAR_1;

 if (VAR_5 >= VAR_8->cfg->max_pos || VAR_5 < 0 || VAR_6)
  return -VAR_1;

 return FUNC_0(VAR_8, VAR_0, VAR_5 << VAR_8->cfg->shift);
}
