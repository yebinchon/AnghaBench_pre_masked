
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_flags; int vm_page_prot; } ;
struct kfd_process {int pasid; } ;
struct kfd_dev {int kgd; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,unsigned long long,int,int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct kfd_dev *VAR_9, struct kfd_process *VAR_10,
        struct vm_area_struct *VAR_11)
{
 phys_addr_t VAR_12;
 int VAR_13;

 if (VAR_11->vm_end - VAR_11->vm_start != VAR_2)
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_9->kgd);

 VAR_11->vm_flags |= VAR_6 | VAR_3 | VAR_5 | VAR_7 |
    VAR_4 | VAR_8;

 VAR_11->vm_page_prot = FUNC_2(VAR_11->vm_page_prot);

 FUNC_3("Process %d mapping mmio page\n"
   "     target user address == 0x%08llX\n"
   "     physical address    == 0x%08llX\n"
   "     vm_flags            == 0x%04lX\n"
   "     size                == 0x%04lX\n",
   VAR_10->pasid, (unsigned long long) VAR_11->vm_start,
   VAR_12, VAR_11->vm_flags, VAR_2);

 VAR_13 = FUNC_1(VAR_11,
    VAR_11->vm_start,
    VAR_12 >> VAR_1,
    VAR_2,
    VAR_11->vm_page_prot);
 return VAR_13;
}
