
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_queue_stats {int callbacks; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct blk_queue_stats*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct blk_queue_stats *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(!FUNC_2(&VAR_0->callbacks));

 FUNC_1(VAR_0);
}
