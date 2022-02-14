
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct msc {unsigned long nr_pages; scalar_t__ base; } ;


 unsigned long VAR_0 ;
 struct page* FUNC_0 (scalar_t__) ;

__attribute__((used)) static struct page *FUNC_1(struct msc *VAR_1,
            unsigned long VAR_2)
{
 if (VAR_2 >= VAR_1->nr_pages)
  return ((void*)0);

 return FUNC_0(VAR_1->base + (VAR_2 << VAR_0));
}
