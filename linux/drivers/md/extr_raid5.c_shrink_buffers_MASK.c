
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {TYPE_2__* dev; TYPE_1__* raid_conf; } ;
struct page {int dummy; } ;
struct TYPE_4__ {struct page* page; struct page* orig_page; } ;
struct TYPE_3__ {int pool_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct stripe_head *VAR_0)
{
 struct page *VAR_1;
 int VAR_2;
 int VAR_3 = VAR_0->raid_conf->pool_size;

 for (VAR_2 = 0; VAR_2 < VAR_3 ; VAR_2++) {
  FUNC_0(VAR_0->dev[VAR_2].page != VAR_0->dev[VAR_2].orig_page);
  VAR_1 = VAR_0->dev[VAR_2].page;
  if (!VAR_1)
   continue;
  VAR_0->dev[VAR_2].page = ((void*)0);
  FUNC_1(VAR_1);
 }
}
