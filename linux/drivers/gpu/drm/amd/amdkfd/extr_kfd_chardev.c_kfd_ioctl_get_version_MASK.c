
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process {int dummy; } ;
struct kfd_ioctl_get_version_args {int minor_version; int major_version; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, struct kfd_process *VAR_3,
     void *VAR_4)
{
 struct kfd_ioctl_get_version_args *VAR_5 = VAR_4;

 VAR_5->major_version = VAR_0;
 VAR_5->minor_version = VAR_1;

 return 0;
}
