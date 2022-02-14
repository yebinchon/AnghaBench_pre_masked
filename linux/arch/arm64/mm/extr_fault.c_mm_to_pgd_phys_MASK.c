
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int pgd; } ;


 unsigned long FUNC_0 (int ) ;
 struct mm_struct VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct mm_struct *VAR_1)
{

 if (VAR_1 == &VAR_0)
  return FUNC_0(VAR_1->pgd);

 return (unsigned long)FUNC_1(VAR_1->pgd);
}
