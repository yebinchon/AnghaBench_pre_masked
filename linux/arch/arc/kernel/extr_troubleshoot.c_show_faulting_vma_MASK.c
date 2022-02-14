
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_end; scalar_t__ vm_file; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (scalar_t__,char*,int) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_3)
{
 struct vm_area_struct *VAR_4;
 struct mm_struct *VAR_5 = VAR_2->active_mm;




 FUNC_1(&VAR_5->mmap_sem);
 VAR_4 = FUNC_3(VAR_5, VAR_3);




 if (VAR_4 && (VAR_4->vm_start <= VAR_3)) {
  char VAR_6[VAR_0];
  char *VAR_7 = "?";

  if (VAR_4->vm_file) {
   VAR_7 = FUNC_2(VAR_4->vm_file, VAR_6, VAR_0-1);
   if (FUNC_0(VAR_7))
    VAR_7 = "?";
  }
  FUNC_4("    @off 0x%lx in [%s]\n"
   "    VMA: 0x%08lx to 0x%08lx\n",
   VAR_4->vm_start < VAR_1 ?
    VAR_3 : VAR_3 - VAR_4->vm_start,
   VAR_7, VAR_4->vm_start, VAR_4->vm_end);
 } else
  FUNC_4("    @No matching VMA found\n");

 FUNC_5(&VAR_5->mmap_sem);
}
