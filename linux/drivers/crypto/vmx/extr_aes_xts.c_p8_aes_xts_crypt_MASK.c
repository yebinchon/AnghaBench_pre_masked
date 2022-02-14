
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; TYPE_4__ dst; TYPE_2__ src; int iv; } ;
struct skcipher_request {int cryptlen; } ;
struct p8_aes_xts_ctx {int dec_key; int enc_key; int tweak_key; int fallback; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 () ;
 struct p8_aes_xts_ctx* FUNC_4 (struct crypto_skcipher*) ;
 int FUNC_5 (struct skcipher_request*) ;
 int FUNC_6 (struct skcipher_request*) ;
 struct crypto_skcipher* FUNC_7 (struct skcipher_request*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (unsigned int,int) ;
 struct skcipher_request* FUNC_15 (struct skcipher_request*) ;
 int FUNC_16 (struct skcipher_request*,int ) ;
 int FUNC_17 (struct skcipher_walk*,unsigned int) ;
 int FUNC_18 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_19(struct skcipher_request *VAR_2, int VAR_3)
{
 struct crypto_skcipher *VAR_4 = FUNC_7(VAR_2);
 const struct p8_aes_xts_ctx *VAR_5 = FUNC_4(VAR_4);
 struct skcipher_walk VAR_6;
 unsigned int VAR_7;
 u8 VAR_8[VAR_0];
 int VAR_9;

 if (!FUNC_3() || (VAR_2->cryptlen % VAR_1) != 0) {
  struct skcipher_request *VAR_10 = FUNC_15(VAR_2);

  *VAR_10 = *VAR_2;
  FUNC_16(VAR_10, VAR_5->fallback);
  return VAR_3 ? FUNC_6(VAR_10) :
        FUNC_5(VAR_10);
 }

 VAR_9 = FUNC_18(&VAR_6, VAR_2, 0);
 if (VAR_9)
  return VAR_9;

 FUNC_12();
 FUNC_10();
 FUNC_9();

 FUNC_0(VAR_6.iv, VAR_8, &VAR_5->tweak_key);

 FUNC_8();
 FUNC_11();
 FUNC_13();

 while ((VAR_7 = VAR_6.nbytes) != 0) {
  FUNC_12();
  FUNC_10();
  FUNC_9();
  if (VAR_3)
   FUNC_2(VAR_6.src.virt.addr,
        VAR_6.dst.virt.addr,
        FUNC_14(VAR_7, VAR_0),
        &VAR_5->enc_key, ((void*)0), VAR_8);
  else
   FUNC_1(VAR_6.src.virt.addr,
        VAR_6.dst.virt.addr,
        FUNC_14(VAR_7, VAR_0),
        &VAR_5->dec_key, ((void*)0), VAR_8);
  FUNC_8();
  FUNC_11();
  FUNC_13();

  VAR_9 = FUNC_17(&VAR_6, VAR_7 % VAR_0);
 }
 return VAR_9;
}
