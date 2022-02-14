
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tags {int bitmap_tags; int breserved_tags; scalar_t__ nr_reserved_tags; } ;
typedef int busy_tag_iter_fn ;


 int FUNC_0 (struct blk_mq_tags*,int *,int *,void*,int) ;

__attribute__((used)) static void FUNC_1(struct blk_mq_tags *VAR_0,
  busy_tag_iter_fn *VAR_1, void *VAR_2)
{
 if (VAR_0->nr_reserved_tags)
  FUNC_0(VAR_0, &VAR_0->breserved_tags, VAR_1, VAR_2, 1);
 FUNC_0(VAR_0, &VAR_0->bitmap_tags, VAR_1, VAR_2, 0);
}
