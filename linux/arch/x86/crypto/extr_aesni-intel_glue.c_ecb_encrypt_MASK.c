
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
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct skcipher_walk {unsigned int nbytes; TYPE_2__ src; TYPE_4__ dst; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_aes_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct crypto_aes_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_aes_ctx*,int ,int ,unsigned int) ;
 int FUNC_2 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct skcipher_walk*,unsigned int) ;
 int FUNC_7 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_8(struct skcipher_request *VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_3(VAR_2);
 struct crypto_aes_ctx *VAR_4 = FUNC_0(FUNC_2(VAR_3));
 struct skcipher_walk VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_7(&VAR_5, VAR_2, 1);

 FUNC_4();
 while ((VAR_6 = VAR_5.nbytes)) {
  FUNC_1(VAR_4, VAR_5.dst.virt.addr, VAR_5.src.virt.addr,
         VAR_6 & VAR_0);
  VAR_6 &= VAR_1 - 1;
  VAR_7 = FUNC_6(&VAR_5, VAR_6);
 }
 FUNC_5();

 return VAR_7;
}
