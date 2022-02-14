
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct chcr_aead_reqctx {scalar_t__ scratch_pad; } ;
struct chcr_aead_ctx {int * salt; } ;
struct aead_request {int * iv; } ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct crypto_aead*) ;
 struct chcr_aead_reqctx* FUNC_2 (struct aead_request*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct aead_request*,int*,unsigned short) ;
 unsigned short FUNC_5 (unsigned int) ;
 int FUNC_6 (int*,int *,int) ;
 int FUNC_7 (int*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct aead_request *VAR_1,
        u8 *VAR_2,
        unsigned int VAR_3,
        unsigned short VAR_4,
        unsigned int VAR_5)
{
 struct chcr_aead_reqctx *VAR_6 = FUNC_2(VAR_1);
 struct crypto_aead *VAR_7 = FUNC_3(VAR_1);
 struct chcr_aead_ctx *VAR_8 = FUNC_0(FUNC_1(VAR_7));
 int VAR_9 = 0;

 if (VAR_3 == VAR_0) {
  VAR_2[0] = 3;
  FUNC_6(VAR_2 + 1, &VAR_8->salt[0], 3);
  FUNC_6(VAR_2 + 4, VAR_1->iv, 8);
  FUNC_7(VAR_2 + 12, 0, 4);
 } else {
  FUNC_6(VAR_2, VAR_1->iv, 16);
 }
 if (VAR_5)
  *((unsigned short *)(VAR_6->scratch_pad + 16)) =
    FUNC_5(VAR_5);

 VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_4);

 FUNC_7(VAR_2 + 15 - VAR_2[0], 0, VAR_2[0] + 1);
 return VAR_9;
}
