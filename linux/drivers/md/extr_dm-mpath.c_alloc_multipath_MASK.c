
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {struct dm_target* ti; int queue_mode; int work_mutex; int trigger_event; int nr_valid_paths; int lock; int priority_groups; } ;
struct dm_target {struct multipath* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 struct multipath* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

__attribute__((used)) static struct multipath *FUNC_6(struct dm_target *VAR_3)
{
 struct multipath *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (VAR_4) {
  FUNC_0(&VAR_4->priority_groups);
  FUNC_5(&VAR_4->lock);
  FUNC_2(&VAR_4->nr_valid_paths, 0);
  FUNC_1(&VAR_4->trigger_event, VAR_2);
  FUNC_4(&VAR_4->work_mutex);

  VAR_4->queue_mode = VAR_0;

  VAR_4->ti = VAR_3;
  VAR_3->private = VAR_4;
 }

 return VAR_4;
}
