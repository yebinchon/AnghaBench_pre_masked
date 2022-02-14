
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfreq_event_dev {int dev; int node; int enable_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct devfreq_event_dev *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 FUNC_0(VAR_2->enable_count);

 FUNC_3(&VAR_1);
 FUNC_2(&VAR_2->node);
 FUNC_4(&VAR_1);

 FUNC_1(&VAR_2->dev);

 return 0;
}
