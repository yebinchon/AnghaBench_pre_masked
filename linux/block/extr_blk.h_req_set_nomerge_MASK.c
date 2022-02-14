
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct request* last_merge; } ;
struct request {int cmd_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct request_queue *VAR_1, struct request *VAR_2)
{
 VAR_2->cmd_flags |= VAR_0;
 if (VAR_2 == VAR_1->last_merge)
  VAR_1->last_merge = ((void*)0);
}
