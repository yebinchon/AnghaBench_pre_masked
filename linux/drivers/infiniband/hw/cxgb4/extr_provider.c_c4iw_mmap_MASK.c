
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vm_area_struct {int vm_end; int vm_start; int vm_pgoff; void* vm_page_prot; } ;
struct ib_ucontext {int device; } ;
struct c4iw_ucontext {int dummy; } ;
struct TYPE_3__ {int adapter_type; int pdev; } ;
struct c4iw_rdev {int oc_mw_pa; TYPE_1__ lldi; } ;
struct c4iw_mm_entry {int addr; } ;
struct TYPE_4__ {struct c4iw_rdev rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_area_struct*,int,int,int,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct c4iw_mm_entry*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (char*,int,int,int) ;
 int FUNC_7 (struct vm_area_struct*,int,int,int,void*) ;
 struct c4iw_mm_entry* FUNC_8 (struct c4iw_ucontext*,int,int) ;
 void* FUNC_9 (void*) ;
 TYPE_2__* FUNC_10 (int ) ;
 struct c4iw_ucontext* FUNC_11 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_12(struct ib_ucontext *VAR_3, struct vm_area_struct *VAR_4)
{
 int VAR_5 = VAR_4->vm_end - VAR_4->vm_start;
 u32 VAR_6 = VAR_4->vm_pgoff << VAR_1;
 struct c4iw_rdev *VAR_7;
 int VAR_8 = 0;
 struct c4iw_mm_entry *VAR_9;
 struct c4iw_ucontext *VAR_10;
 u64 VAR_11;

 FUNC_6("pgoff 0x%lx key 0x%x len %d\n", VAR_4->vm_pgoff,
   VAR_6, VAR_5);

 if (VAR_4->vm_start & (VAR_2-1))
  return -VAR_0;

 VAR_7 = &(FUNC_10(VAR_3->device)->rdev);
 VAR_10 = FUNC_11(VAR_3);

 VAR_9 = FUNC_8(VAR_10, VAR_6, VAR_5);
 if (!VAR_9)
  return -VAR_0;
 VAR_11 = VAR_9->addr;
 FUNC_2(VAR_9);

 if ((VAR_11 >= FUNC_4(VAR_7->lldi.pdev, 0)) &&
     (VAR_11 < (FUNC_4(VAR_7->lldi.pdev, 0) +
      FUNC_3(VAR_7->lldi.pdev, 0)))) {




  VAR_4->vm_page_prot = FUNC_5(VAR_4->vm_page_prot);
  VAR_8 = FUNC_0(VAR_4, VAR_4->vm_start,
      VAR_11 >> VAR_1,
      VAR_5, VAR_4->vm_page_prot);
 } else if ((VAR_11 >= FUNC_4(VAR_7->lldi.pdev, 2)) &&
     (VAR_11 < (FUNC_4(VAR_7->lldi.pdev, 2) +
      FUNC_3(VAR_7->lldi.pdev, 2)))) {




  if (VAR_11 >= VAR_7->oc_mw_pa)
   VAR_4->vm_page_prot = FUNC_9(VAR_4->vm_page_prot);
  else {
   if (!FUNC_1(VAR_7->lldi.adapter_type))
    VAR_4->vm_page_prot =
     FUNC_9(VAR_4->vm_page_prot);
   else
    VAR_4->vm_page_prot =
     FUNC_5(VAR_4->vm_page_prot);
  }
  VAR_8 = FUNC_0(VAR_4, VAR_4->vm_start,
      VAR_11 >> VAR_1,
      VAR_5, VAR_4->vm_page_prot);
 } else {




  VAR_8 = FUNC_7(VAR_4, VAR_4->vm_start,
          VAR_11 >> VAR_1,
          VAR_5, VAR_4->vm_page_prot);
 }

 return VAR_8;
}
