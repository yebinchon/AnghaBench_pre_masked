
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int failed_writes; int failed_reads; int num_writes; int num_reads; } ;
struct zram {TYPE_2__ stats; TYPE_1__* disk; } ;
struct request_queue {int dummy; } ;
struct bio_vec {int bv_len; int bv_page; } ;
struct bio {int dummy; } ;
struct TYPE_3__ {int part0; struct request_queue* queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct request_queue*,unsigned int,int *,unsigned long) ;
 int FUNC_3 (struct request_queue*,unsigned int,int,int *) ;
 unsigned long VAR_1 ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct zram*,int ) ;
 int FUNC_7 (struct zram*,struct bio_vec*,int ,int,struct bio*) ;
 int FUNC_8 (struct zram*,struct bio_vec*,int ,int,struct bio*) ;
 int FUNC_9 (struct zram*,int ) ;
 int FUNC_10 (struct zram*,int ) ;

__attribute__((used)) static int FUNC_11(struct zram *VAR_2, struct bio_vec *VAR_3, u32 VAR_4,
   int VAR_5, unsigned int VAR_6, struct bio *VAR_7)
{
 unsigned long VAR_8 = VAR_1;
 struct request_queue *VAR_9 = VAR_2->disk->queue;
 int VAR_10;

 FUNC_3(VAR_9, VAR_6, VAR_3->bv_len >> VAR_0,
   &VAR_2->disk->part0);

 if (!FUNC_4(VAR_6)) {
  FUNC_0(&VAR_2->stats.num_reads);
  VAR_10 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
  FUNC_1(VAR_3->bv_page);
 } else {
  FUNC_0(&VAR_2->stats.num_writes);
  VAR_10 = FUNC_8(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
 }

 FUNC_2(VAR_9, VAR_6, &VAR_2->disk->part0, VAR_8);

 FUNC_9(VAR_2, VAR_4);
 FUNC_6(VAR_2, VAR_4);
 FUNC_10(VAR_2, VAR_4);

 if (FUNC_5(VAR_10 < 0)) {
  if (!FUNC_4(VAR_6))
   FUNC_0(&VAR_2->stats.failed_reads);
  else
   FUNC_0(&VAR_2->stats.failed_writes);
 }

 return VAR_10;
}
