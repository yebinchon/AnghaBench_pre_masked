
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel {int channel; int indio_dev; } ;
struct iio_chan_spec_ext_info {int private; int (* write ) (int ,int ,int ,char const*,size_t) ;} ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_chan_spec_ext_info* FUNC_0 (struct iio_channel*,char const*) ;
 int FUNC_1 (int ,int ,int ,char const*,size_t) ;

ssize_t FUNC_2(struct iio_channel *VAR_1, const char *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 const struct iio_chan_spec_ext_info *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 return VAR_5->write(VAR_1->indio_dev, VAR_5->private,
          VAR_1->channel, VAR_3, VAR_4);
}
