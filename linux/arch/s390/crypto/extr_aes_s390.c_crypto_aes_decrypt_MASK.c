
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cip; } ;
struct s390_aes_ctx {int fc; int key; TYPE_1__ fallback; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int *,int const*,int ) ;
 int FUNC_1 (int ,int *,int const*) ;
 struct s390_aes_ctx* FUNC_2 (struct crypto_tfm*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct crypto_tfm *VAR_2, u8 *VAR_3, const u8 *VAR_4)
{
 struct s390_aes_ctx *VAR_5 = FUNC_2(VAR_2);

 if (FUNC_3(!VAR_5->fc)) {
  FUNC_1(VAR_5->fallback.cip, VAR_3, VAR_4);
  return;
 }
 FUNC_0(VAR_5->fc | VAR_1,
   &VAR_5->key, VAR_3, VAR_4, VAR_0);
}
