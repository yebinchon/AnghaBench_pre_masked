
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {TYPE_1__* info; } ;
struct iio_buffer {int dummy; } ;
struct TYPE_2__ {int (* hwfifo_flush_to_buffer ) (struct iio_dev*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*,size_t) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1,
       struct iio_buffer *VAR_2, size_t VAR_3)
{
 if (!VAR_1->info->hwfifo_flush_to_buffer)
  return -VAR_0;

 return VAR_1->info->hwfifo_flush_to_buffer(VAR_1, VAR_3);
}
