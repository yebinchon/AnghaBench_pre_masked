
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rk_crypto_info {scalar_t__ reg; TYPE_1__* sg_dst; int async_req; } ;
struct rk_cipher_ctx {int mode; int * iv; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int dummy; } ;
struct TYPE_2__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ablkcipher_request* FUNC_0 (int ) ;
 struct rk_cipher_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct rk_crypto_info *VAR_5)
{
 struct ablkcipher_request *VAR_6 =
  FUNC_0(VAR_5->async_req);
 struct crypto_ablkcipher *VAR_7 = FUNC_3(VAR_6);
 struct rk_cipher_ctx *VAR_8 = FUNC_1(VAR_7);
 u32 VAR_9 = FUNC_2(VAR_7);
 u8 *VAR_10 = ((void*)0);

 if (VAR_8->mode & VAR_3) {
  VAR_10 = VAR_8->iv;
 } else {
  VAR_10 = FUNC_5(FUNC_6(VAR_5->sg_dst)) +
    VAR_5->sg_dst->offset + VAR_5->sg_dst->length - VAR_9;
 }

 if (VAR_9 == VAR_1)
  FUNC_4(VAR_5->reg + VAR_4, VAR_10, VAR_9);
 else if (VAR_9 == VAR_0)
  FUNC_4(VAR_5->reg + VAR_2, VAR_10, VAR_9);
}
