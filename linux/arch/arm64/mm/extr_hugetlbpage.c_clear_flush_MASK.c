
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;


 struct vm_area_struct FUNC_0 (struct mm_struct*,int ) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_2 (struct mm_struct*,unsigned long,int *) ;

__attribute__((used)) static void FUNC_3(struct mm_struct *VAR_0,
        unsigned long VAR_1,
        pte_t *VAR_2,
        unsigned long VAR_3,
        unsigned long VAR_4)
{
 struct vm_area_struct VAR_5 = FUNC_0(VAR_0, 0);
 unsigned long VAR_6, VAR_7 = VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++, VAR_1 += VAR_3, VAR_2++)
  FUNC_2(VAR_0, VAR_1, VAR_2);

 FUNC_1(&VAR_5, VAR_7, VAR_1);
}
