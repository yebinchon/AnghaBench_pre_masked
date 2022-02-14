
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct devfreq_event_dev {int lock; TYPE_1__* desc; } ;
struct TYPE_4__ {int (* reset ) (struct devfreq_event_dev*) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devfreq_event_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct devfreq_event_dev*) ;

int FUNC_4(struct devfreq_event_dev *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2 || !VAR_2->desc)
  return -VAR_0;

 if (!FUNC_0(VAR_2))
  return -VAR_1;

 FUNC_1(&VAR_2->lock);
 if (VAR_2->desc->ops && VAR_2->desc->ops->reset)
  VAR_3 = VAR_2->desc->ops->reset(VAR_2);
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
