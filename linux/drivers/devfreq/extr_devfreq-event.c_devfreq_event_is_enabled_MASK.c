
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfreq_event_dev {scalar_t__ enable_count; int lock; int desc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct devfreq_event_dev *VAR_0)
{
 bool VAR_1 = 0;

 if (!VAR_0 || !VAR_0->desc)
  return VAR_1;

 FUNC_0(&VAR_0->lock);

 if (VAR_0->enable_count > 0)
  VAR_1 = 1;

 FUNC_1(&VAR_0->lock);

 return VAR_1;
}
