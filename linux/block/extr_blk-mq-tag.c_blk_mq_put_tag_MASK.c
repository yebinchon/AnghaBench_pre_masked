
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tags {unsigned int nr_reserved_tags; int const nr_tags; int breserved_tags; int bitmap_tags; } ;
struct blk_mq_hw_ctx {int dummy; } ;
struct blk_mq_ctx {int cpu; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct blk_mq_tags*,unsigned int) ;
 int FUNC_2 (int *,int const,int ) ;

void FUNC_3(struct blk_mq_hw_ctx *VAR_0, struct blk_mq_tags *VAR_1,
      struct blk_mq_ctx *VAR_2, unsigned int VAR_3)
{
 if (!FUNC_1(VAR_1, VAR_3)) {
  const int VAR_4 = VAR_3 - VAR_1->nr_reserved_tags;

  FUNC_0(VAR_4 >= VAR_1->nr_tags);
  FUNC_2(&VAR_1->bitmap_tags, VAR_4, VAR_2->cpu);
 } else {
  FUNC_0(VAR_3 >= VAR_1->nr_reserved_tags);
  FUNC_2(&VAR_1->breserved_tags, VAR_3, VAR_2->cpu);
 }
}
