
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stripe_head {int disks; TYPE_2__* dev; struct r5conf* raid_conf; } ;
struct r5conf {TYPE_3__* mddev; int cache_state; TYPE_1__* disks; } ;
struct page {int dummy; } ;
struct TYPE_6__ {int thread; } ;
struct TYPE_5__ {int flags; struct page* page; struct page* orig_page; } ;
struct TYPE_4__ {struct page* extra_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;

void FUNC_3(struct stripe_head *VAR_2)
{
 struct r5conf *VAR_3 = VAR_2->raid_conf;
 int VAR_4;
 bool VAR_5;

 VAR_5 =
  VAR_2->dev[0].orig_page == VAR_3->disks[0].extra_page;

 for (VAR_4 = VAR_2->disks; VAR_4--; )
  if (VAR_2->dev[VAR_4].page != VAR_2->dev[VAR_4].orig_page) {
   struct page *VAR_6 = VAR_2->dev[VAR_4].orig_page;

   VAR_2->dev[VAR_4].orig_page = VAR_2->dev[VAR_4].page;
   FUNC_0(VAR_1, &VAR_2->dev[VAR_4].flags);

   if (!VAR_5)
    FUNC_2(VAR_6);
  }

 if (VAR_5) {
  FUNC_0(VAR_0, &VAR_3->cache_state);
  FUNC_1(VAR_3->mddev->thread);
 }
}
