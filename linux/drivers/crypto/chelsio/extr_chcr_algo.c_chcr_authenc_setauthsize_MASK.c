
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_aead {int dummy; } ;
struct chcr_aead_ctx {int sw_cipher; void* mayverify; void* hmac_ctrl; } ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_14,
        unsigned int VAR_15)
{
 struct chcr_aead_ctx *VAR_16 = FUNC_0(FUNC_1(VAR_14));
 u32 VAR_17 = FUNC_2(VAR_14);





 if (VAR_15 == VAR_10) {
  VAR_16->hmac_ctrl = VAR_3;
  VAR_16->mayverify = VAR_12;
 } else if (VAR_15 == VAR_11) {
  VAR_16->hmac_ctrl = VAR_4;
  VAR_16->mayverify = VAR_12;
 } else if (VAR_15 == VAR_7) {
  VAR_16->hmac_ctrl = VAR_6;
  VAR_16->mayverify = VAR_12;
 } else if (VAR_15 == VAR_8) {
  VAR_16->hmac_ctrl = VAR_1;
  VAR_16->mayverify = VAR_12;
 } else if (VAR_15 == VAR_9) {
  VAR_16->hmac_ctrl = VAR_5;
  VAR_16->mayverify = VAR_12;
 } else if (VAR_15 == (VAR_17 >> 1)) {
  VAR_16->hmac_ctrl = VAR_0;
  VAR_16->mayverify = VAR_12;
 } else if (VAR_15 == VAR_17) {
  VAR_16->hmac_ctrl = VAR_2;
  VAR_16->mayverify = VAR_12;
 } else {
  VAR_16->hmac_ctrl = VAR_2;
  VAR_16->mayverify = VAR_13;
 }
 return FUNC_3(VAR_16->sw_cipher, VAR_15);
}
