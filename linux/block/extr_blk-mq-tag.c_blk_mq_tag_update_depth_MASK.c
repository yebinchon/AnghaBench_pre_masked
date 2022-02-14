
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_mq_tags {unsigned int nr_reserved_tags; unsigned int nr_tags; int bitmap_tags; } ;
struct blk_mq_tag_set {int dummy; } ;
struct blk_mq_hw_ctx {int queue_num; TYPE_1__* queue; } ;
struct TYPE_2__ {struct blk_mq_tag_set* tag_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct blk_mq_tags* FUNC_0 (struct blk_mq_tag_set*,int ,unsigned int,unsigned int) ;
 int FUNC_1 (struct blk_mq_tag_set*,struct blk_mq_tags*,int ,unsigned int) ;
 int FUNC_2 (struct blk_mq_tags*) ;
 int FUNC_3 (struct blk_mq_tag_set*,struct blk_mq_tags*,int ) ;
 int FUNC_4 (int *,unsigned int) ;

int FUNC_5(struct blk_mq_hw_ctx *VAR_3,
       struct blk_mq_tags **VAR_4, unsigned int VAR_5,
       bool VAR_6)
{
 struct blk_mq_tags *VAR_7 = *VAR_4;

 if (VAR_5 <= VAR_7->nr_reserved_tags)
  return -VAR_1;





 if (VAR_5 > VAR_7->nr_tags) {
  struct blk_mq_tag_set *VAR_8 = VAR_3->queue->tag_set;
  struct blk_mq_tags *VAR_9;
  bool VAR_10;

  if (!VAR_6)
   return -VAR_1;





  if (VAR_5 > 16 * VAR_0)
   return -VAR_1;

  VAR_9 = FUNC_0(VAR_8, VAR_3->queue_num, VAR_5,
    VAR_7->nr_reserved_tags);
  if (!VAR_9)
   return -VAR_2;
  VAR_10 = FUNC_1(VAR_8, VAR_9, VAR_3->queue_num, VAR_5);
  if (VAR_10) {
   FUNC_2(VAR_9);
   return -VAR_2;
  }

  FUNC_3(VAR_8, *VAR_4, VAR_3->queue_num);
  FUNC_2(*VAR_4);
  *VAR_4 = VAR_9;
 } else {




  FUNC_4(&VAR_7->bitmap_tags,
    VAR_5 - VAR_7->nr_reserved_tags);
 }

 return 0;
}
