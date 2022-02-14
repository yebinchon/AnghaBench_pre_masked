
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkcg_gq {int async_bio_work; int async_bio_lock; int async_bios; int parent; } ;
struct bio {int bi_opf; struct blkcg_gq* bi_blkg; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct bio*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4(struct bio *VAR_2)
{
 struct blkcg_gq *VAR_3 = VAR_2->bi_blkg;


 VAR_2->bi_opf &= ~VAR_0;


 if (!VAR_3->parent)
  return 0;

 FUNC_2(&VAR_3->async_bio_lock);
 FUNC_0(&VAR_3->async_bios, VAR_2);
 FUNC_3(&VAR_3->async_bio_lock);

 FUNC_1(VAR_1, &VAR_3->async_bio_work);
 return 1;
}
