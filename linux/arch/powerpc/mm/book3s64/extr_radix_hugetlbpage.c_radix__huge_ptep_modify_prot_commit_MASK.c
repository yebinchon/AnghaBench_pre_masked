
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct TYPE_2__ {int copros; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pte_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long) ;
 int FUNC_4 (struct mm_struct*,unsigned long,int *,int ) ;

void FUNC_5(struct vm_area_struct *VAR_0,
      unsigned long VAR_1, pte_t *VAR_2,
      pte_t VAR_3, pte_t VAR_4)
{
 struct mm_struct *VAR_5 = VAR_0->vm_mm;





 if (FUNC_1(FUNC_2(VAR_3), FUNC_2(VAR_4)) &&
     (FUNC_0(&VAR_5->context.copros) > 0))
  FUNC_3(VAR_0, VAR_1);

 FUNC_4(VAR_0->vm_mm, VAR_1, VAR_2, VAR_4);
}
