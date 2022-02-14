
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int async_queue; } ;
struct ib_uverbs_completion_event_file {TYPE_1__ ev_queue; } ;
struct file {struct ib_uverbs_completion_event_file* private_data; } ;


 int FUNC_0 (int,struct file*,int,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct file *VAR_1, int VAR_2)
{
 struct ib_uverbs_completion_event_file *VAR_3 =
  VAR_1->private_data;

 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->ev_queue.async_queue);
}
