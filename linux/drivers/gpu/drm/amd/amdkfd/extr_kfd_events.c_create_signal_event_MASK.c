
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_process {int signal_mapped_size; int signal_event_count; int signal_event_limit_reached; TYPE_1__* signal_page; } ;
struct kfd_event {size_t event_id; int * user_signal_address; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int * user_address; } ;


 int VAR_0 ;
 int FUNC_0 (struct kfd_process*,struct kfd_event*) ;
 int FUNC_1 (char*,int,size_t,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1,
    struct kfd_process *VAR_2,
    struct kfd_event *VAR_3)
{
 int VAR_4;

 if (VAR_2->signal_mapped_size &&
     VAR_2->signal_event_count == VAR_2->signal_mapped_size / 8) {
  if (!VAR_2->signal_event_limit_reached) {
   FUNC_2("Signal event wasn't created because limit was reached\n");
   VAR_2->signal_event_limit_reached = 1;
  }
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_2("Signal event wasn't created because out of kernel memory\n");
  return VAR_4;
 }

 VAR_2->signal_event_count++;

 VAR_3->user_signal_address = &VAR_2->signal_page->user_address[VAR_3->event_id];
 FUNC_1("Signal event number %zu created with id %d, address %p\n",
   VAR_2->signal_event_count, VAR_3->event_id,
   VAR_3->user_signal_address);

 return 0;
}
