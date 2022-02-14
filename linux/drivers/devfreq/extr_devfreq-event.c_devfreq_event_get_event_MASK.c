
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct devfreq_event_dev {int lock; TYPE_2__* desc; } ;
struct devfreq_event_data {scalar_t__ load_count; scalar_t__ total_count; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_event ) (struct devfreq_event_dev*,struct devfreq_event_data*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct devfreq_event_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct devfreq_event_dev*,struct devfreq_event_data*) ;

int FUNC_4(struct devfreq_event_dev *VAR_1,
       struct devfreq_event_data *VAR_2)
{
 int VAR_3;

 if (!VAR_1 || !VAR_1->desc)
  return -VAR_0;

 if (!VAR_1->desc->ops || !VAR_1->desc->ops->get_event)
  return -VAR_0;

 if (!FUNC_0(VAR_1))
  return -VAR_0;

 VAR_2->total_count = VAR_2->load_count = 0;

 FUNC_1(&VAR_1->lock);
 VAR_3 = VAR_1->desc->ops->get_event(VAR_1, VAR_2);
 if (VAR_3 < 0)
  VAR_2->total_count = VAR_2->load_count = 0;
 FUNC_2(&VAR_1->lock);

 return VAR_3;
}
