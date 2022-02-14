
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_kfifo {int kf; } ;
struct iio_buffer {int dummy; } ;


 int VAR_0 ;
 struct iio_kfifo* FUNC_0 (struct iio_buffer*) ;
 int FUNC_1 (int *,void const*,int) ;

__attribute__((used)) static int FUNC_2(struct iio_buffer *VAR_1,
         const void *VAR_2)
{
 int VAR_3;
 struct iio_kfifo *VAR_4 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1(&VAR_4->kf, VAR_2, 1);
 if (VAR_3 != 1)
  return -VAR_0;
 return 0;
}
