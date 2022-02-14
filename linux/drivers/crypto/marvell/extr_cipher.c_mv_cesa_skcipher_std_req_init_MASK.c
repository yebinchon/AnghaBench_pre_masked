
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct mv_cesa_op_ctx {int dummy; } ;
struct mv_cesa_skcipher_std_req {int skip_ctx; struct mv_cesa_op_ctx op; } ;
struct TYPE_2__ {int * last; int * first; } ;
struct mv_cesa_req {TYPE_1__ chain; } ;
struct mv_cesa_skcipher_req {struct mv_cesa_req base; struct mv_cesa_skcipher_std_req std; } ;


 struct mv_cesa_skcipher_req* FUNC_0 (struct skcipher_request*) ;

__attribute__((used)) static inline int
FUNC_1(struct skcipher_request *VAR_0,
         const struct mv_cesa_op_ctx *VAR_1)
{
 struct mv_cesa_skcipher_req *VAR_2 = FUNC_0(VAR_0);
 struct mv_cesa_skcipher_std_req *VAR_3 = &VAR_2->std;
 struct mv_cesa_req *VAR_4 = &VAR_2->base;

 VAR_3->op = *VAR_1;
 VAR_3->skip_ctx = 0;
 VAR_4->chain.first = ((void*)0);
 VAR_4->chain.last = ((void*)0);

 return 0;
}
