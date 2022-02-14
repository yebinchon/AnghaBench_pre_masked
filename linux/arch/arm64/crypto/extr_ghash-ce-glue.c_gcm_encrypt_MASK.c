
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_9__ {int * addr; } ;
struct TYPE_10__ {TYPE_3__ virt; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_1__ virt; } ;
struct skcipher_walk {int total; int nbytes; TYPE_4__ src; TYPE_2__ dst; } ;
struct TYPE_11__ {int * key_enc; } ;
struct gcm_aes_ctx {int ghash_key; TYPE_5__ aes_key; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {scalar_t__ cryptlen; scalar_t__ assoclen; int dst; int * iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int *,int *) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct gcm_aes_ctx* FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,int *,int *,int) ;
 int FUNC_7 (struct aead_request*,int *) ;
 int FUNC_8 (struct aead_request*,struct gcm_aes_ctx*,int *,int *,scalar_t__) ;
 int FUNC_9 (int const,int *,int *,int *,int *,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *,int *,unsigned int) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (int,int *,int *,int *,int *,int *,int const*,int,int *) ;
 int FUNC_17 (int *,int *,int *,int) ;
 int VAR_3 ;
 int FUNC_18 (int,int *) ;
 int FUNC_19 (int *,int ,scalar_t__,int ,int) ;
 int FUNC_20 (struct skcipher_walk*,struct aead_request*,int) ;
 int FUNC_21 (struct skcipher_walk*,int) ;

__attribute__((used)) static int FUNC_22(struct aead_request *VAR_4)
{
 struct crypto_aead *VAR_5 = FUNC_3(VAR_4);
 struct gcm_aes_ctx *VAR_6 = FUNC_2(VAR_5);
 struct skcipher_walk VAR_7;
 u8 VAR_8[VAR_0];
 u8 VAR_9[2 * VAR_0];
 u8 VAR_10[VAR_0];
 u64 VAR_11[2] = {};
 int VAR_12 = FUNC_15(&VAR_6->aes_key);
 int VAR_13;

 if (VAR_4->assoclen)
  FUNC_7(VAR_4, VAR_11);

 FUNC_13(VAR_8, VAR_4->iv, VAR_1);
 FUNC_18(1, VAR_8 + VAR_1);

 VAR_13 = FUNC_20(&VAR_7, VAR_4, 0);

 if (FUNC_12(FUNC_5() && VAR_7.total >= 2 * VAR_0)) {
  u32 const *VAR_14 = ((void*)0);

  FUNC_10();
  FUNC_17(VAR_10, VAR_8, VAR_6->aes_key.key_enc, VAR_12);
  FUNC_18(2, VAR_8 + VAR_1);
  FUNC_17(VAR_9, VAR_8, ((void*)0), VAR_12);
  FUNC_18(3, VAR_8 + VAR_1);
  FUNC_17(VAR_9 + VAR_0, VAR_8, ((void*)0), VAR_12);
  FUNC_18(4, VAR_8 + VAR_1);

  do {
   int VAR_15 = VAR_7.nbytes / (2 * VAR_0) * 2;

   if (VAR_14)
    FUNC_10();

   FUNC_16(VAR_15, VAR_11, VAR_7.dst.virt.addr,
       VAR_7.src.virt.addr, &VAR_6->ghash_key,
       VAR_8, VAR_14, VAR_12, VAR_9);
   FUNC_11();

   VAR_13 = FUNC_21(&VAR_7,
     VAR_7.nbytes % (2 * VAR_0));

   VAR_14 = VAR_6->aes_key.key_enc;
  } while (VAR_7.nbytes >= 2 * VAR_0);
 } else {
  FUNC_0(&VAR_6->aes_key, VAR_10, VAR_8);
  FUNC_18(2, VAR_8 + VAR_1);

  while (VAR_7.nbytes >= (2 * VAR_0)) {
   const int VAR_16 =
    VAR_7.nbytes / (2 * VAR_0) * 2;
   u8 *VAR_17 = VAR_7.dst.virt.addr;
   u8 *VAR_18 = VAR_7.src.virt.addr;
   int VAR_19 = VAR_16;

   do {
    FUNC_0(&VAR_6->aes_key, VAR_9, VAR_8);
    FUNC_6(VAR_17, VAR_18, VAR_9, VAR_0);
    FUNC_4(VAR_8, VAR_0);

    VAR_17 += VAR_0;
    VAR_18 += VAR_0;
   } while (--VAR_19 > 0);

   FUNC_9(VAR_16, VAR_11,
     VAR_7.dst.virt.addr, &VAR_6->ghash_key,
     ((void*)0), VAR_3);

   VAR_13 = FUNC_21(&VAR_7,
       VAR_7.nbytes % (2 * VAR_0));
  }
  if (VAR_7.nbytes) {
   FUNC_0(&VAR_6->aes_key, VAR_9, VAR_8);
   if (VAR_7.nbytes > VAR_0) {
    FUNC_4(VAR_8, VAR_0);
    FUNC_0(&VAR_6->aes_key, VAR_9 + VAR_0, VAR_8);
   }
  }
 }


 if (VAR_7.nbytes) {
  u8 VAR_20[VAR_2];
  unsigned int VAR_21 = VAR_7.nbytes;
  u8 *VAR_22 = VAR_7.dst.virt.addr;
  u8 *VAR_23 = ((void*)0);

  FUNC_6(VAR_7.dst.virt.addr, VAR_7.src.virt.addr, VAR_9,
          VAR_7.nbytes);

  if (VAR_7.nbytes > VAR_2) {
   VAR_23 = VAR_22;
   VAR_22 += VAR_2;
   VAR_21 %= VAR_2;
  }

  FUNC_13(VAR_20, VAR_22, VAR_21);
  FUNC_14(VAR_20 + VAR_21, 0, VAR_2 - VAR_21);
  FUNC_9(!!VAR_21, VAR_11, VAR_20, &VAR_6->ghash_key, VAR_23,
    VAR_3);

  VAR_13 = FUNC_21(&VAR_7, 0);
 }

 if (VAR_13)
  return VAR_13;

 FUNC_8(VAR_4, VAR_6, VAR_11, VAR_10, VAR_4->cryptlen);


 FUNC_19(VAR_10, VAR_4->dst, VAR_4->assoclen + VAR_4->cryptlen,
     FUNC_1(VAR_5), 1);

 return 0;
}
