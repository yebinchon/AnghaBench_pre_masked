
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel {int channel; int indio_dev; } ;
struct iio_chan_spec_ext_info {int private; int (* read ) (int ,int ,int ,char*) ;} ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_chan_spec_ext_info* FUNC_0 (struct iio_channel*,char const*) ;
 int FUNC_1 (int ,int ,int ,char*) ;

ssize_t FUNC_2(struct iio_channel *VAR_1,
      const char *VAR_2, char *VAR_3)
{
 const struct iio_chan_spec_ext_info *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 return VAR_4->read(VAR_1->indio_dev, VAR_4->private,
         VAR_1->channel, VAR_3);
}
