
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct dac5571_data {unsigned int powerdown_mode; int (* dac5571_pwrdwn ) (struct dac5571_data*,int ,int ) ;int lock; scalar_t__ powerdown; } ;


 int FUNC_0 (unsigned int) ;
 struct dac5571_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dac5571_data*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0,
          const struct iio_chan_spec *VAR_1,
          unsigned int VAR_2)
{
 struct dac5571_data *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = 0;

 if (VAR_3->powerdown_mode == VAR_2)
  return 0;

 FUNC_2(&VAR_3->lock);
 if (VAR_3->powerdown) {
  VAR_4 = VAR_3->dac5571_pwrdwn(VAR_3, VAR_1->channel,
        FUNC_0(VAR_2));
  if (VAR_4)
   goto out;
 }
 VAR_3->powerdown_mode = VAR_2;

 out:
 FUNC_3(&VAR_3->lock);

 return VAR_4;
}
