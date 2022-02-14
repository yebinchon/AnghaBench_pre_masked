
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,struct mv_cesa_op_ctx*,int) ;
 int FUNC_2 (struct mv_cesa_op_ctx*,int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_9)
{
 struct mv_cesa_ahash_req *VAR_10 = FUNC_0(VAR_9);
 struct mv_cesa_op_ctx VAR_11 = { };

 FUNC_2(&VAR_11, VAR_0);

 FUNC_1(VAR_9, &VAR_11, 0);

 VAR_10->state[0] = VAR_1;
 VAR_10->state[1] = VAR_2;
 VAR_10->state[2] = VAR_3;
 VAR_10->state[3] = VAR_4;
 VAR_10->state[4] = VAR_5;
 VAR_10->state[5] = VAR_6;
 VAR_10->state[6] = VAR_7;
 VAR_10->state[7] = VAR_8;

 return 0;
}
