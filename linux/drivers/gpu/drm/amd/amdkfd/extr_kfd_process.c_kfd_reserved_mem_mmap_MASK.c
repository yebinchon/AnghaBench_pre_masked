
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_flags; int vm_page_prot; } ;
struct qcm_process_device {void* cwsr_kaddr; } ;
struct kfd_process_device {struct qcm_process_device qpd; } ;
struct kfd_process {int dummy; } ;
struct kfd_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (scalar_t__) ;
 struct kfd_process_device* FUNC_4 (struct kfd_dev*,struct kfd_process*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct vm_area_struct*,scalar_t__,int ,scalar_t__,int ) ;

int FUNC_7(struct kfd_dev *VAR_11, struct kfd_process *VAR_12,
     struct vm_area_struct *VAR_13)
{
 struct kfd_process_device *VAR_14;
 struct qcm_process_device *VAR_15;

 if ((VAR_13->vm_end - VAR_13->vm_start) != VAR_3) {
  FUNC_5("Incorrect CWSR mapping size.\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_4(VAR_11, VAR_12);
 if (!VAR_14)
  return -VAR_0;
 VAR_15 = &VAR_14->qpd;

 VAR_15->cwsr_kaddr = (void *)FUNC_1(VAR_2 | VAR_10,
     FUNC_3(VAR_3));
 if (!VAR_15->cwsr_kaddr) {
  FUNC_5("Error allocating per process CWSR buffer.\n");
  return -VAR_1;
 }

 VAR_13->vm_flags |= VAR_7 | VAR_4 | VAR_6
  | VAR_8 | VAR_5 | VAR_9;

 return FUNC_6(VAR_13, VAR_13->vm_start,
          FUNC_0(FUNC_2(VAR_15->cwsr_kaddr)),
          VAR_3, VAR_13->vm_page_prot);
}
