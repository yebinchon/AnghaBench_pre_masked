
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iproc_reqctx_s {int is_sw_hmac; unsigned int hash_carry_len; unsigned int total_todo; int hash_carry; } ;
struct TYPE_2__ {int mode; } ;
struct iproc_ctx_s {int ipad; TYPE_1__ auth; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahash_request*) ;
 struct iproc_reqctx_s* FUNC_1 (struct ahash_request*) ;
 struct iproc_ctx_s* FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct crypto_ahash*) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,unsigned int) ;
 int FUNC_8 (struct iproc_ctx_s*) ;

__attribute__((used)) static int FUNC_9(struct ahash_request *VAR_1)
{
 struct iproc_reqctx_s *VAR_2 = FUNC_1(VAR_1);
 struct crypto_ahash *VAR_3 = FUNC_3(VAR_1);
 struct iproc_ctx_s *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5 =
   FUNC_5(FUNC_4(VAR_3));

 FUNC_6("ahash_hmac_init()\n");


 FUNC_0(VAR_1);

 if (!FUNC_8(VAR_4)) {

  VAR_2->is_sw_hmac = 1;
  VAR_4->auth.mode = VAR_0;

  FUNC_7(VAR_2->hash_carry, VAR_4->ipad, VAR_5);
  VAR_2->hash_carry_len = VAR_5;
  VAR_2->total_todo += VAR_5;
 }

 return 0;
}
