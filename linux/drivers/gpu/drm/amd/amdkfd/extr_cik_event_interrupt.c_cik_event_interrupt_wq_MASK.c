
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kfd_vm_fault_info {unsigned int vmid; int status; int page_addr; } ;
struct kfd_dev {int kgd; int dqm; } ;
struct cik_ih_ring_entry {int data; int ring_id; scalar_t__ source_id; } ;
typedef int info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,struct kfd_vm_fault_info*) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (unsigned int,int,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct kfd_dev*,unsigned int,struct kfd_vm_fault_info*) ;
 int FUNC_5 (struct kfd_vm_fault_info*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct kfd_dev *VAR_6,
     const uint32_t *VAR_7)
{
 const struct cik_ih_ring_entry *VAR_8 =
   (const struct cik_ih_ring_entry *)VAR_7;
 uint32_t VAR_9 = VAR_8->data & 0xfffffff;
 unsigned int VAR_10 = (VAR_8->ring_id & 0x0000ff00) >> 8;
 unsigned int VAR_11 = (VAR_8->ring_id & 0xffff0000) >> 16;

 if (VAR_11 == 0)
  return;

 if (VAR_8->source_id == VAR_1)
  FUNC_2(VAR_11, VAR_9, 28);
 else if (VAR_8->source_id == VAR_4)
  FUNC_2(VAR_11, VAR_9, 28);
 else if (VAR_8->source_id == VAR_5)
  FUNC_2(VAR_11, VAR_9 & 0xff, 8);
 else if (VAR_8->source_id == VAR_0)
  FUNC_3(VAR_11);
 else if (VAR_8->source_id == VAR_3 ||
  VAR_8->source_id == VAR_2) {
  struct kfd_vm_fault_info VAR_12;

  FUNC_1(VAR_6->dqm, VAR_11);

  FUNC_5(&VAR_12, 0, sizeof(VAR_12));
  FUNC_0(VAR_6->kgd, &VAR_12);
  if (!VAR_12.page_addr && !VAR_12.status)
   return;

  if (VAR_12.vmid == VAR_10)
   FUNC_4(VAR_6, VAR_11, &VAR_12);
  else
   FUNC_4(VAR_6, VAR_11, ((void*)0));
 }
}
