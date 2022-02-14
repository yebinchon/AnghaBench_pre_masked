
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; unsigned int total; TYPE_4__ src; TYPE_2__ dst; int stride; } ;
struct skcipher_request {int iv; } ;
struct salsa20_ctx {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 struct salsa20_ctx* FUNC_0 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_1 (struct skcipher_request*) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *,int ,int ,unsigned int) ;
 int FUNC_4 (int *,struct salsa20_ctx const*,int ) ;
 int FUNC_5 (struct skcipher_walk*,unsigned int) ;
 int FUNC_6 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_7(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_1(VAR_0);
 const struct salsa20_ctx *VAR_2 = FUNC_0(VAR_1);
 struct skcipher_walk VAR_3;
 u32 VAR_4[16];
 int VAR_5;

 VAR_5 = FUNC_6(&VAR_3, VAR_0, 0);

 FUNC_4(VAR_4, VAR_2, VAR_0->iv);

 while (VAR_3.nbytes > 0) {
  unsigned int VAR_6 = VAR_3.nbytes;

  if (VAR_6 < VAR_3.total)
   VAR_6 = FUNC_2(VAR_6, VAR_3.stride);

  FUNC_3(VAR_4, VAR_3.dst.virt.addr, VAR_3.src.virt.addr,
    VAR_6);
  VAR_5 = FUNC_5(&VAR_3, VAR_3.nbytes - VAR_6);
 }

 return VAR_5;
}
