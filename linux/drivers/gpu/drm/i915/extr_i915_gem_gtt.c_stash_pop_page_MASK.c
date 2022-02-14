
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t nr; struct page** pages; } ;
struct pagestash {int lock; TYPE_1__ pvec; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct page *FUNC_3(struct pagestash *VAR_0)
{
 struct page *VAR_1 = ((void*)0);

 FUNC_1(&VAR_0->lock);
 if (FUNC_0(VAR_0->pvec.nr))
  VAR_1 = VAR_0->pvec.pages[--VAR_0->pvec.nr];
 FUNC_2(&VAR_0->lock);

 return VAR_1;
}
