
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tags {int breserved_tags; int bitmap_tags; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct blk_mq_tags *VAR_0, bool VAR_1)
{
 FUNC_0(&VAR_0->bitmap_tags);
 if (VAR_1)
  FUNC_0(&VAR_0->breserved_tags);
}
