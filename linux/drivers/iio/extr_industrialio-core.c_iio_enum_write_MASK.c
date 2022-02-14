
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_enum {int (* set ) (struct iio_dev*,struct iio_chan_spec const*,int) ;int num_items; int items; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int) ;

ssize_t FUNC_2(struct iio_dev *VAR_1,
 uintptr_t VAR_2, const struct iio_chan_spec *VAR_3, const char *VAR_4,
 size_t VAR_5)
{
 const struct iio_enum *VAR_6 = (const struct iio_enum *)VAR_2;
 int VAR_7;

 if (!VAR_6->set)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6->items, VAR_6->num_items, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = VAR_6->set(VAR_1, VAR_3, VAR_7);
 return VAR_7 ? VAR_7 : VAR_5;
}
