
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ addr; } ;
struct TYPE_5__ {TYPE_4__ virt; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct TYPE_7__ {TYPE_2__ virt; } ;
struct skcipher_walk {unsigned int nbytes; TYPE_1__ dst; TYPE_3__ src; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_cipher {int dummy; } ;


 unsigned int FUNC_0 (struct skcipher_request*,struct skcipher_walk*,struct crypto_cipher*) ;
 unsigned int FUNC_1 (struct skcipher_request*,struct skcipher_walk*,struct crypto_cipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 struct crypto_cipher* FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct skcipher_walk*,unsigned int) ;
 int FUNC_5 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_6(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_2(VAR_0);
 struct crypto_cipher *VAR_2 = FUNC_3(VAR_1);
 struct skcipher_walk VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(&VAR_3, VAR_0, 0);

 while ((VAR_4 = VAR_3.nbytes)) {
  if (VAR_3.src.virt.addr == VAR_3.dst.virt.addr)
   VAR_4 = FUNC_0(VAR_0, &VAR_3,
            VAR_2);
  else
   VAR_4 = FUNC_1(VAR_0, &VAR_3,
            VAR_2);
  VAR_5 = FUNC_4(&VAR_3, VAR_4);
 }

 return VAR_5;
}
