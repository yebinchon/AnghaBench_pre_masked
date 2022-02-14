
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct ib_uverbs_event_queue {int lock; int event_list; int poll_wait; } ;
struct file {int dummy; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct ib_uverbs_event_queue *VAR_2,
      struct file *VAR_3,
      struct poll_table_struct *VAR_4)
{
 __poll_t VAR_5 = 0;

 FUNC_1(VAR_3, &VAR_2->poll_wait, VAR_4);

 FUNC_2(&VAR_2->lock);
 if (!FUNC_0(&VAR_2->event_list))
  VAR_5 = VAR_0 | VAR_1;
 FUNC_3(&VAR_2->lock);

 return VAR_5;
}
