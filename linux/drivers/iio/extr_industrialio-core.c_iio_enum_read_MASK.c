
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_enum {int (* get ) (struct iio_dev*,struct iio_chan_spec const*) ;int num_items; char** items; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*) ;

ssize_t FUNC_2(struct iio_dev *VAR_2,
 uintptr_t VAR_3, const struct iio_chan_spec *VAR_4, char *VAR_5)
{
 const struct iio_enum *VAR_6 = (const struct iio_enum *)VAR_3;
 int VAR_7;

 if (!VAR_6->get)
  return -VAR_0;

 VAR_7 = VAR_6->get(VAR_2, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;
 else if (VAR_7 >= VAR_6->num_items)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_1, "%s\n", VAR_6->items[VAR_7]);
}
