
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udl_gem_object {struct page** pages; int base; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page**) ;
 int FUNC_1 (struct page**) ;
 struct page** FUNC_2 (int *) ;

int FUNC_3(struct udl_gem_object *VAR_0)
{
 struct page **VAR_1;

 if (VAR_0->pages)
  return 0;

 VAR_1 = FUNC_2(&VAR_0->base);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_0->pages = VAR_1;

 return 0;
}
