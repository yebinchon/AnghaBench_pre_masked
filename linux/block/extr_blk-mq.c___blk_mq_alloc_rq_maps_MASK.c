
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tag_set {int nr_hw_queues; int * tags; } ;


 int VAR_0 ;
 int FUNC_0 (struct blk_mq_tag_set*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct blk_mq_tag_set *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_hw_queues; VAR_2++)
  if (!FUNC_0(VAR_1, VAR_2))
   goto out_unwind;

 return 0;

out_unwind:
 while (--VAR_2 >= 0)
  FUNC_1(VAR_1->tags[VAR_2]);

 return -VAR_0;
}
