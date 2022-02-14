
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_list {int dummy; } ;
struct cache {struct bio_list deferred_bios; } ;
struct bio {int bi_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio_list*) ;
 int FUNC_2 (struct bio_list*,struct bio_list*) ;
 struct bio* FUNC_3 (struct bio_list*) ;

__attribute__((used)) static void FUNC_4(struct cache *VAR_1)
{
 struct bio *VAR_2;
 struct bio_list VAR_3;

 FUNC_1(&VAR_3);
 FUNC_2(&VAR_3, &VAR_1->deferred_bios);
 FUNC_1(&VAR_1->deferred_bios);

 while ((VAR_2 = FUNC_3(&VAR_3))) {
  VAR_2->bi_status = VAR_0;
  FUNC_0(VAR_2);
 }
}
