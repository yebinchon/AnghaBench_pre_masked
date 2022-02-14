
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct crypto_ahash {int dummy; } ;
struct crypto_aes_ctx {int dummy; } ;
struct TYPE_3__ {unsigned int key_len; int* key; int* k1; int* k2; int kn_len; int key_sg; int k2_sg; int k1_sg; int mode; int type; } ;
struct TYPE_4__ {TYPE_1__ aes; } ;
struct ccp_ctx {TYPE_2__ u; } ;
struct ccp_crypto_ahash_alg {int mode; } ;
typedef int aes ;
typedef int __be64 ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct crypto_aes_ctx*,int*,int*) ;
 int FUNC_1 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 int FUNC_2 (int ) ;
 struct ccp_crypto_ahash_alg* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct crypto_ahash*,int ) ;
 int FUNC_6 (struct crypto_ahash*) ;
 struct ccp_ctx* FUNC_7 (int ) ;
 int FUNC_8 (int*,int const*,unsigned int) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (struct crypto_aes_ctx*,int) ;
 int FUNC_11 (int *,int*,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct crypto_ahash *VAR_5, const u8 *VAR_6,
          unsigned int VAR_7)
{
 struct ccp_ctx *VAR_8 = FUNC_7(FUNC_6(VAR_5));
 struct ccp_crypto_ahash_alg *VAR_9 =
  FUNC_3(FUNC_6(VAR_5));
 u64 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u64 VAR_16 = 0x00, VAR_17 = 0x87;
 struct crypto_aes_ctx VAR_18;
 __be64 *VAR_19;
 int VAR_20;

 switch (VAR_7) {
 case 130:
  VAR_8->u.aes.type = VAR_0;
  break;
 case 129:
  VAR_8->u.aes.type = VAR_1;
  break;
 case 128:
  VAR_8->u.aes.type = VAR_2;
  break;
 default:
  FUNC_5(VAR_5, VAR_3);
  return -VAR_4;
 }
 VAR_8->u.aes.mode = VAR_9->mode;


 VAR_8->u.aes.key_len = 0;


 VAR_20 = FUNC_1(&VAR_18, VAR_6, VAR_7);
 if (VAR_20)
  return VAR_20;


 FUNC_9(VAR_8->u.aes.key, 0, sizeof(VAR_8->u.aes.key));
 FUNC_0(&VAR_18, VAR_8->u.aes.key, VAR_8->u.aes.key);
 FUNC_10(&VAR_18, sizeof(VAR_18));


 VAR_10 = FUNC_2(*((__be64 *)VAR_8->u.aes.key));
 VAR_11 = FUNC_2(*((__be64 *)VAR_8->u.aes.key + 1));

 VAR_12 = (VAR_10 << 1) | (VAR_11 >> 63);
 VAR_13 = VAR_11 << 1;
 if (VAR_8->u.aes.key[0] & 0x80) {
  VAR_12 ^= VAR_16;
  VAR_13 ^= VAR_17;
 }
 VAR_19 = (__be64 *)VAR_8->u.aes.k1;
 *VAR_19 = FUNC_4(VAR_12);
 VAR_19++;
 *VAR_19 = FUNC_4(VAR_13);

 VAR_14 = (VAR_12 << 1) | (VAR_13 >> 63);
 VAR_15 = VAR_13 << 1;
 if (VAR_8->u.aes.k1[0] & 0x80) {
  VAR_14 ^= VAR_16;
  VAR_15 ^= VAR_17;
 }
 VAR_19 = (__be64 *)VAR_8->u.aes.k2;
 *VAR_19 = FUNC_4(VAR_14);
 VAR_19++;
 *VAR_19 = FUNC_4(VAR_15);

 VAR_8->u.aes.kn_len = sizeof(VAR_8->u.aes.k1);
 FUNC_11(&VAR_8->u.aes.k1_sg, VAR_8->u.aes.k1, sizeof(VAR_8->u.aes.k1));
 FUNC_11(&VAR_8->u.aes.k2_sg, VAR_8->u.aes.k2, sizeof(VAR_8->u.aes.k2));


 FUNC_9(VAR_8->u.aes.key, 0, sizeof(VAR_8->u.aes.key));
 FUNC_8(VAR_8->u.aes.key, VAR_6, VAR_7);
 VAR_8->u.aes.key_len = VAR_7;
 FUNC_11(&VAR_8->u.aes.key_sg, VAR_8->u.aes.key, VAR_7);

 return VAR_20;
}
