
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct aesbs_xts_ctx {void* tweak_tfm; void* cts_tfm; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (void*) ;
 struct aesbs_xts_ctx* FUNC_5 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_6(struct crypto_tfm *VAR_0)
{
 struct aesbs_xts_ctx *VAR_1 = FUNC_5(VAR_0);

 VAR_1->cts_tfm = FUNC_3("aes", 0, 0);
 if (FUNC_0(VAR_1->cts_tfm))
  return FUNC_1(VAR_1->cts_tfm);

 VAR_1->tweak_tfm = FUNC_3("aes", 0, 0);
 if (FUNC_0(VAR_1->tweak_tfm))
  FUNC_4(VAR_1->cts_tfm);

 return FUNC_2(VAR_1->tweak_tfm);
}
