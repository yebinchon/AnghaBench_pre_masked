
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process_device {int dummy; } ;
struct kfd_process {int dummy; } ;
struct kfd_dev {int dummy; } ;


 int VAR_0 ;
 struct kfd_process_device* FUNC_0 (int) ;
 struct kfd_process_device* FUNC_1 (struct kfd_dev*,struct kfd_process*) ;
 int FUNC_2 (struct kfd_process_device*) ;
 int FUNC_3 (struct kfd_process_device*,int *) ;
 int FUNC_4 (char*) ;

struct kfd_process_device *FUNC_5(struct kfd_dev *VAR_1,
       struct kfd_process *VAR_2)
{
 struct kfd_process_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_4("Process device data doesn't exist\n");
  return FUNC_0(-VAR_0);
 }

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return FUNC_0(VAR_4);

 VAR_4 = FUNC_3(VAR_3, ((void*)0));
 if (VAR_4)
  return FUNC_0(VAR_4);

 return VAR_3;
}
