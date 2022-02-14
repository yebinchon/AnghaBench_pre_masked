
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process {int dummy; } ;
struct kfd_ioctl_get_clock_counters_args {int system_clock_freq; int system_clock_counter; int cpu_clock_counter; scalar_t__ gpu_clock_counter; int gpu_id; } ;
struct kfd_dev {int kgd; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct kfd_dev* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0,
    struct kfd_process *VAR_1, void *VAR_2)
{
 struct kfd_ioctl_get_clock_counters_args *VAR_3 = VAR_2;
 struct kfd_dev *VAR_4;

 VAR_4 = FUNC_1(VAR_3->gpu_id);
 if (VAR_4)

  VAR_3->gpu_clock_counter = FUNC_0(VAR_4->kgd);
 else

  VAR_3->gpu_clock_counter = 0;


 VAR_3->cpu_clock_counter = FUNC_3();
 VAR_3->system_clock_counter = FUNC_2();


 VAR_3->system_clock_freq = 1000000000;

 return 0;
}
