
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ,int) ;
 int FUNC_1 (struct page*,int) ;
 scalar_t__ FUNC_2 (struct page*) ;

unsigned long *FUNC_3(struct mm_struct *VAR_1)
{
 struct page *VAR_2 = FUNC_0(VAR_0, 2);

 if (!VAR_2)
  return ((void*)0);
 FUNC_1(VAR_2, 2);
 return (unsigned long *) FUNC_2(VAR_2);
}
