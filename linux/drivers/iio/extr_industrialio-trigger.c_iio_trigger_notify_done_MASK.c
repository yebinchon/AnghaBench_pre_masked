
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_trigger {TYPE_1__* ops; int use_count; } ;
struct TYPE_2__ {scalar_t__ (* try_reenable ) (struct iio_trigger*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct iio_trigger*) ;
 scalar_t__ FUNC_2 (struct iio_trigger*) ;

void FUNC_3(struct iio_trigger *VAR_0)
{
 if (FUNC_0(&VAR_0->use_count) && VAR_0->ops &&
     VAR_0->ops->try_reenable)
  if (VAR_0->ops->try_reenable(VAR_0))

   FUNC_1(VAR_0);
}
