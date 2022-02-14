
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct page* freelist; } ;


 struct page* FUNC_0 (void*) ;

__attribute__((used)) static struct page *FUNC_1(unsigned long VAR_0, struct page *VAR_1)
{
 struct page *VAR_2 = FUNC_0((void *)VAR_0);

 VAR_2->freelist = VAR_1;

 return VAR_2;
}
