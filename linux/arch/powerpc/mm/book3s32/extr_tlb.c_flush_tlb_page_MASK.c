
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct TYPE_2__ {int id; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,unsigned long,int ,int) ;
 struct mm_struct VAR_2 ;
 int FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;

void FUNC_7(struct vm_area_struct *VAR_3, unsigned long VAR_4)
{
 struct mm_struct *VAR_5;
 pmd_t *VAR_6;

 if (!VAR_0) {
  FUNC_0(VAR_4);
  return;
 }
 VAR_5 = (VAR_4 < VAR_1)? VAR_3->vm_mm: &VAR_2;
 VAR_6 = FUNC_4(FUNC_6(FUNC_2(VAR_5, VAR_4), VAR_4), VAR_4);
 if (!FUNC_3(*VAR_6))
  FUNC_1(VAR_5->context.id, VAR_4, FUNC_5(*VAR_6), 1);
}
