
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {TYPE_1__* aead; } ;
struct ipsec_sa_entry {int enckey_len; int kctx_len; int key; int key_ctx_hdr; int salt; } ;
struct crypto_aes_ctx {int dummy; } ;
struct _key_ctx {int dummy; } ;
typedef int aes ;
struct TYPE_2__ {int alg_key_len; unsigned char* alg_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int VAR_8 ;
 int FUNC_1 (int,int ,int ,int ,int) ;
 int FUNC_2 (struct crypto_aes_ctx*,unsigned char*,unsigned char*) ;
 int FUNC_3 (struct crypto_aes_ctx*,unsigned char*,int) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (struct crypto_aes_ctx*,int) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static inline int FUNC_8(struct xfrm_state *VAR_9,
        struct ipsec_sa_entry *VAR_10)
{
 int VAR_11 = (VAR_9->aead->alg_key_len + 7) / 8;
 unsigned char *VAR_12 = VAR_9->aead->alg_key;
 int VAR_13, VAR_14 = 0;
 unsigned char VAR_15[VAR_0];
 struct crypto_aes_ctx VAR_16;
 int VAR_17 = 0;

 if (VAR_11 > 3) {
  VAR_11 -= 4;
  FUNC_4(VAR_10->salt, VAR_12 + VAR_11, 4);
 }

 if (VAR_11 == VAR_1) {
  VAR_13 = VAR_4;
 } else if (VAR_11 == VAR_2) {
  VAR_13 = VAR_5;
 } else if (VAR_11 == VAR_3) {
  VAR_13 = VAR_6;
 } else {
  FUNC_7("GCM: Invalid key length %d\n", VAR_11);
  VAR_17 = -VAR_8;
  goto out;
 }

 FUNC_4(VAR_10->key, VAR_12, VAR_11);
 VAR_10->enckey_len = VAR_11;
 VAR_14 = sizeof(struct _key_ctx) +
         ((FUNC_0(VAR_11, 16)) << 4) +
         VAR_0;

 VAR_10->key_ctx_hdr = FUNC_1(VAR_13,
       VAR_7,
       0, 0,
       VAR_14 >> 4);




 VAR_17 = FUNC_3(&VAR_16, VAR_12, VAR_11);
 if (VAR_17) {
  VAR_10->enckey_len = 0;
  goto out;
 }
 FUNC_5(VAR_15, 0, VAR_0);
 FUNC_2(&VAR_16, VAR_15, VAR_15);
 FUNC_6(&VAR_16, sizeof(VAR_16));

 FUNC_4(VAR_10->key + (FUNC_0(VAR_10->enckey_len, 16) *
        16), VAR_15, VAR_0);
 VAR_10->kctx_len = ((FUNC_0(VAR_10->enckey_len, 16)) << 4) +
         VAR_0;
out:
 return VAR_17;
}
