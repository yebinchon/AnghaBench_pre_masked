
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dev; struct iio_buffer* buffer; } ;
struct iio_chan_spec {scalar_t__ type; int scan_index; } ;
struct iio_buffer {int scan_el_dev_attr_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct iio_chan_spec const*,int *,int *,int ,int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_8,
     const struct iio_chan_spec *VAR_9)
{
 int VAR_10, VAR_11 = 0;
 struct iio_buffer *VAR_12 = VAR_8->buffer;

 VAR_10 = FUNC_0("index",
         VAR_9,
         &VAR_7,
         ((void*)0),
         0,
         VAR_0,
         &VAR_8->dev,
         &VAR_12->scan_el_dev_attr_list);
 if (VAR_10)
  return VAR_10;
 VAR_11++;
 VAR_10 = FUNC_0("type",
         VAR_9,
         &VAR_6,
         ((void*)0),
         0,
         0,
         &VAR_8->dev,
         &VAR_12->scan_el_dev_attr_list);
 if (VAR_10)
  return VAR_10;
 VAR_11++;
 if (VAR_9->type != VAR_1)
  VAR_10 = FUNC_0("en",
          VAR_9,
          &VAR_2,
          &VAR_3,
          VAR_9->scan_index,
          0,
          &VAR_8->dev,
          &VAR_12->scan_el_dev_attr_list);
 else
  VAR_10 = FUNC_0("en",
          VAR_9,
          &VAR_4,
          &VAR_5,
          VAR_9->scan_index,
          0,
          &VAR_8->dev,
          &VAR_12->scan_el_dev_attr_list);
 if (VAR_10)
  return VAR_10;
 VAR_11++;
 VAR_10 = VAR_11;
 return VAR_10;
}
