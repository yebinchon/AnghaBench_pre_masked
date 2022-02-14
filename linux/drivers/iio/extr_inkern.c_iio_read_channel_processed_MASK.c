
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_channel {TYPE_1__* indio_dev; int channel; } ;
struct TYPE_2__ {int info_exist_lock; int * info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iio_channel*,int*,int *,int ) ;
 int FUNC_2 (struct iio_channel*,int,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct iio_channel *VAR_3, int *VAR_4)
{
 int VAR_5;

 FUNC_3(&VAR_3->indio_dev->info_exist_lock);
 if (VAR_3->indio_dev->info == ((void*)0)) {
  VAR_5 = -VAR_0;
  goto err_unlock;
 }

 if (FUNC_0(VAR_3->channel, VAR_1)) {
  VAR_5 = FUNC_1(VAR_3, VAR_4, ((void*)0),
           VAR_1);
 } else {
  VAR_5 = FUNC_1(VAR_3, VAR_4, ((void*)0), VAR_2);
  if (VAR_5 < 0)
   goto err_unlock;
  VAR_5 = FUNC_2(VAR_3, *VAR_4, VAR_4, 1);
 }

err_unlock:
 FUNC_4(&VAR_3->indio_dev->info_exist_lock);

 return VAR_5;
}
