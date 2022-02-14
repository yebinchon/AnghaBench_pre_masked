
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process {int mutex; int pqm; int pasid; } ;
struct kfd_ioctl_destroy_queue_args {int queue_id; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, struct kfd_process *VAR_1,
     void *VAR_2)
{
 int VAR_3;
 struct kfd_ioctl_destroy_queue_args *VAR_4 = VAR_2;

 FUNC_3("Destroying queue id %d for pasid %d\n",
    VAR_4->queue_id,
    VAR_1->pasid);

 FUNC_0(&VAR_1->mutex);

 VAR_3 = FUNC_2(&VAR_1->pqm, VAR_4->queue_id);

 FUNC_1(&VAR_1->mutex);
 return VAR_3;
}
