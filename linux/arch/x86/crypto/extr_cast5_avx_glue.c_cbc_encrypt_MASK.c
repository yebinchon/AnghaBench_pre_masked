
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; scalar_t__ iv; TYPE_4__ dst; TYPE_2__ src; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct cast5_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct cast5_ctx*,int *,int *) ;
 struct cast5_ctx* FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (struct skcipher_walk*,unsigned int) ;
 int FUNC_4 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_5(struct skcipher_request *VAR_1)
{
 const unsigned int VAR_2 = VAR_0;
 struct crypto_skcipher *VAR_3 = FUNC_2(VAR_1);
 struct cast5_ctx *VAR_4 = FUNC_1(VAR_3);
 struct skcipher_walk VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(&VAR_5, VAR_1, 0);

 while ((VAR_6 = VAR_5.nbytes)) {
  u64 *VAR_8 = (u64 *)VAR_5.src.virt.addr;
  u64 *VAR_9 = (u64 *)VAR_5.dst.virt.addr;
  u64 *VAR_10 = (u64 *)VAR_5.iv;

  do {
   *VAR_9 = *VAR_8 ^ *VAR_10;
   FUNC_0(VAR_4, (u8 *)VAR_9, (u8 *)VAR_9);
   VAR_10 = VAR_9;
   VAR_8++;
   VAR_9++;
   VAR_6 -= VAR_2;
  } while (VAR_6 >= VAR_2);

  *(u64 *)VAR_5.iv = *VAR_10;
  VAR_7 = FUNC_3(&VAR_5, VAR_6);
 }

 return VAR_7;
}
