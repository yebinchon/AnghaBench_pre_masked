
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ppc_xts_ctx {int rounds; int key_enc; int key_dec; int key_twk; } ;
struct crypto_tfm {int crt_flags; } ;





 int VAR_0 ;
 int VAR_1 ;
 struct ppc_xts_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (int ,int const*) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (struct crypto_tfm*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct crypto_tfm *VAR_2, const u8 *VAR_3,
     unsigned int VAR_4)
{
 struct ppc_xts_ctx *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_4 >>= 1;

 if (VAR_4 != 130 &&
     VAR_4 != 129 &&
     VAR_4 != 128) {
  VAR_2->crt_flags |= VAR_0;
  return -VAR_1;
 }

 switch (VAR_4) {
 case 130:
  VAR_5->rounds = 4;
  FUNC_1(VAR_5->key_enc, VAR_3);
  FUNC_1(VAR_5->key_twk, VAR_3 + 130);
  break;
 case 129:
  VAR_5->rounds = 5;
  FUNC_2(VAR_5->key_enc, VAR_3);
  FUNC_2(VAR_5->key_twk, VAR_3 + 129);
  break;
 case 128:
  VAR_5->rounds = 6;
  FUNC_3(VAR_5->key_enc, VAR_3);
  FUNC_3(VAR_5->key_twk, VAR_3 + 128);
  break;
 }

 FUNC_4(VAR_5->key_dec, VAR_5->key_enc, VAR_4);

 return 0;
}
