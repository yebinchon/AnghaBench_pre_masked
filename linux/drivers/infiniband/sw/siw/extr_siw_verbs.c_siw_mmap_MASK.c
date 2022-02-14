
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; int vm_end; int vm_start; } ;
struct siw_uobj {int addr; } ;
struct siw_ucontext {TYPE_1__* sdev; } ;
struct ib_ucontext {int dummy; } ;
struct TYPE_2__ {int base_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct vm_area_struct*,int ,int ) ;
 int FUNC_2 (int *,char*,unsigned long,int) ;
 struct siw_uobj* FUNC_3 (struct siw_ucontext*,unsigned long,int) ;
 struct siw_ucontext* FUNC_4 (struct ib_ucontext*) ;

int FUNC_5(struct ib_ucontext *VAR_2, struct vm_area_struct *VAR_3)
{
 struct siw_ucontext *VAR_4 = FUNC_4(VAR_2);
 struct siw_uobj *VAR_5;
 unsigned long VAR_6 = VAR_3->vm_pgoff;
 int VAR_7 = VAR_3->vm_end - VAR_3->vm_start;
 int VAR_8 = -VAR_0;




 if (VAR_3->vm_start & (VAR_1 - 1)) {
  FUNC_0("siw: mmap not page aligned\n");
  goto out;
 }
 VAR_5 = FUNC_3(VAR_4, VAR_6, VAR_7);
 if (!VAR_5) {
  FUNC_2(&VAR_4->sdev->base_dev, "mmap lookup failed: %lu, %u\n",
   VAR_6, VAR_7);
  goto out;
 }
 VAR_8 = FUNC_1(VAR_3, VAR_5->addr, 0);
 if (VAR_8)
  FUNC_0("remap_vmalloc_range failed: %lu, %u\n", VAR_6, VAR_7);
out:
 return VAR_8;
}
