
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_buffer {unsigned int length; unsigned int watermark; } ;



int FUNC_0(struct iio_buffer *VAR_0, unsigned int VAR_1)
{

 if (VAR_1 < 2)
  VAR_1 = 2;
 VAR_0->length = VAR_1;
 VAR_0->watermark = VAR_1 / 2;

 return 0;
}
