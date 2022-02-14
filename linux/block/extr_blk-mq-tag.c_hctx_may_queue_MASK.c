
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int depth; } ;
struct sbitmap_queue {TYPE_2__ sb; } ;
struct blk_mq_hw_ctx {int flags; int nr_active; TYPE_1__* tags; int state; } ;
struct TYPE_3__ {int active_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline bool FUNC_3(struct blk_mq_hw_ctx *VAR_2,
      struct sbitmap_queue *VAR_3)
{
 unsigned int VAR_4, VAR_5;

 if (!VAR_2 || !(VAR_2->flags & VAR_0))
  return 1;
 if (!FUNC_2(VAR_1, &VAR_2->state))
  return 1;




 if (VAR_3->sb.depth == 1)
  return 1;

 VAR_5 = FUNC_0(&VAR_2->tags->active_queues);
 if (!VAR_5)
  return 1;




 VAR_4 = FUNC_1((VAR_3->sb.depth + VAR_5 - 1) / VAR_5, 4U);
 return FUNC_0(&VAR_2->nr_active) < VAR_4;
}
