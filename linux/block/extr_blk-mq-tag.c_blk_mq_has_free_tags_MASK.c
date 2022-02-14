
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb; } ;
struct blk_mq_tags {TYPE_1__ bitmap_tags; } ;


 int FUNC_0 (int *) ;

bool FUNC_1(struct blk_mq_tags *VAR_0)
{
 if (!VAR_0)
  return 1;

 return FUNC_0(&VAR_0->bitmap_tags.sb);
}
