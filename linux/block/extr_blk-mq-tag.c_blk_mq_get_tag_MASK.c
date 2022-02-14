
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbq_wait_state {int dummy; } ;
struct sbitmap_queue {int dummy; } ;
struct blk_mq_tags {unsigned int nr_reserved_tags; struct sbitmap_queue bitmap_tags; struct sbitmap_queue breserved_tags; } ;
struct blk_mq_alloc_data {int flags; int hctx; int ctx; int cmd_flags; int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct blk_mq_alloc_data*,struct sbitmap_queue*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int) ;
 struct blk_mq_tags* FUNC_6 (struct blk_mq_alloc_data*) ;
 struct sbq_wait_state* FUNC_7 (struct sbitmap_queue*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct sbitmap_queue*,struct sbq_wait_state*,int *) ;
 int FUNC_10 (struct sbitmap_queue*,struct sbq_wait_state*,int *,int ) ;
 int FUNC_11 (struct sbitmap_queue*) ;
 scalar_t__ FUNC_12 (int) ;
 int VAR_4 ;

unsigned int FUNC_13(struct blk_mq_alloc_data *VAR_5)
{
 struct blk_mq_tags *VAR_6 = FUNC_6(VAR_5);
 struct sbitmap_queue *VAR_7;
 struct sbq_wait_state *VAR_8;
 FUNC_0(VAR_4);
 unsigned int VAR_9;
 int VAR_10;

 if (VAR_5->flags & VAR_1) {
  if (FUNC_12(!VAR_6->nr_reserved_tags)) {
   FUNC_1(1);
   return VAR_2;
  }
  VAR_7 = &VAR_6->breserved_tags;
  VAR_9 = 0;
 } else {
  VAR_7 = &VAR_6->bitmap_tags;
  VAR_9 = VAR_6->nr_reserved_tags;
 }

 VAR_10 = FUNC_2(VAR_5, VAR_7);
 if (VAR_10 != -1)
  goto found_tag;

 if (VAR_5->flags & VAR_0)
  return VAR_2;

 VAR_8 = FUNC_7(VAR_7, VAR_5->hctx);
 do {
  struct sbitmap_queue *VAR_11;






  FUNC_5(VAR_5->hctx, 0);





  VAR_10 = FUNC_2(VAR_5, VAR_7);
  if (VAR_10 != -1)
   break;

  FUNC_10(VAR_7, VAR_8, &VAR_4, VAR_3);

  VAR_10 = FUNC_2(VAR_5, VAR_7);
  if (VAR_10 != -1)
   break;

  VAR_11 = VAR_7;
  FUNC_8();

  FUNC_9(VAR_7, VAR_8, &VAR_4);

  VAR_5->ctx = FUNC_3(VAR_5->q);
  VAR_5->hctx = FUNC_4(VAR_5->q, VAR_5->cmd_flags,
      VAR_5->ctx);
  VAR_6 = FUNC_6(VAR_5);
  if (VAR_5->flags & VAR_1)
   VAR_7 = &VAR_6->breserved_tags;
  else
   VAR_7 = &VAR_6->bitmap_tags;






  if (VAR_7 != VAR_11)
   FUNC_11(VAR_11);

  VAR_8 = FUNC_7(VAR_7, VAR_5->hctx);
 } while (1);

 FUNC_9(VAR_7, VAR_8, &VAR_4);

found_tag:
 return VAR_10 + VAR_9;
}
