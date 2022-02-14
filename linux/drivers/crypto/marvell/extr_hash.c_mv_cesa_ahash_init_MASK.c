
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_op_ctx {int dummy; } ;
struct mv_cesa_ahash_req {int algo_le; scalar_t__ len; struct mv_cesa_op_ctx op_tmpl; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct mv_cesa_ahash_req*,int ,int) ;
 int FUNC_2 (struct mv_cesa_op_ctx*,int ) ;
 int FUNC_3 (struct mv_cesa_op_ctx*,int ) ;
 int FUNC_4 (struct mv_cesa_op_ctx*,int,int) ;

__attribute__((used)) static void FUNC_5(struct ahash_request *VAR_4,
         struct mv_cesa_op_ctx *VAR_5, bool VAR_6)
{
 struct mv_cesa_ahash_req *VAR_7 = FUNC_0(VAR_4);

 FUNC_1(VAR_7, 0, sizeof(*VAR_7));
 FUNC_4(VAR_5,
         VAR_2 |
         VAR_0,
         VAR_3 |
         VAR_1);
 FUNC_3(VAR_5, 0);
 FUNC_2(VAR_5, 0);
 VAR_7->op_tmpl = *VAR_5;
 VAR_7->len = 0;
 VAR_7->algo_le = VAR_6;
}
