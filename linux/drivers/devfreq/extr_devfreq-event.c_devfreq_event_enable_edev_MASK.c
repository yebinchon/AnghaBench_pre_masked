
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct devfreq_event_dev {scalar_t__ enable_count; int lock; TYPE_1__* desc; } ;
struct TYPE_4__ {int (* enable ) (struct devfreq_event_dev*) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct devfreq_event_dev*) ;

int FUNC_3(struct devfreq_event_dev *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1 || !VAR_1->desc)
  return -VAR_0;

 FUNC_0(&VAR_1->lock);
 if (VAR_1->desc->ops && VAR_1->desc->ops->enable
   && VAR_1->enable_count == 0) {
  VAR_2 = VAR_1->desc->ops->enable(VAR_1);
  if (VAR_2 < 0)
   goto err;
 }
 VAR_1->enable_count++;
err:
 FUNC_1(&VAR_1->lock);

 return VAR_2;
}
