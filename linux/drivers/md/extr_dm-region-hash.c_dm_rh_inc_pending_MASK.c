
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_region_hash {int dummy; } ;
struct bio_list {struct bio* head; } ;
struct bio {int bi_opf; struct bio* bi_next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct dm_region_hash*,struct bio*) ;
 int FUNC_2 (struct dm_region_hash*,int ) ;

void FUNC_3(struct dm_region_hash *VAR_2, struct bio_list *VAR_3)
{
 struct bio *VAR_4;

 for (VAR_4 = VAR_3->head; VAR_4; VAR_4 = VAR_4->bi_next) {
  if (VAR_4->bi_opf & VAR_1 || FUNC_0(VAR_4) == VAR_0)
   continue;
  FUNC_2(VAR_2, FUNC_1(VAR_2, VAR_4));
 }
}
