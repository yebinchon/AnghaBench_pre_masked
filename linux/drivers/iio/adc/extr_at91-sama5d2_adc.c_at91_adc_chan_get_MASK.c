
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {struct iio_chan_spec const* channels; } ;
struct iio_chan_spec {int dummy; } ;


 int FUNC_0 (struct iio_dev*,int) ;

__attribute__((used)) static inline struct iio_chan_spec const *
FUNC_1(struct iio_dev *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 < 0)
  return ((void*)0);
 return VAR_0->channels + VAR_2;
}
