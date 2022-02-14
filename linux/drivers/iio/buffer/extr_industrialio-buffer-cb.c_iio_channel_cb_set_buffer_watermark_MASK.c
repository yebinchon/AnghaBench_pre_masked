
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t watermark; } ;
struct iio_cb_buffer {TYPE_1__ buffer; } ;


 int VAR_0 ;

int FUNC_0(struct iio_cb_buffer *VAR_1,
     size_t VAR_2)
{
 if (!VAR_2)
  return -VAR_0;
 VAR_1->buffer.watermark = VAR_2;

 return 0;
}
