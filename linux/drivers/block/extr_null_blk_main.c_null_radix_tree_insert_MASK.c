
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct radix_tree_root {int dummy; } ;
struct nullb_page {TYPE_1__* page; } ;
struct nullb {TYPE_2__* dev; } ;
struct TYPE_4__ {int curr_cache; struct radix_tree_root data; struct radix_tree_root cache; } ;
struct TYPE_3__ {scalar_t__ index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nullb_page*) ;
 scalar_t__ FUNC_2 (struct radix_tree_root*,scalar_t__,struct nullb_page*) ;
 struct nullb_page* FUNC_3 (struct radix_tree_root*,scalar_t__) ;

__attribute__((used)) static struct nullb_page *FUNC_4(struct nullb *VAR_1, u64 VAR_2,
 struct nullb_page *VAR_3, bool VAR_4)
{
 struct radix_tree_root *VAR_5;

 VAR_5 = VAR_4 ? &VAR_1->dev->cache : &VAR_1->dev->data;

 if (FUNC_2(VAR_5, VAR_2, VAR_3)) {
  FUNC_1(VAR_3);
  VAR_3 = FUNC_3(VAR_5, VAR_2);
  FUNC_0(!VAR_3 || VAR_3->page->index != VAR_2);
 } else if (VAR_4)
  VAR_1->dev->curr_cache += VAR_0;

 return VAR_3;
}
