
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resync_pages {struct page** pages; } ;
struct page {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline struct page *FUNC_1(struct resync_pages *VAR_1,
          unsigned VAR_2)
{
 if (FUNC_0(VAR_2 >= VAR_0))
  return ((void*)0);
 return VAR_1->pages[VAR_2];
}
