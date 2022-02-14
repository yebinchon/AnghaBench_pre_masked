
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int context; } ;


 struct vm_area_struct* FUNC_0 (struct mm_struct*,unsigned long) ;
 unsigned long FUNC_1 (int *) ;
 unsigned long FUNC_2 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct mm_struct *VAR_0, unsigned long VAR_1,
         unsigned long VAR_2)
{
 struct vm_area_struct *VAR_3;

 if ((FUNC_1(&VAR_0->context) - VAR_2) < VAR_1)
  return 0;
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 return (!VAR_3 || (VAR_1 + VAR_2) <= FUNC_2(VAR_3));
}
