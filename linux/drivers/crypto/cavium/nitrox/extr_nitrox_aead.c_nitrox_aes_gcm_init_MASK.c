
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_aead_rctx {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;


 int FUNC_0 (struct crypto_aead*,int) ;
 int FUNC_1 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_0,
    sizeof(struct aead_request) +
     sizeof(struct nitrox_aead_rctx));

 return 0;
}
