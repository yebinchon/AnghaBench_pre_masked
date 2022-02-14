
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int cryptlen; } ;
struct rctx {struct skcipher_request subreq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct skcipher_request*) ;
 int FUNC_1 (struct skcipher_request*,scalar_t__ (*) (struct skcipher_request*)) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct skcipher_request*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 struct rctx* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (struct skcipher_request*,int) ;
 scalar_t__ FUNC_6 (struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_7(struct skcipher_request *VAR_2)
{
 struct rctx *VAR_3 = FUNC_4(VAR_2);
 struct skcipher_request *VAR_4 = &VAR_3->subreq;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_1) ?:
       FUNC_6(VAR_2, 0) ?:
       FUNC_0(VAR_4) ?:
       FUNC_5(VAR_2, 0);

 if (VAR_5 || FUNC_3((VAR_2->cryptlen % VAR_0) == 0))
  return VAR_5;

 return FUNC_1(VAR_2, FUNC_0);
}
