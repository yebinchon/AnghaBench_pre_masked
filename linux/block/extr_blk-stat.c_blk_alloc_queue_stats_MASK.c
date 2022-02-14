
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_queue_stats {int enable_accounting; int lock; int callbacks; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct blk_queue_stats* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

struct blk_queue_stats *FUNC_3(void)
{
 struct blk_queue_stats *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->callbacks);
 FUNC_2(&VAR_1->lock);
 VAR_1->enable_accounting = 0;

 return VAR_1;
}
