
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct cardinfo* queuedata; } ;
struct cardinfo {int lock; struct bio** biotail; } ;
struct TYPE_2__ {int bi_size; scalar_t__ bi_sector; } ;
struct bio {int bi_opf; struct bio* bi_next; TYPE_1__ bi_iter; } ;
typedef int blk_qc_t ;


 int VAR_0 ;
 int FUNC_0 (struct cardinfo*) ;
 int FUNC_1 (struct request_queue*,struct bio**) ;
 int FUNC_2 (struct cardinfo*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,unsigned long long,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static blk_qc_t FUNC_7(struct request_queue *VAR_1, struct bio *VAR_2)
{
 struct cardinfo *VAR_3 = VAR_1->queuedata;
 FUNC_4("mm_make_request %llu %u\n",
   (unsigned long long)VAR_2->bi_iter.bi_sector,
   VAR_2->bi_iter.bi_size);

 FUNC_1(VAR_1, &VAR_2);

 FUNC_5(&VAR_3->lock);
 *VAR_3->biotail = VAR_2;
 VAR_2->bi_next = ((void*)0);
 VAR_3->biotail = &VAR_2->bi_next;
 if (FUNC_3(VAR_2->bi_opf) || !FUNC_2(VAR_3))
  FUNC_0(VAR_3);
 FUNC_6(&VAR_3->lock);

 return VAR_0;
}
