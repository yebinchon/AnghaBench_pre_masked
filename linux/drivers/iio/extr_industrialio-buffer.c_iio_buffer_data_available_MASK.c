
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_buffer {TYPE_1__* access; } ;
struct TYPE_2__ {size_t (* data_available ) (struct iio_buffer*) ;} ;


 size_t FUNC_0 (struct iio_buffer*) ;

__attribute__((used)) static size_t FUNC_1(struct iio_buffer *VAR_0)
{
 return VAR_0->access->data_available(VAR_0);
}
