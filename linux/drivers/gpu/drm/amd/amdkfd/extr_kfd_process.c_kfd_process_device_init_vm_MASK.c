
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process_device {int * vm; struct file* drm_file; struct kfd_dev* dev; struct kfd_process* process; } ;
struct kfd_process {int ef; int kgd_process_info; int pasid; } ;
struct kfd_dev {int kgd; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct file*,int ,int **,int *,int *) ;
 int FUNC_1 (int ,int ,int **,int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kfd_process_device*) ;
 int FUNC_5 (struct kfd_process_device*) ;
 int FUNC_6 (struct kfd_process_device*) ;
 int FUNC_7 (char*) ;

int FUNC_8(struct kfd_process_device *VAR_1,
          struct file *VAR_2)
{
 struct kfd_process *VAR_3;
 struct kfd_dev *VAR_4;
 int VAR_5;

 if (VAR_1->vm)
  return VAR_2 ? -VAR_0 : 0;

 VAR_3 = VAR_1->process;
 VAR_4 = VAR_1->dev;

 if (VAR_2)
  VAR_5 = FUNC_0(
   VAR_4->kgd, VAR_2, VAR_3->pasid,
   &VAR_1->vm, &VAR_3->kgd_process_info, &VAR_3->ef);
 else
  VAR_5 = FUNC_1(VAR_4->kgd, VAR_3->pasid,
   &VAR_1->vm, &VAR_3->kgd_process_info, &VAR_3->ef);
 if (VAR_5) {
  FUNC_7("Failed to create process VM object\n");
  return VAR_5;
 }

 FUNC_3(VAR_1->vm);

 VAR_5 = FUNC_6(VAR_1);
 if (VAR_5)
  goto err_reserve_ib_mem;
 VAR_5 = FUNC_5(VAR_1);
 if (VAR_5)
  goto err_init_cwsr;

 VAR_1->drm_file = VAR_2;

 return 0;

err_init_cwsr:
err_reserve_ib_mem:
 FUNC_4(VAR_1);
 if (!VAR_2)
  FUNC_2(VAR_4->kgd, VAR_1->vm);
 VAR_1->vm = ((void*)0);

 return VAR_5;
}
