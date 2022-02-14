
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iproc_ctx_s {scalar_t__ authkeylen; TYPE_2__* shash; int authkey; } ;
struct crypto_shash {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_5__ {int flags; } ;
struct ahash_request {TYPE_1__ base; } ;
typedef int gfp_t ;
struct TYPE_6__ {struct crypto_shash* tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct ahash_request*) ;
 struct iproc_ctx_s* FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (struct crypto_ahash*) ;
 struct crypto_shash* FUNC_6 (char const*,int ,int ) ;
 int FUNC_7 (struct crypto_shash*) ;
 scalar_t__ FUNC_8 (struct crypto_shash*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct crypto_shash*,int ,scalar_t__) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 (scalar_t__,int ) ;
 scalar_t__ FUNC_14 (struct iproc_ctx_s*) ;

__attribute__((used)) static int FUNC_15(struct ahash_request *VAR_5)
{
 struct crypto_ahash *VAR_6 = FUNC_4(VAR_5);
 struct iproc_ctx_s *VAR_7 = FUNC_3(VAR_6);
 const char *VAR_8;
 struct crypto_shash *VAR_9;
 int VAR_10;
 gfp_t VAR_11;

 if (FUNC_14(VAR_7)) {





  VAR_8 = FUNC_11(FUNC_5(VAR_6));
  VAR_9 = FUNC_6(VAR_8, 0, 0);
  if (FUNC_0(VAR_9)) {
   VAR_10 = FUNC_1(VAR_9);
   goto err;
  }

  VAR_11 = (VAR_5->base.flags & (VAR_0 |
         VAR_1)) ? VAR_4 : VAR_3;
  VAR_7->shash = FUNC_13(sizeof(*VAR_7->shash) +
         FUNC_8(VAR_9), VAR_11);
  if (!VAR_7->shash) {
   VAR_10 = -VAR_2;
   goto err_hash;
  }
  VAR_7->shash->tfm = VAR_9;


  if (VAR_7->authkeylen > 0) {
   VAR_10 = FUNC_10(VAR_9, VAR_7->authkey,
        VAR_7->authkeylen);
   if (VAR_10)
    goto err_shash;
  }


  VAR_10 = FUNC_9(VAR_7->shash);
  if (VAR_10)
   goto err_shash;
 } else {

  VAR_10 = FUNC_2(VAR_5);
 }

 return VAR_10;

err_shash:
 FUNC_12(VAR_7->shash);
err_hash:
 FUNC_7(VAR_9);
err:
 return VAR_10;
}
