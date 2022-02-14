
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct cpa_data {int flags; unsigned long* vaddr; struct page** pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static unsigned long FUNC_3(struct cpa_data *VAR_3, unsigned long VAR_4)
{
 if (VAR_3->flags & VAR_1) {
  struct page *VAR_5 = VAR_3->pages[VAR_4];

  if (FUNC_2(FUNC_0(VAR_5)))
   return 0;

  return (unsigned long)FUNC_1(VAR_5);
 }

 if (VAR_3->flags & VAR_0)
  return VAR_3->vaddr[VAR_4];

 return *VAR_3->vaddr + VAR_4 * VAR_2;
}
