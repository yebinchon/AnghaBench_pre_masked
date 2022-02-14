
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bi_size; int bi_sector; } ;
struct bio {int bi_end_io; TYPE_2__ bi_iter; int bi_inline_vecs; } ;
struct journal_device {int discard_idx; int last_idx; int discard_work; int discard_in_flight; struct bio discard_bio; } ;
struct TYPE_4__ {int njournal_buckets; int * d; } ;
struct cache {TYPE_3__* set; int bdev; TYPE_1__ sb; int discard; struct journal_device journal; } ;
struct TYPE_6__ {int cl; } ;





 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const) ;
 int VAR_1 ;
 int FUNC_3 (struct bio*,int ,int) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct bio*,int ,int ) ;
 int FUNC_6 (struct cache*) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct cache *VAR_4)
{
 struct journal_device *VAR_5 = &VAR_4->journal;
 struct bio *VAR_6 = &VAR_5->discard_bio;

 if (!VAR_4->discard) {
  VAR_5->discard_idx = VAR_5->last_idx;
  return;
 }

 switch (FUNC_1(&VAR_5->discard_in_flight)) {
 case 129:
  return;

 case 130:
  VAR_5->discard_idx = (VAR_5->discard_idx + 1) %
   VAR_4->sb.njournal_buckets;

  FUNC_2(&VAR_5->discard_in_flight, 128);


 case 128:
  if (VAR_5->discard_idx == VAR_5->last_idx)
   return;

  FUNC_2(&VAR_5->discard_in_flight, 129);

  FUNC_3(VAR_6, VAR_6->bi_inline_vecs, 1);
  FUNC_5(VAR_6, VAR_0, 0);
  VAR_6->bi_iter.bi_sector = FUNC_7(VAR_4->set,
      VAR_4->sb.d[VAR_5->discard_idx]);
  FUNC_4(VAR_6, VAR_4->bdev);
  VAR_6->bi_iter.bi_size = FUNC_6(VAR_4);
  VAR_6->bi_end_io = VAR_2;

  FUNC_8(&VAR_4->set->cl);
  FUNC_0(&VAR_5->discard_work, VAR_3);
  FUNC_9(VAR_1, &VAR_5->discard_work);
 }
}
