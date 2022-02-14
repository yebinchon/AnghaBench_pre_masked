
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iio_channel {TYPE_2__* channel; TYPE_1__* indio_dev; } ;
struct TYPE_6__ {int * scan_mask; int demux_list; int * access; } ;
struct iio_cb_buffer {int (* cb ) (void const*,void*) ;struct iio_channel* channels; TYPE_3__ buffer; TYPE_1__* indio_dev; void* private; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int scan_index; } ;
struct TYPE_4__ {int masklength; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_cb_buffer* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct iio_channel*) ;
 int FUNC_3 (struct iio_channel*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_3 ;
 struct iio_channel* FUNC_7 (struct device*) ;
 int FUNC_8 (struct iio_channel*) ;
 int FUNC_9 (struct iio_cb_buffer*) ;
 struct iio_cb_buffer* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int *) ;

struct iio_cb_buffer *FUNC_12(struct device *VAR_4,
          int (*VAR_5)(const void *VAR_6,
             void *VAR_7),
          void *VAR_8)
{
 int VAR_9;
 struct iio_cb_buffer *VAR_10;
 struct iio_channel *VAR_11;

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return FUNC_0(-VAR_1);

 FUNC_6(&VAR_10->buffer);

 VAR_10->private = VAR_8;
 VAR_10->cb = VAR_5;
 VAR_10->buffer.access = &VAR_3;
 FUNC_1(&VAR_10->buffer.demux_list);

 VAR_10->channels = FUNC_7(VAR_4);
 if (FUNC_2(VAR_10->channels)) {
  VAR_9 = FUNC_3(VAR_10->channels);
  goto error_free_cb_buff;
 }

 VAR_10->indio_dev = VAR_10->channels[0].indio_dev;
 VAR_10->buffer.scan_mask = FUNC_5(VAR_10->indio_dev->masklength,
        VAR_2);
 if (VAR_10->buffer.scan_mask == ((void*)0)) {
  VAR_9 = -VAR_1;
  goto error_release_channels;
 }
 VAR_11 = &VAR_10->channels[0];
 while (VAR_11->indio_dev) {
  if (VAR_11->indio_dev != VAR_10->indio_dev) {
   VAR_9 = -VAR_0;
   goto error_free_scan_mask;
  }
  FUNC_11(VAR_11->channel->scan_index,
   VAR_10->buffer.scan_mask);
  VAR_11++;
 }

 return VAR_10;

error_free_scan_mask:
 FUNC_4(VAR_10->buffer.scan_mask);
error_release_channels:
 FUNC_8(VAR_10->channels);
error_free_cb_buff:
 FUNC_9(VAR_10);
 return FUNC_0(VAR_9);
}
