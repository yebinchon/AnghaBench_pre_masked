
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct devx_async_cmd_event_file* private_data; } ;
struct devx_async_event_queue {int lock; int event_list; scalar_t__ is_destroyed; int poll_wait; } ;
struct devx_async_cmd_event_file {struct devx_async_event_queue ev_queue; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_3,
           struct poll_table_struct *VAR_4)
{
 struct devx_async_cmd_event_file *VAR_5 = VAR_3->private_data;
 struct devx_async_event_queue *VAR_6 = &VAR_5->ev_queue;
 __poll_t VAR_7 = 0;

 FUNC_1(VAR_3, &VAR_6->poll_wait, VAR_4);

 FUNC_2(&VAR_6->lock);
 if (VAR_6->is_destroyed)
  VAR_7 = VAR_0 | VAR_2 | VAR_1;
 else if (!FUNC_0(&VAR_6->event_list))
  VAR_7 = VAR_0 | VAR_2;
 FUNC_3(&VAR_6->lock);

 return VAR_7;
}
