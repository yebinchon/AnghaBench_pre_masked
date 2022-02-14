
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_buffer {int pollq; TYPE_1__* access; } ;
struct TYPE_2__ {int (* store_to ) (struct iio_buffer*,void const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct iio_buffer*,void const*) ;
 int FUNC_1 (struct iio_buffer*,void const*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct iio_buffer *VAR_2, const void *VAR_3)
{
 const void *VAR_4 = FUNC_0(VAR_2, VAR_3);
 int VAR_5;

 VAR_5 = VAR_2->access->store_to(VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;





 FUNC_2(&VAR_2->pollq, VAR_0 | VAR_1);
 return 0;
}
