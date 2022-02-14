
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct aesbs_cbc_ctx {int enc_tfm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 struct aesbs_cbc_ctx* FUNC_2 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_0)
{
 struct aesbs_cbc_ctx *VAR_1 = FUNC_2(VAR_0);

 VAR_1->enc_tfm = FUNC_1("aes", 0, 0);

 return FUNC_0(VAR_1->enc_tfm);
}
