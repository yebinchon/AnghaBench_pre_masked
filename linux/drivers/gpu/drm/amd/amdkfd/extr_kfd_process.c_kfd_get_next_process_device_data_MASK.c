
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process_device {int per_device_list; } ;
struct kfd_process {int per_device_data; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 struct kfd_process_device* FUNC_1 (struct kfd_process_device*,int ) ;
 int VAR_0 ;

struct kfd_process_device *FUNC_2(
      struct kfd_process *VAR_1,
      struct kfd_process_device *VAR_2)
{
 if (FUNC_0(&VAR_2->per_device_list, &VAR_1->per_device_data))
  return ((void*)0);
 return FUNC_1(VAR_2, VAR_0);
}
