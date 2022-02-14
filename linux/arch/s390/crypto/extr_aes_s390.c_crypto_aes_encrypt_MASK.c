
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cip; } ;
struct s390_aes_ctx {int key; int fc; TYPE_1__ fallback; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int const*,int ) ;
 int FUNC_1 (int ,int *,int const*) ;
 struct s390_aes_ctx* FUNC_2 (struct crypto_tfm*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct crypto_tfm *VAR_1, u8 *VAR_2, const u8 *VAR_3)
{
 struct s390_aes_ctx *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_3(!VAR_4->fc)) {
  FUNC_1(VAR_4->fallback.cip, VAR_2, VAR_3);
  return;
 }
 FUNC_0(VAR_4->fc, &VAR_4->key, VAR_2, VAR_3, VAR_0);
}
