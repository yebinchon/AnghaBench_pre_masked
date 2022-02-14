
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spacc_req {TYPE_1__* req; } ;
struct spacc_alg {int ctrl_default; } ;
struct spacc_ablk_ctx {scalar_t__ key_len; } ;
struct crypto_tfm {struct crypto_alg* __crt_alg; } ;
struct crypto_alg {int dummy; } ;
struct TYPE_2__ {struct crypto_tfm* tfm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct spacc_ablk_ctx* FUNC_0 (struct crypto_tfm*) ;
 struct spacc_alg* FUNC_1 (struct crypto_alg*) ;

__attribute__((used)) static int FUNC_2(struct spacc_req *VAR_4)
{
 struct spacc_ablk_ctx *VAR_5;
 struct crypto_tfm *VAR_6 = VAR_4->req->tfm;
 struct crypto_alg *VAR_7 = VAR_4->req->tfm->__crt_alg;
 struct spacc_alg *VAR_8 = FUNC_1(VAR_7);

 VAR_5 = FUNC_0(VAR_6);

 return (VAR_8->ctrl_default & VAR_2) ==
   VAR_3 &&
   VAR_5->key_len != VAR_0 &&
   VAR_5->key_len != VAR_1;
}
