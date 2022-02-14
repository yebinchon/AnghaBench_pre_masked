
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
typedef int ssize_t ;


 int FUNC_0 (struct iio_dev*,int ,int) ;
 int FUNC_1 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct iio_dev *VAR_0, uintptr_t VAR_1,
 struct iio_chan_spec const *VAR_2, const char *VAR_3, size_t VAR_4)
{
 bool VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_2->channel, VAR_5);
 return VAR_6 ? VAR_6 : VAR_4;
}
