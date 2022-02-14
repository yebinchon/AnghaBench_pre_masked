
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {scalar_t__ part; } ;
struct mq_inflight {scalar_t__ part; int * inflight; } ;
struct blk_mq_hw_ctx {int dummy; } ;


 size_t FUNC_0 (struct request*) ;

__attribute__((used)) static bool FUNC_1(struct blk_mq_hw_ctx *VAR_0,
         struct request *VAR_1, void *VAR_2,
         bool VAR_3)
{
 struct mq_inflight *VAR_4 = VAR_2;

 if (VAR_1->part == VAR_4->part)
  VAR_4->inflight[FUNC_0(VAR_1)]++;

 return 1;
}
