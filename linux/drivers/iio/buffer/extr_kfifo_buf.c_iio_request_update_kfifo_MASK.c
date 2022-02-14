
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int bytes_per_datum; } ;
struct iio_kfifo {int update_needed; int user_lock; int kf; TYPE_1__ buffer; } ;
struct iio_buffer {int dummy; } ;


 int FUNC_0 (struct iio_kfifo*,int ,int ) ;
 struct iio_kfifo* FUNC_1 (struct iio_buffer*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_buffer *VAR_0)
{
 int VAR_1 = 0;
 struct iio_kfifo *VAR_2 = FUNC_1(VAR_0);

 FUNC_4(&VAR_2->user_lock);
 if (VAR_2->update_needed) {
  FUNC_2(&VAR_2->kf);
  VAR_1 = FUNC_0(VAR_2, VAR_2->buffer.bytes_per_datum,
       VAR_2->buffer.length);
  if (VAR_1 >= 0)
   VAR_2->update_needed = 0;
 } else {
  FUNC_3(&VAR_2->kf);
 }
 FUNC_5(&VAR_2->user_lock);

 return VAR_1;
}
