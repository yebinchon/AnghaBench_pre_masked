
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct pblk {int page_bio_pool; TYPE_1__* dev; } ;
struct page {int dummy; } ;
struct bio {scalar_t__ bi_vcnt; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct request_queue* q; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,struct bio*,struct page*,int,int ) ;
 struct page* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct page*,int *) ;
 int FUNC_3 (struct pblk*,struct bio*,scalar_t__,int) ;
 int FUNC_4 (struct pblk*,char*) ;

int FUNC_5(struct pblk *VAR_1, struct bio *VAR_2, gfp_t VAR_3,
         int VAR_4)
{
 struct request_queue *VAR_5 = VAR_1->dev->q;
 struct page *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_1(&VAR_1->page_bio_pool, VAR_3);

  VAR_8 = FUNC_0(VAR_5, VAR_2, VAR_6, VAR_0, 0);
  if (VAR_8 != VAR_0) {
   FUNC_4(VAR_1, "could not add page to bio\n");
   FUNC_2(VAR_6, &VAR_1->page_bio_pool);
   goto err;
  }
 }

 return 0;
err:
 FUNC_3(VAR_1, VAR_2, (VAR_2->bi_vcnt - VAR_7), VAR_7);
 return -1;
}
