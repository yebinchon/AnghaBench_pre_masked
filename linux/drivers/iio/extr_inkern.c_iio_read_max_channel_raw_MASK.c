
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_channel {TYPE_1__* indio_dev; } ;
struct TYPE_2__ {int info_exist_lock; int info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_channel*,int*,int *,int*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iio_channel *VAR_2, int *VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_1(&VAR_2->indio_dev->info_exist_lock);
 if (!VAR_2->indio_dev->info) {
  VAR_4 = -VAR_0;
  goto err_unlock;
 }

 VAR_4 = FUNC_0(VAR_2, VAR_3, ((void*)0), &VAR_5, VAR_1);
err_unlock:
 FUNC_2(&VAR_2->indio_dev->info_exist_lock);

 return VAR_4;
}
