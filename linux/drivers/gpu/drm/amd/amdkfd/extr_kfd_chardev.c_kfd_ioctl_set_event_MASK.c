
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process {int dummy; } ;
struct kfd_ioctl_set_event_args {int event_id; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct kfd_process*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, struct kfd_process *VAR_1,
    void *VAR_2)
{
 struct kfd_ioctl_set_event_args *VAR_3 = VAR_2;

 return FUNC_0(VAR_1, VAR_3->event_id);
}
