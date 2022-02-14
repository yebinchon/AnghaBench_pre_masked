
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct ib_uverbs_event_file {int lock; int event_list; int poll_wait; } ;
struct file {struct ib_uverbs_event_file* private_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_2,
      struct poll_table_struct *VAR_3)
{
 unsigned int VAR_4 = 0;
 struct ib_uverbs_event_file *VAR_5 = VAR_2->private_data;

 FUNC_1(VAR_2, &VAR_5->poll_wait, VAR_3);

 FUNC_2(&VAR_5->lock);
 if (!FUNC_0(&VAR_5->event_list))
  VAR_4 = VAR_0 | VAR_1;
 FUNC_3(&VAR_5->lock);

 return VAR_4;
}
