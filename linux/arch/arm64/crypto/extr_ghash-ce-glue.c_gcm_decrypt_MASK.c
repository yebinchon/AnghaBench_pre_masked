
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int const u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_9__ {int const* addr; } ;
struct TYPE_10__ {TYPE_3__ virt; } ;
struct TYPE_7__ {int const* addr; } ;
struct TYPE_8__ {TYPE_1__ virt; } ;
struct skcipher_walk {int total; int nbytes; TYPE_4__ src; TYPE_2__ dst; } ;
struct TYPE_11__ {int * key_enc; } ;
struct gcm_aes_ctx {int ghash_key; TYPE_5__ aes_key; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {scalar_t__ cryptlen; scalar_t__ assoclen; int src; int const* iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,int const*,int const*) ;
 unsigned int FUNC_1 (struct crypto_aead*) ;
 struct gcm_aes_ctx* FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (int const*,int) ;
 scalar_t__ FUNC_5 (int const*,int const*,unsigned int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int const*,int const*,int const*,int) ;
 int FUNC_8 (struct aead_request*,int *) ;
 int FUNC_9 (struct aead_request*,struct gcm_aes_ctx*,int *,int const*,scalar_t__) ;
 int FUNC_10 (int,int *,int const*,int *,int const*,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int const*,int const*,unsigned int) ;
 int FUNC_15 (int const*,int ,int) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (int,int *,int const*,int const*,int *,int const*,int const*,int) ;
 int FUNC_18 (int const*,int const*,int *,int) ;
 int VAR_4 ;
 int FUNC_19 (int,int const*) ;
 int FUNC_20 (int const*,int ,scalar_t__,unsigned int,int ) ;
 int FUNC_21 (struct skcipher_walk*,struct aead_request*,int) ;
 int FUNC_22 (struct skcipher_walk*,int) ;

__attribute__((used)) static int FUNC_23(struct aead_request *VAR_5)
{
 struct crypto_aead *VAR_6 = FUNC_3(VAR_5);
 struct gcm_aes_ctx *VAR_7 = FUNC_2(VAR_6);
 unsigned int VAR_8 = FUNC_1(VAR_6);
 struct skcipher_walk VAR_9;
 u8 VAR_10[2 * VAR_0];
 u8 VAR_11[VAR_0];
 u8 VAR_12[2 * VAR_3];
 u64 VAR_13[2] = {};
 int VAR_14 = FUNC_16(&VAR_7->aes_key);
 int VAR_15;

 if (VAR_5->assoclen)
  FUNC_8(VAR_5, VAR_13);

 FUNC_14(VAR_10, VAR_5->iv, VAR_2);
 FUNC_19(1, VAR_10 + VAR_2);

 VAR_15 = FUNC_21(&VAR_9, VAR_5, 0);

 if (FUNC_13(FUNC_6() && VAR_9.total >= 2 * VAR_0)) {
  u32 const *VAR_16 = ((void*)0);

  FUNC_11();
  FUNC_18(VAR_11, VAR_10, VAR_7->aes_key.key_enc, VAR_14);
  FUNC_19(2, VAR_10 + VAR_2);

  do {
   int VAR_17 = VAR_9.nbytes / (2 * VAR_0) * 2;
   int VAR_18 = VAR_9.total - VAR_17 * VAR_0;

   if (VAR_16)
    FUNC_11();

   FUNC_17(VAR_17, VAR_13, VAR_9.dst.virt.addr,
       VAR_9.src.virt.addr, &VAR_7->ghash_key,
       VAR_10, VAR_16, VAR_14);


   if (VAR_18 < (2 * VAR_0)) {
    u8 *VAR_19 = VAR_10 + VAR_0;

    if (VAR_18 > VAR_0) {
     FUNC_14(VAR_19, VAR_10, VAR_0);
     FUNC_4(VAR_19, VAR_0);
    }

    FUNC_18(VAR_10, VAR_10, ((void*)0), VAR_14);

    if (VAR_18 > VAR_0)
     FUNC_18(VAR_19, VAR_19, ((void*)0),
        VAR_14);
   }

   FUNC_12();

   VAR_15 = FUNC_22(&VAR_9,
     VAR_9.nbytes % (2 * VAR_0));

   VAR_16 = VAR_7->aes_key.key_enc;
  } while (VAR_9.nbytes >= 2 * VAR_0);
 } else {
  FUNC_0(&VAR_7->aes_key, VAR_11, VAR_10);
  FUNC_19(2, VAR_10 + VAR_2);

  while (VAR_9.nbytes >= (2 * VAR_0)) {
   int VAR_20 = VAR_9.nbytes / (2 * VAR_0) * 2;
   u8 *VAR_21 = VAR_9.dst.virt.addr;
   u8 *VAR_22 = VAR_9.src.virt.addr;

   FUNC_10(VAR_20, VAR_13, VAR_9.src.virt.addr,
     &VAR_7->ghash_key, ((void*)0),
     VAR_4);

   do {
    FUNC_0(&VAR_7->aes_key, VAR_12, VAR_10);
    FUNC_7(VAR_21, VAR_22, VAR_12, VAR_0);
    FUNC_4(VAR_10, VAR_0);

    VAR_21 += VAR_0;
    VAR_22 += VAR_0;
   } while (--VAR_20 > 0);

   VAR_15 = FUNC_22(&VAR_9,
       VAR_9.nbytes % (2 * VAR_0));
  }
  if (VAR_9.nbytes) {
   if (VAR_9.nbytes > VAR_0) {
    u8 *VAR_23 = VAR_10 + VAR_0;

    FUNC_14(VAR_23, VAR_10, VAR_0);
    FUNC_4(VAR_23, VAR_0);

    FUNC_0(&VAR_7->aes_key, VAR_23, VAR_23);
   }
   FUNC_0(&VAR_7->aes_key, VAR_10, VAR_10);
  }
 }


 if (VAR_9.nbytes) {
  const u8 *VAR_24 = VAR_9.src.virt.addr;
  const u8 *VAR_25 = ((void*)0);
  unsigned int VAR_26 = VAR_9.nbytes;

  if (VAR_9.nbytes > VAR_3) {
   VAR_25 = VAR_24;
   VAR_24 += VAR_3;
   VAR_26 %= VAR_3;
  }

  FUNC_14(VAR_12, VAR_24, VAR_26);
  FUNC_15(VAR_12 + VAR_26, 0, VAR_3 - VAR_26);
  FUNC_10(!!VAR_26, VAR_13, VAR_12, &VAR_7->ghash_key, VAR_25,
    VAR_4);

  FUNC_7(VAR_9.dst.virt.addr, VAR_9.src.virt.addr, VAR_10,
          VAR_9.nbytes);

  VAR_15 = FUNC_22(&VAR_9, 0);
 }

 if (VAR_15)
  return VAR_15;

 FUNC_9(VAR_5, VAR_7, VAR_13, VAR_11, VAR_5->cryptlen - VAR_8);


 FUNC_20(VAR_12, VAR_5->src,
     VAR_5->assoclen + VAR_5->cryptlen - VAR_8,
     VAR_8, 0);

 if (FUNC_5(VAR_11, VAR_12, VAR_8))
  return -VAR_1;
 return 0;
}
