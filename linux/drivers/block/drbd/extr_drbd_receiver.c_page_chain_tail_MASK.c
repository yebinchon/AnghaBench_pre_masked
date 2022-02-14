
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 struct page* FUNC_0 (struct page*) ;

__attribute__((used)) static struct page *FUNC_1(struct page *VAR_0, int *VAR_1)
{
 struct page *VAR_2;
 int VAR_3 = 1;
 while ((VAR_2 = FUNC_0(VAR_0)))
  ++VAR_3, VAR_0 = VAR_2;
 if (VAR_1)
  *VAR_1 = VAR_3;
 return VAR_0;
}
