
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tls12_crypto_info_aes_gcm_128 {unsigned char* key; unsigned char* salt; } ;
struct crypto_aes_ctx {int dummy; } ;
struct TYPE_2__ {int keylen; int crypto_info; } ;
struct chtls_sock {TYPE_1__ tlshws; } ;
struct _key_ctx {unsigned char* salt; unsigned char* key; int ctx_hdr; } ;
typedef int aes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int ,int) ;
 int FUNC_1 (int,int ,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct crypto_aes_ctx*,unsigned char*,unsigned char*) ;
 int FUNC_3 (struct crypto_aes_ctx*,unsigned char*,int) ;
 int FUNC_4 (struct _key_ctx*) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;
 int FUNC_6 (unsigned char*,int ,int) ;
 int FUNC_7 (struct crypto_aes_ctx*,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct chtls_sock *VAR_7,
     struct _key_ctx *VAR_8,
     u32 VAR_9, u32 VAR_10)
{
 unsigned char VAR_11[VAR_1];
 struct tls12_crypto_info_aes_gcm_128 *VAR_12;
 unsigned char VAR_13[VAR_0];
 int VAR_14, VAR_15;
 struct crypto_aes_ctx VAR_16;
 int VAR_17;

 VAR_12 = (struct tls12_crypto_info_aes_gcm_128 *)
    &VAR_7->tlshws.crypto_info;

 VAR_15 = sizeof(struct _key_ctx) +
         FUNC_9(VAR_9, 16) + VAR_0;

 if (VAR_9 == VAR_1) {
  VAR_14 = VAR_2;
 } else {
  FUNC_8("GCM: Invalid key length %d\n", VAR_9);
  return -VAR_4;
 }
 FUNC_5(VAR_11, VAR_12->key, VAR_9);




 VAR_17 = FUNC_3(&VAR_16, VAR_11, VAR_9);
 if (VAR_17)
  return VAR_17;

 FUNC_6(VAR_13, 0, VAR_0);
 FUNC_2(&VAR_16, VAR_13, VAR_13);
 FUNC_7(&VAR_16, sizeof(VAR_16));
 VAR_7->tlshws.keylen = VAR_15;


 if (VAR_10 == VAR_6) {
  int VAR_18;

  VAR_18 = ((VAR_15 >> 4) << 3);
  VAR_8->ctx_hdr = FUNC_0(VAR_14,
       VAR_3,
       0, 0, VAR_18);
  FUNC_4(VAR_8);
 } else {
  VAR_8->ctx_hdr = FUNC_1(VAR_14,
       VAR_3,
       0, 0, VAR_15 >> 4);
 }

 FUNC_5(VAR_8->salt, VAR_12->salt, VAR_5);
 FUNC_5(VAR_8->key, VAR_12->key, VAR_9);
 FUNC_5(VAR_8->key + VAR_9, VAR_13, VAR_0);

 FUNC_6(VAR_12->key, 0, VAR_9);

 return 0;
}
