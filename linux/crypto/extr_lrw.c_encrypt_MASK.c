
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct rctx {struct skcipher_request subreq; } ;


 scalar_t__ FUNC_0 (struct skcipher_request*) ;
 int FUNC_1 (struct skcipher_request*) ;
 struct rctx* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (struct skcipher_request*) ;
 scalar_t__ FUNC_4 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_5(struct skcipher_request *VAR_0)
{
 struct rctx *VAR_1 = FUNC_2(VAR_0);
 struct skcipher_request *VAR_2 = &VAR_1->subreq;

 FUNC_1(VAR_0);
 return FUNC_4(VAR_0) ?:
  FUNC_0(VAR_2) ?:
  FUNC_3(VAR_0);
}
