
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct devfreq_event_dev {int lock; TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_event ) (struct devfreq_event_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devfreq_event_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct devfreq_event_dev*) ;

int FUNC_4(struct devfreq_event_dev *VAR_2)
{
 int VAR_3;

 if (!VAR_2 || !VAR_2->desc)
  return -VAR_0;

 if (!VAR_2->desc->ops || !VAR_2->desc->ops->set_event)
  return -VAR_0;

 if (!FUNC_0(VAR_2))
  return -VAR_1;

 FUNC_1(&VAR_2->lock);
 VAR_3 = VAR_2->desc->ops->set_event(VAR_2);
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
