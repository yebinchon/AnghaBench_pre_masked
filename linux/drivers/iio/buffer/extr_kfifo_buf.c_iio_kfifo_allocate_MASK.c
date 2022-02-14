
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_buffer {int length; int * access; } ;
struct iio_kfifo {int update_needed; struct iio_buffer buffer; int user_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_buffer*) ;
 int VAR_1 ;
 struct iio_kfifo* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

struct iio_buffer *FUNC_3(void)
{
 struct iio_kfifo *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->update_needed = 1;
 FUNC_0(&VAR_2->buffer);
 VAR_2->buffer.access = &VAR_1;
 VAR_2->buffer.length = 2;
 FUNC_2(&VAR_2->user_lock);

 return &VAR_2->buffer;
}
