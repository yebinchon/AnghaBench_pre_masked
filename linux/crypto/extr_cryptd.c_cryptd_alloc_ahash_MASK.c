
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* __crt_alg; } ;
struct crypto_ahash {TYPE_2__ base; } ;
struct cryptd_hash_ctx {int refcnt; } ;
struct cryptd_ahash {int dummy; } ;
struct TYPE_3__ {scalar_t__ cra_module; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cryptd_ahash* FUNC_0 (struct crypto_ahash*) ;
 struct cryptd_ahash* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct crypto_ahash*) ;
 scalar_t__ VAR_2 ;
 struct cryptd_ahash* FUNC_3 (struct crypto_ahash*) ;
 struct cryptd_hash_ctx* FUNC_4 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct crypto_ahash*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (char*,int,char*,char const*) ;

struct cryptd_ahash *FUNC_9(const char *VAR_3,
     u32 VAR_4, u32 VAR_5)
{
 char VAR_6[VAR_0];
 struct cryptd_hash_ctx *VAR_7;
 struct crypto_ahash *VAR_8;

 if (FUNC_8(VAR_6, VAR_0,
       "cryptd(%s)", VAR_3) >= VAR_0)
  return FUNC_1(-VAR_1);
 VAR_8 = FUNC_5(VAR_6, VAR_4, VAR_5);
 if (FUNC_2(VAR_8))
  return FUNC_0(VAR_8);
 if (VAR_8->base.__crt_alg->cra_module != VAR_2) {
  FUNC_6(VAR_8);
  return FUNC_1(-VAR_1);
 }

 VAR_7 = FUNC_4(VAR_8);
 FUNC_7(&VAR_7->refcnt, 1);

 return FUNC_3(VAR_8);
}
