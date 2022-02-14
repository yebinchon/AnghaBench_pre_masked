
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int info_exist_lock; int mlock; int * info; } ;
struct iio_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*,struct iio_buffer*,struct iio_buffer*) ;
 scalar_t__ FUNC_1 (struct iio_buffer*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct iio_dev *VAR_1,
         struct iio_buffer *VAR_2,
         struct iio_buffer *VAR_3)
{
 int VAR_4;

 if (VAR_2 == VAR_3)
  return 0;

 FUNC_2(&VAR_1->info_exist_lock);
 FUNC_2(&VAR_1->mlock);

 if (VAR_2 && FUNC_1(VAR_2))
  VAR_2 = ((void*)0);

 if (VAR_3 && !FUNC_1(VAR_3))
  VAR_3 = ((void*)0);

 if (!VAR_2 && !VAR_3) {
  VAR_4 = 0;
  goto out_unlock;
 }

 if (VAR_1->info == ((void*)0)) {
  VAR_4 = -VAR_0;
  goto out_unlock;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

out_unlock:
 FUNC_3(&VAR_1->mlock);
 FUNC_3(&VAR_1->info_exist_lock);

 return VAR_4;
}
