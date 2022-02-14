
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rk_crypto_info {scalar_t__ count; scalar_t__ addr_vir; TYPE_1__* sg_dst; scalar_t__ aligned; int async_req; } ;
struct rk_cipher_ctx {int mode; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int info; } ;
struct TYPE_2__ {scalar_t__ length; } ;


 int VAR_0 ;
 struct ablkcipher_request* FUNC_0 (int ) ;
 struct rk_cipher_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 scalar_t__ FUNC_2 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct rk_crypto_info *VAR_1)
{
 struct ablkcipher_request *VAR_2 =
  FUNC_0(VAR_1->async_req);
 struct crypto_ablkcipher *VAR_3 = FUNC_3(VAR_2);
 struct rk_cipher_ctx *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5 = FUNC_2(VAR_3);


 if (!(VAR_4->mode & VAR_0)) {
  if (VAR_1->aligned) {
   FUNC_4(VAR_2->info, FUNC_5(VAR_1->sg_dst) +
    VAR_1->sg_dst->length - VAR_5, VAR_5);
  } else {
   FUNC_4(VAR_2->info, VAR_1->addr_vir +
    VAR_1->count - VAR_5, VAR_5);
  }
 }
}
