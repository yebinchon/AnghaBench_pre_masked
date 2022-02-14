
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct remap_info {int issue_bios; TYPE_1__* tc; int defer_bios; } ;
struct dm_bio_prison_cell {int bios; } ;
struct bio {int bi_opf; } ;
struct TYPE_2__ {int pool; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct bio*) ;
 struct bio* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (int ,struct bio*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_1,
           struct dm_bio_prison_cell *VAR_2)
{
 struct remap_info *VAR_3 = VAR_1;
 struct bio *VAR_4;

 while ((VAR_4 = FUNC_1(&VAR_2->bios))) {
  if (FUNC_4(VAR_4->bi_opf) || FUNC_2(VAR_4) == VAR_0)
   FUNC_0(&VAR_3->defer_bios, VAR_4);
  else {
   FUNC_3(VAR_3->tc->pool, VAR_4);






   FUNC_0(&VAR_3->issue_bios, VAR_4);
  }
 }
}
