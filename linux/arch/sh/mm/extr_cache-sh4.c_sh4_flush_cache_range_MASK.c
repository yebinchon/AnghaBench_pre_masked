
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int vm_mm; } ;
struct flusher_data {unsigned long addr1; unsigned long addr2; struct vm_area_struct* vma; } ;
struct TYPE_3__ {scalar_t__ n_aliases; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_3)
{
 struct flusher_data *VAR_4 = VAR_3;
 struct vm_area_struct *VAR_5;
 unsigned long VAR_6, VAR_7;

 VAR_5 = VAR_4->vma;
 VAR_6 = VAR_4->addr1;
 VAR_7 = VAR_4->addr2;

 if (FUNC_0(FUNC_3(), VAR_5->vm_mm) == VAR_0)
  return;





 if (VAR_2.dcache.n_aliases == 0)
  return;

 FUNC_1();

 if (VAR_5->vm_flags & VAR_1)
  FUNC_2();
}
