
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_kfifo {int kf; int user_lock; } ;
struct iio_buffer {int dummy; } ;


 struct iio_kfifo* FUNC_0 (struct iio_buffer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iio_kfifo*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct iio_buffer *VAR_0)
{
 struct iio_kfifo *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(&VAR_1->user_lock);
 FUNC_1(&VAR_1->kf);
 FUNC_2(VAR_1);
}
