
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_op_ctx {int dummy; } ;
struct mv_cesa_ahash_req {int * state; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,struct mv_cesa_op_ctx*,int) ;
 int FUNC_2 (struct mv_cesa_op_ctx*,int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_6)
{
 struct mv_cesa_ahash_req *VAR_7 = FUNC_0(VAR_6);
 struct mv_cesa_op_ctx VAR_8 = { };

 FUNC_2(&VAR_8, VAR_0);

 FUNC_1(VAR_6, &VAR_8, 0);

 VAR_7->state[0] = VAR_1;
 VAR_7->state[1] = VAR_2;
 VAR_7->state[2] = VAR_3;
 VAR_7->state[3] = VAR_4;
 VAR_7->state[4] = VAR_5;

 return 0;
}
