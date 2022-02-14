
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_channel {TYPE_2__* indio_dev; TYPE_1__* channel; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;
struct TYPE_4__ {int info_exist_lock; int * info; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct iio_channel *VAR_1, enum iio_chan_type *VAR_2)
{
 int VAR_3 = 0;


 FUNC_0(&VAR_1->indio_dev->info_exist_lock);
 if (VAR_1->indio_dev->info == ((void*)0)) {
  VAR_3 = -VAR_0;
  goto err_unlock;
 }

 *VAR_2 = VAR_1->channel->type;
err_unlock:
 FUNC_1(&VAR_1->indio_dev->info_exist_lock);

 return VAR_3;
}
