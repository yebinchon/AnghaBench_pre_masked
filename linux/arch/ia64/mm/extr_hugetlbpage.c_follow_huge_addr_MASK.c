
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ VAR_4 ;
 int * FUNC_2 (struct mm_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct page* FUNC_4 (int ) ;

struct page *FUNC_5(struct mm_struct *VAR_5, unsigned long VAR_6, int VAR_7)
{
 struct page *VAR_8;
 pte_t *VAR_9;

 if (FUNC_1(VAR_6) != VAR_4)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_2);
 if (!VAR_9 || FUNC_3(*VAR_9))
  return ((void*)0);
 VAR_8 = FUNC_4(*VAR_9);
 VAR_8 += ((VAR_6 & ~VAR_1) >> VAR_3);
 return VAR_8;
}
