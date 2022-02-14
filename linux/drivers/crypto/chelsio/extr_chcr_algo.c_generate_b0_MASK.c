
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct chcr_aead_reqctx {int* scratch_pad; } ;
struct aead_request {scalar_t__ cryptlen; scalar_t__ assoclen; } ;


 unsigned short VAR_0 ;
 struct chcr_aead_reqctx* FUNC_0 (struct aead_request*) ;
 unsigned int FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct aead_request *VAR_1, u8 *VAR_2,
   unsigned short VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 int VAR_7;
 struct crypto_aead *VAR_8 = FUNC_2(VAR_1);
 struct chcr_aead_reqctx *VAR_9 = FUNC_0(VAR_1);
 u8 *VAR_10 = VAR_9->scratch_pad;

 VAR_6 = FUNC_1(VAR_8);

 FUNC_3(VAR_10, VAR_2, 16);

 VAR_5 = VAR_10[0];
 VAR_4 = VAR_5 + 1;


 *VAR_10 |= (8 * ((VAR_6 - 2) / 2));


 if (VAR_1->assoclen)
  *VAR_10 |= 64;
 VAR_7 = FUNC_4(VAR_10 + 16 - VAR_4,
    (VAR_3 == VAR_0) ?
    VAR_1->cryptlen - VAR_6 : VAR_1->cryptlen, VAR_4);

 return VAR_7;
}
