
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {TYPE_4__ virt; } ;
struct skcipher_walk {unsigned int nbytes; TYPE_2__ src; TYPE_3__ dst; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_aes_ctx {int key_dec; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,unsigned int) ;
 struct crypto_aes_ctx* FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct crypto_aes_ctx*) ;
 int FUNC_6 (struct skcipher_walk*,unsigned int) ;
 int FUNC_7 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_8(struct skcipher_request *VAR_1)
{
 struct crypto_skcipher *VAR_2 = FUNC_2(VAR_1);
 struct crypto_aes_ctx *VAR_3 = FUNC_1(VAR_2);
 struct skcipher_walk VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_7(&VAR_4, VAR_1, 0);

 while ((VAR_5 = (VAR_4.nbytes / VAR_0))) {
  FUNC_3();
  FUNC_0(VAR_4.dst.virt.addr, VAR_4.src.virt.addr,
       VAR_3->key_dec, FUNC_5(VAR_3), VAR_5);
  FUNC_4();
  VAR_6 = FUNC_6(&VAR_4, VAR_4.nbytes % VAR_0);
 }
 return VAR_6;
}
