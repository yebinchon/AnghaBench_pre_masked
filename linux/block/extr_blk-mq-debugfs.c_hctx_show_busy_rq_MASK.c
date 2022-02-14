
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct show_busy_params {scalar_t__ hctx; int m; } ;
struct request {scalar_t__ mq_hctx; int queuelist; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct request *VAR_0, void *VAR_1, bool VAR_2)
{
 const struct show_busy_params *VAR_3 = VAR_1;

 if (VAR_0->mq_hctx == VAR_3->hctx)
  FUNC_0(VAR_3->m,
      FUNC_1(&VAR_0->queuelist));

 return 1;
}
