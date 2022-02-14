
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {TYPE_1__* mq_ctx; int cmd_flags; } ;
struct kyber_queue_data {int * domain_tokens; } ;
struct TYPE_2__ {int cpu; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static void FUNC_3(struct kyber_queue_data *VAR_0,
      struct request *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 != -1) {
  VAR_2 = FUNC_0(VAR_1->cmd_flags);
  FUNC_2(&VAR_0->domain_tokens[VAR_2], VAR_3,
        VAR_1->mq_ctx->cpu);
 }
}
