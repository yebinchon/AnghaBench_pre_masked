
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
struct p8_aes_ctr_ctx {int enc_key; int fallback; } ;
struct crypto_skcipher {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int,int *,int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 () ;
 struct p8_aes_ctr_ctx* FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct skcipher_request*) ;
 struct crypto_skcipher* FUNC_5 (struct skcipher_request*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct p8_aes_ctr_ctx const*,struct skcipher_walk*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 struct skcipher_request* FUNC_13 (struct skcipher_request*) ;
 int FUNC_14 (struct skcipher_request*,int ) ;
 int FUNC_15 (struct skcipher_walk*,unsigned int) ;
 int FUNC_16 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_17(struct skcipher_request *VAR_1)
{
 struct crypto_skcipher *VAR_2 = FUNC_5(VAR_1);
 const struct p8_aes_ctr_ctx *VAR_3 = FUNC_3(VAR_2);
 struct skcipher_walk VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 if (!FUNC_2()) {
  struct skcipher_request *VAR_7 = FUNC_13(VAR_1);

  *VAR_7 = *VAR_1;
  FUNC_14(VAR_7, VAR_3->fallback);
  return FUNC_4(VAR_7);
 }

 VAR_6 = FUNC_16(&VAR_4, VAR_1, 0);
 while ((VAR_5 = VAR_4.nbytes) >= VAR_0) {
  FUNC_11();
  FUNC_9();
  FUNC_7();
  FUNC_0(VAR_4.src.virt.addr,
         VAR_4.dst.virt.addr,
         VAR_5 / VAR_0,
         &VAR_3->enc_key, VAR_4.iv);
  FUNC_6();
  FUNC_10();
  FUNC_12();

  do {
   FUNC_1(VAR_4.iv, VAR_0);
  } while ((VAR_5 -= VAR_0) >= VAR_0);

  VAR_6 = FUNC_15(&VAR_4, VAR_5);
 }
 if (VAR_5) {
  FUNC_8(VAR_3, &VAR_4);
  VAR_6 = FUNC_15(&VAR_4, 0);
 }
 return VAR_6;
}
