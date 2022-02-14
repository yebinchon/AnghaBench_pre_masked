
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int base; int cryptlen; } ;
struct mv_cesa_skcipher_req {int base; } ;
struct mv_cesa_op_ctx {int dummy; } ;
struct mv_cesa_engine {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 struct mv_cesa_engine* FUNC_2 (int ) ;
 int FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 (int *,struct mv_cesa_engine*) ;
 int FUNC_5 (struct skcipher_request*,struct mv_cesa_op_ctx*) ;
 struct mv_cesa_skcipher_req* FUNC_6 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_7(struct skcipher_request *VAR_0,
          struct mv_cesa_op_ctx *VAR_1)
{
 int VAR_2;
 struct mv_cesa_skcipher_req *VAR_3 = FUNC_6(VAR_0);
 struct mv_cesa_engine *VAR_4;

 VAR_2 = FUNC_5(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_4 = FUNC_2(VAR_0->cryptlen);
 FUNC_4(&VAR_0->base, VAR_4);

 VAR_2 = FUNC_0(&VAR_0->base, &VAR_3->base);

 if (FUNC_1(&VAR_0->base, VAR_2))
  FUNC_3(VAR_0);

 return VAR_2;
}
