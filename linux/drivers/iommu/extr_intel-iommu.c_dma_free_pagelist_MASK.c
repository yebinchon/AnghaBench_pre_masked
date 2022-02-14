
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct page* freelist; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct page *VAR_0)
{
 struct page *VAR_1;

 while ((VAR_1 = VAR_0)) {
  VAR_0 = VAR_1->freelist;
  FUNC_0(FUNC_1(VAR_1));
 }
}
