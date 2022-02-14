
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pud_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct page* FUNC_0 (int ) ;

struct page *
FUNC_1(struct mm_struct *VAR_3, unsigned long VAR_4,
  pud_t *VAR_5, int VAR_6)
{
 if (VAR_6 & VAR_0)
  return ((void*)0);

 return FUNC_0(*VAR_5) + ((VAR_4 & ~VAR_2) >> VAR_1);
}
