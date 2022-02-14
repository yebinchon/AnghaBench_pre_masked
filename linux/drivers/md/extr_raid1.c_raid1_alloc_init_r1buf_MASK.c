
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resync_pages {int dummy; } ;
struct r1conf {TYPE_1__* poolinfo; int r1buf_pool; } ;
struct r1bio {int * master_bio; struct bio** bios; } ;
struct bio {struct resync_pages* bi_private; } ;
struct TYPE_2__ {int raid_disks; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 struct r1bio* FUNC_1 (int *,int ) ;

__attribute__((used)) static struct r1bio *FUNC_2(struct r1conf *VAR_1)
{
 struct r1bio *VAR_2 = FUNC_1(&VAR_1->r1buf_pool, VAR_0);
 struct resync_pages *VAR_3;
 struct bio *VAR_4;
 int VAR_5;

 for (VAR_5 = VAR_1->poolinfo->raid_disks; VAR_5--; ) {
  VAR_4 = VAR_2->bios[VAR_5];
  VAR_3 = VAR_4->bi_private;
  FUNC_0(VAR_4);
  VAR_4->bi_private = VAR_3;
 }
 VAR_2->master_bio = ((void*)0);
 return VAR_2;
}
