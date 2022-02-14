
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* tag_set; int mq_ops; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct request_queue *VAR_1)
{
 if (!VAR_1->mq_ops ||
     (VAR_1->tag_set && (VAR_1->tag_set->flags & VAR_0)))
  return 0;
 return 1;
}
