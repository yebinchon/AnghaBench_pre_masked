
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_tfm {int crt_flags; } ;
struct TYPE_2__ {int crt_flags; } ;
struct crypto_ablkcipher {TYPE_1__ base; } ;
struct ablk_ctx {int sw_cipher; } ;


 struct ablk_ctx* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct crypto_ablkcipher*) ;
 struct crypto_tfm* FUNC_2 (struct crypto_ablkcipher*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct crypto_ablkcipher *VAR_2,
           const u8 *VAR_3,
           unsigned int VAR_4)
{
 struct crypto_tfm *VAR_5 = FUNC_2(VAR_2);
 struct ablk_ctx *VAR_6 = FUNC_0(FUNC_1(VAR_2));
 int VAR_7 = 0;

 FUNC_3(VAR_6->sw_cipher,
    VAR_0);
 FUNC_5(VAR_6->sw_cipher,
    VAR_2->base.crt_flags & VAR_0);
 VAR_7 = FUNC_6(VAR_6->sw_cipher, VAR_3, VAR_4);
 VAR_5->crt_flags &= ~VAR_1;
 VAR_5->crt_flags |=
  FUNC_4(VAR_6->sw_cipher) &
  VAR_1;
 return VAR_7;
}
