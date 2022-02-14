
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iproc_reqctx_s {int is_sw_hmac; unsigned int hash_carry_len; unsigned int total_todo; int hash_carry; } ;
struct TYPE_5__ {int mode; } ;
struct iproc_ctx_s {int ipad; TYPE_2__ auth; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int nbytes; } ;
struct TYPE_4__ {scalar_t__ spu_type; } ;
struct TYPE_6__ {TYPE_1__ spu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;
 struct iproc_reqctx_s* FUNC_2 (struct ahash_request*) ;
 struct iproc_ctx_s* FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (struct crypto_ahash*) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_8 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct ahash_request *VAR_4)
{
 struct iproc_reqctx_s *VAR_5 = FUNC_2(VAR_4);
 struct crypto_ahash *VAR_6 = FUNC_4(VAR_4);
 struct iproc_ctx_s *VAR_7 = FUNC_3(VAR_6);
 unsigned int VAR_8 =
   FUNC_6(FUNC_5(VAR_6));

 FUNC_7("ahash_hmac_digest() nbytes:%u\n", VAR_4->nbytes);


 FUNC_1(VAR_4);

 if (VAR_3.spu.spu_type == VAR_2) {
  VAR_5->is_sw_hmac = 0;
  VAR_7->auth.mode = VAR_1;
 } else {
  VAR_5->is_sw_hmac = 1;
  VAR_7->auth.mode = VAR_0;

  FUNC_8(VAR_5->hash_carry, VAR_7->ipad, VAR_8);
  VAR_5->hash_carry_len = VAR_8;
  VAR_5->total_todo += VAR_8;
 }

 return FUNC_0(VAR_4);
}
