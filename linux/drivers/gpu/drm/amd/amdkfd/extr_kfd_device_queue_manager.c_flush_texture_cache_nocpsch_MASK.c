
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct qcm_process_device {scalar_t__ ib_kaddr; int ib_base; int vmid; TYPE_2__* dqm; } ;
struct packet_manager_funcs {int (* release_mem ) (int ,int *) ;int release_mem_size; } ;
struct kfd_dev {int kgd; } ;
struct TYPE_3__ {struct packet_manager_funcs* pmf; } ;
struct TYPE_4__ {TYPE_1__ packets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct kfd_dev *VAR_2,
    struct qcm_process_device *VAR_3)
{
 const struct packet_manager_funcs *VAR_4 = VAR_3->dqm->packets.pmf;
 int VAR_5;

 if (!VAR_3->ib_kaddr)
  return -VAR_0;

 VAR_5 = VAR_4->release_mem(VAR_3->ib_base, (uint32_t *)VAR_3->ib_kaddr);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_2->kgd, VAR_1, VAR_3->vmid,
    VAR_3->ib_base, (uint32_t *)VAR_3->ib_kaddr,
    VAR_4->release_mem_size / sizeof(uint32_t));
}
