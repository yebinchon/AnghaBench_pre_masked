
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radix_tree_root {int dummy; } ;
struct nullb_page {TYPE_1__* page; } ;
struct nullb_device {scalar_t__ curr_cache; struct radix_tree_root data; struct radix_tree_root cache; } ;
struct TYPE_2__ {unsigned long index; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nullb_page*) ;
 struct nullb_page* FUNC_2 (struct radix_tree_root*,unsigned long,struct nullb_page*) ;
 int FUNC_3 (struct radix_tree_root*,void**,unsigned long,int) ;

__attribute__((used)) static void FUNC_4(struct nullb_device *VAR_1, bool VAR_2)
{
 unsigned long VAR_3 = 0;
 int VAR_4;
 struct nullb_page *VAR_5, *VAR_6[VAR_0];
 struct radix_tree_root *VAR_7;

 VAR_7 = VAR_2 ? &VAR_1->cache : &VAR_1->data;

 do {
  int VAR_8;

  VAR_4 = FUNC_3(VAR_7,
    (void **)VAR_6, VAR_3, VAR_0);

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   VAR_3 = VAR_6[VAR_8]->page->index;
   VAR_5 = FUNC_2(VAR_7, VAR_3, VAR_6[VAR_8]);
   FUNC_0(VAR_5 != VAR_6[VAR_8]);
   FUNC_1(VAR_5);
  }

  VAR_3++;
 } while (VAR_4 == VAR_0);

 if (VAR_2)
  VAR_1->curr_cache = 0;
}
