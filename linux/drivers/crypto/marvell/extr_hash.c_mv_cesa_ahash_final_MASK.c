
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_op_ctx {int dummy; } ;
struct mv_cesa_ahash_req {int last_req; int len; struct mv_cesa_op_ctx op_tmpl; } ;
struct ahash_request {scalar_t__ nbytes; } ;


 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct mv_cesa_op_ctx*,int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0)
{
 struct mv_cesa_ahash_req *VAR_1 = FUNC_0(VAR_0);
 struct mv_cesa_op_ctx *VAR_2 = &VAR_1->op_tmpl;

 FUNC_2(VAR_2, VAR_1->len);
 VAR_1->last_req = 1;
 VAR_0->nbytes = 0;

 return FUNC_1(VAR_0);
}
