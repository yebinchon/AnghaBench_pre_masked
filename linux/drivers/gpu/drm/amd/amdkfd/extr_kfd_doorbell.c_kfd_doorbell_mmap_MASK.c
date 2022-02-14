
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_flags; int vm_page_prot; } ;
struct kfd_process {int dummy; } ;
struct kfd_dev {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vm_area_struct*,scalar_t__,int,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct kfd_dev*) ;
 int FUNC_2 (struct kfd_dev*,struct kfd_process*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,unsigned long long,int,int,scalar_t__) ;

int FUNC_5(struct kfd_dev *VAR_8, struct kfd_process *VAR_9,
        struct vm_area_struct *VAR_10)
{
 phys_addr_t VAR_11;





 if (VAR_10->vm_end - VAR_10->vm_start != FUNC_1(VAR_8))
  return -VAR_0;


 VAR_11 = FUNC_2(VAR_8, VAR_9);

 VAR_10->vm_flags |= VAR_5 | VAR_2 | VAR_4 | VAR_6 |
    VAR_3 | VAR_7;

 VAR_10->vm_page_prot = FUNC_3(VAR_10->vm_page_prot);

 FUNC_4("Mapping doorbell page\n"
   "     target user address == 0x%08llX\n"
   "     physical address    == 0x%08llX\n"
   "     vm_flags            == 0x%04lX\n"
   "     size                == 0x%04lX\n",
   (unsigned long long) VAR_10->vm_start, VAR_11, VAR_10->vm_flags,
   FUNC_1(VAR_8));


 return FUNC_0(VAR_10,
    VAR_10->vm_start,
    VAR_11 >> VAR_1,
    FUNC_1(VAR_8),
    VAR_10->vm_page_prot);
}
