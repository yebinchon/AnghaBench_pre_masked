
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int invalid_io; } ;
struct zram {TYPE_2__ stats; } ;
struct request_queue {struct zram* queuedata; } ;
struct TYPE_3__ {int bi_size; int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int blk_qc_t ;


 int VAR_0 ;
 int FUNC_0 (struct zram*,struct bio*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct zram*,int ,int ) ;

__attribute__((used)) static blk_qc_t FUNC_4(struct request_queue *VAR_1, struct bio *VAR_2)
{
 struct zram *VAR_3 = VAR_1->queuedata;

 if (!FUNC_3(VAR_3, VAR_2->bi_iter.bi_sector,
     VAR_2->bi_iter.bi_size)) {
  FUNC_1(&VAR_3->stats.invalid_io);
  goto error;
 }

 FUNC_0(VAR_3, VAR_2);
 return VAR_0;

error:
 FUNC_2(VAR_2);
 return VAR_0;
}
