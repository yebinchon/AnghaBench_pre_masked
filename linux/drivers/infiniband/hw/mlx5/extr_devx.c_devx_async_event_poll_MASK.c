
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct devx_async_event_file* private_data; } ;
struct devx_async_event_file {int lock; int event_list; scalar_t__ is_destroyed; int poll_wait; } ;
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
 struct devx_async_event_file *VAR_5 = VAR_3->private_data;
 __poll_t VAR_6 = 0;

 FUNC_1(VAR_3, &VAR_5->poll_wait, VAR_4);

 FUNC_2(&VAR_5->lock);
 if (VAR_5->is_destroyed)
  VAR_6 = VAR_0 | VAR_2 | VAR_1;
 else if (!FUNC_0(&VAR_5->event_list))
  VAR_6 = VAR_0 | VAR_2;
 FUNC_3(&VAR_5->lock);

 return VAR_6;
}
