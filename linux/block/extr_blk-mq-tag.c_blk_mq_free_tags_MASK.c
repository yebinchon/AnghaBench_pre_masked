
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tags {int breserved_tags; int bitmap_tags; } ;


 int FUNC_0 (struct blk_mq_tags*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct blk_mq_tags *VAR_0)
{
 FUNC_1(&VAR_0->bitmap_tags);
 FUNC_1(&VAR_0->breserved_tags);
 FUNC_0(VAR_0);
}
