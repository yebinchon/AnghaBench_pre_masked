
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct dac5571_data {int powerdown; int (* dac5571_pwrdwn ) (struct dac5571_data*,int ,int ) ;int (* dac5571_cmd ) (struct dac5571_data*,int ,int ) ;int lock; int * val; int powerdown_mode; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 struct dac5571_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int*) ;
 int FUNC_5 (struct dac5571_data*,int ,int ) ;
 int FUNC_6 (struct dac5571_data*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct iio_dev *VAR_0,
           uintptr_t VAR_1,
           const struct iio_chan_spec *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 struct dac5571_data *VAR_5 = FUNC_1(VAR_0);
 bool VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_5->powerdown == VAR_6)
  return VAR_4;

 FUNC_2(&VAR_5->lock);
 if (VAR_6)
  VAR_7 = VAR_5->dac5571_pwrdwn(VAR_5, VAR_2->channel,
       FUNC_0(VAR_5->powerdown_mode));
 else
  VAR_7 = VAR_5->dac5571_cmd(VAR_5, VAR_2->channel, VAR_5->val[0]);
 if (VAR_7)
  goto out;

 VAR_5->powerdown = VAR_6;

 out:
 FUNC_3(&VAR_5->lock);

 return VAR_7 ? VAR_7 : VAR_4;
}
