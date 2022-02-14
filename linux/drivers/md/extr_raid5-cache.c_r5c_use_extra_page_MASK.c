
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int disks; struct r5dev* dev; struct r5conf* raid_conf; } ;
struct r5dev {scalar_t__ orig_page; scalar_t__ page; } ;
struct r5conf {TYPE_1__* disks; } ;
struct TYPE_2__ {scalar_t__ extra_page; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct stripe_head *VAR_0)
{
 struct r5conf *VAR_1 = VAR_0->raid_conf;
 int VAR_2;
 struct r5dev *VAR_3;

 for (VAR_2 = VAR_0->disks; VAR_2--; ) {
  VAR_3 = &VAR_0->dev[VAR_2];
  if (VAR_3->orig_page != VAR_3->page)
   FUNC_0(VAR_3->orig_page);
  VAR_3->orig_page = VAR_1->disks[VAR_2].extra_page;
 }
}
