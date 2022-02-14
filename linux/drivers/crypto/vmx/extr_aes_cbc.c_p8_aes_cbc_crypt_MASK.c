
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; int iv; TYPE_4__ dst; TYPE_2__ src; } ;
struct skcipher_request {int dummy; } ;
struct p8_aes_cbc_ctx {int dec_key; int enc_key; int fallback; } ;
struct crypto_skcipher {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int ,int) ;
 int FUNC_1 () ;
 struct p8_aes_cbc_ctx* FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 (struct skcipher_request*) ;
 struct crypto_skcipher* FUNC_5 (struct skcipher_request*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (unsigned int,unsigned int) ;
 struct skcipher_request* FUNC_13 (struct skcipher_request*) ;
 int FUNC_14 (struct skcipher_request*,int ) ;
 int FUNC_15 (struct skcipher_walk*,unsigned int) ;
 int FUNC_16 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_17(struct skcipher_request *VAR_1, int VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_5(VAR_1);
 const struct p8_aes_cbc_ctx *VAR_4 = FUNC_2(VAR_3);
 struct skcipher_walk VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 if (!FUNC_1()) {
  struct skcipher_request *VAR_8 = FUNC_13(VAR_1);

  *VAR_8 = *VAR_1;
  FUNC_14(VAR_8, VAR_4->fallback);
  return VAR_2 ? FUNC_4(VAR_8) :
        FUNC_3(VAR_8);
 }

 VAR_7 = FUNC_16(&VAR_5, VAR_1, 0);
 while ((VAR_6 = VAR_5.nbytes) != 0) {
  FUNC_10();
  FUNC_8();
  FUNC_7();
  FUNC_0(VAR_5.src.virt.addr,
       VAR_5.dst.virt.addr,
       FUNC_12(VAR_6, VAR_0),
       VAR_2 ? &VAR_4->enc_key : &VAR_4->dec_key,
       VAR_5.iv, VAR_2);
  FUNC_6();
  FUNC_9();
  FUNC_11();

  VAR_7 = FUNC_15(&VAR_5, VAR_6 % VAR_0);
 }
 return VAR_7;
}
