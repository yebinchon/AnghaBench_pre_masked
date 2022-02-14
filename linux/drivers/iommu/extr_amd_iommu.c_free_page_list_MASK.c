
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct page* freelist; } ;


 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct page *VAR_0)
{
 while (VAR_0 != ((void*)0)) {
  unsigned long VAR_1 = (unsigned long)FUNC_1(VAR_0);
  VAR_0 = VAR_0->freelist;
  FUNC_0(VAR_1);
 }
}
