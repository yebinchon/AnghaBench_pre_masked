
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct ib_uverbs_completion_event_file {int ev_queue; } ;
struct file {struct ib_uverbs_completion_event_file* private_data; } ;
typedef int __poll_t ;


 int FUNC_0 (int *,struct file*,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_1(struct file *VAR_0,
           struct poll_table_struct *VAR_1)
{
 struct ib_uverbs_completion_event_file *VAR_2 =
  VAR_0->private_data;

 return FUNC_0(&VAR_2->ev_queue, VAR_0, VAR_1);
}
