
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; TYPE_4__ dst; TYPE_2__ src; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 unsigned int FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct skcipher_walk*,struct crypto_skcipher*) ;
 int FUNC_2 (struct skcipher_walk*,struct crypto_skcipher*) ;
 int FUNC_3 (struct skcipher_walk*,struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (struct skcipher_walk*,int) ;
 int FUNC_6 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_7(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_4(VAR_0);
 struct skcipher_walk VAR_2;
 unsigned int VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_6(&VAR_2, VAR_0, 0);

 while (VAR_2.nbytes >= VAR_3) {
  if (VAR_2.src.virt.addr == VAR_2.dst.virt.addr)
   VAR_4 = FUNC_1(&VAR_2, VAR_1);
  else
   VAR_4 = FUNC_2(&VAR_2, VAR_1);
  VAR_4 = FUNC_5(&VAR_2, VAR_4);
 }

 if (VAR_2.nbytes) {
  FUNC_3(&VAR_2, VAR_1);
  VAR_4 = FUNC_5(&VAR_2, 0);
 }

 return VAR_4;
}
