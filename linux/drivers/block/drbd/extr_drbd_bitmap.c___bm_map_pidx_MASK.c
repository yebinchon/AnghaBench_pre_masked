
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct drbd_bitmap {struct page** bm_pages; } ;


 scalar_t__ FUNC_0 (struct page*) ;

__attribute__((used)) static unsigned long *FUNC_1(struct drbd_bitmap *VAR_0, unsigned int VAR_1)
{
 struct page *VAR_2 = VAR_0->bm_pages[VAR_1];
 return (unsigned long *) FUNC_0(VAR_2);
}
