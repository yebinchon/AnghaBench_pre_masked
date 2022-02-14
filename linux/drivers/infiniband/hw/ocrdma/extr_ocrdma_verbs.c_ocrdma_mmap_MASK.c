
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; int vm_start; int vm_flags; int vm_page_prot; } ;
struct ocrdma_ucontext {int dummy; } ;
struct TYPE_2__ {unsigned long db_total_size; unsigned long db_page_size; unsigned long dpp_unmapped_len; scalar_t__ dpp_unmapped_addr; scalar_t__ unmapped_db; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;
struct ib_ucontext {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocrdma_dev* FUNC_0 (int ) ;
 struct ocrdma_ucontext* FUNC_1 (struct ib_ucontext*) ;
 int FUNC_2 (struct vm_area_struct*,int,unsigned long,unsigned long,int ) ;
 int FUNC_3 (struct ocrdma_ucontext*,unsigned long,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct vm_area_struct*,int,unsigned long,unsigned long,int ) ;

int FUNC_7(struct ib_ucontext *VAR_5, struct vm_area_struct *VAR_6)
{
 struct ocrdma_ucontext *VAR_7 = FUNC_1(VAR_5);
 struct ocrdma_dev *VAR_8 = FUNC_0(VAR_5->device);
 unsigned long VAR_9 = VAR_6->vm_pgoff << VAR_2;
 u64 VAR_10 = (u64) VAR_8->nic_info.unmapped_db;
 unsigned long VAR_11 = (VAR_6->vm_end - VAR_6->vm_start);
 int VAR_12;
 bool VAR_13;

 if (VAR_6->vm_start & (VAR_3 - 1))
  return -VAR_0;
 VAR_13 = FUNC_3(VAR_7, VAR_6->vm_pgoff << VAR_2, VAR_11);
 if (!VAR_13)
  return -VAR_0;

 if ((VAR_9 >= VAR_10) && (VAR_9 <= (VAR_10 +
  VAR_8->nic_info.db_total_size)) &&
  (VAR_11 <= VAR_8->nic_info.db_page_size)) {
  if (VAR_6->vm_flags & VAR_4)
   return -VAR_1;

  VAR_6->vm_page_prot = FUNC_4(VAR_6->vm_page_prot);
  VAR_12 = FUNC_2(VAR_6, VAR_6->vm_start, VAR_6->vm_pgoff,
         VAR_11, VAR_6->vm_page_prot);
 } else if (VAR_8->nic_info.dpp_unmapped_len &&
  (VAR_9 >= (u64) VAR_8->nic_info.dpp_unmapped_addr) &&
  (VAR_9 <= (u64) (VAR_8->nic_info.dpp_unmapped_addr +
   VAR_8->nic_info.dpp_unmapped_len)) &&
  (VAR_11 <= VAR_8->nic_info.dpp_unmapped_len)) {
  if (VAR_6->vm_flags & VAR_4)
   return -VAR_1;

  VAR_6->vm_page_prot = FUNC_5(VAR_6->vm_page_prot);
  VAR_12 = FUNC_2(VAR_6, VAR_6->vm_start, VAR_6->vm_pgoff,
         VAR_11, VAR_6->vm_page_prot);
 } else {
  VAR_12 = FUNC_6(VAR_6, VAR_6->vm_start,
      VAR_6->vm_pgoff, VAR_11, VAR_6->vm_page_prot);
 }
 return VAR_12;
}
