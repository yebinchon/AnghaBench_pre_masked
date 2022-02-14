
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int pgd; } ;


 int FUNC_0 (struct mm_struct*,int ,int (*) (struct mm_struct*,struct page*,int),unsigned long) ;

__attribute__((used)) static int FUNC_1(struct mm_struct *VAR_0,
   int (*VAR_1)(struct mm_struct *VAR_2, struct page *,
        enum pt_level),
   unsigned long VAR_3)
{
 return FUNC_0(VAR_0, VAR_0->pgd, VAR_1, VAR_3);
}
