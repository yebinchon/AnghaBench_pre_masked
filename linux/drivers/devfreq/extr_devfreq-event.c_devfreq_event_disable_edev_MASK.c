
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct devfreq_event_dev {int enable_count; int lock; TYPE_2__* desc; int dev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* disable ) (struct devfreq_event_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct devfreq_event_dev*) ;

int FUNC_4(struct devfreq_event_dev *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2 || !VAR_2->desc)
  return -VAR_0;

 FUNC_1(&VAR_2->lock);
 if (VAR_2->enable_count <= 0) {
  FUNC_0(&VAR_2->dev, "unbalanced enable_count\n");
  VAR_3 = -VAR_1;
  goto err;
 }

 if (VAR_2->desc->ops && VAR_2->desc->ops->disable
   && VAR_2->enable_count == 1) {
  VAR_3 = VAR_2->desc->ops->disable(VAR_2);
  if (VAR_3 < 0)
   goto err;
 }
 VAR_2->enable_count--;
err:
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
