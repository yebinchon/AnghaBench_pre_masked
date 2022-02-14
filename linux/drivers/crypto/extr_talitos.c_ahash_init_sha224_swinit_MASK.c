
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ahash_req_ctx {int swinit; scalar_t__* hw_context; } ;
struct ahash_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ahash_request*) ;
 struct talitos_ahash_req_ctx* FUNC_1 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_8)
{
 struct talitos_ahash_req_ctx *VAR_9 = FUNC_1(VAR_8);

 VAR_9->hw_context[0] = VAR_0;
 VAR_9->hw_context[1] = VAR_1;
 VAR_9->hw_context[2] = VAR_2;
 VAR_9->hw_context[3] = VAR_3;
 VAR_9->hw_context[4] = VAR_4;
 VAR_9->hw_context[5] = VAR_5;
 VAR_9->hw_context[6] = VAR_6;
 VAR_9->hw_context[7] = VAR_7;


 VAR_9->hw_context[8] = 0;
 VAR_9->hw_context[9] = 0;

 FUNC_0(VAR_8);
 VAR_9->swinit = 1;

 return 0;
}
