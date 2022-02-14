
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_kfifo {int user_lock; int kf; } ;
struct iio_buffer {int dummy; } ;


 struct iio_kfifo* FUNC_0 (struct iio_buffer*) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static size_t FUNC_4(struct iio_buffer *VAR_0)
{
 struct iio_kfifo *VAR_1 = FUNC_0(VAR_0);
 size_t VAR_2;

 FUNC_2(&VAR_1->user_lock);
 VAR_2 = FUNC_1(&VAR_1->kf);
 FUNC_3(&VAR_1->user_lock);

 return VAR_2;
}
