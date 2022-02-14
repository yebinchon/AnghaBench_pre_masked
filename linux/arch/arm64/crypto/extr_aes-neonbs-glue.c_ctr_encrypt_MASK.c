
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {int nbytes; int total; int stride; TYPE_4__ src; TYPE_2__ dst; int iv; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct aesbs_ctx {int rounds; int rk; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ,unsigned int,int ,int *) ;
 struct aesbs_ctx* FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (int *,int *,int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 unsigned int FUNC_6 (unsigned int,int) ;
 int FUNC_7 (struct skcipher_walk*,unsigned int) ;
 int FUNC_8 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_9(struct skcipher_request *VAR_1)
{
 struct crypto_skcipher *VAR_2 = FUNC_2(VAR_1);
 struct aesbs_ctx *VAR_3 = FUNC_1(VAR_2);
 struct skcipher_walk VAR_4;
 u8 VAR_5[VAR_0];
 int VAR_6;

 VAR_6 = FUNC_8(&VAR_4, VAR_1, 0);

 while (VAR_4.nbytes > 0) {
  unsigned int VAR_7 = VAR_4.nbytes / VAR_0;
  u8 *VAR_8 = (VAR_4.total % VAR_0) ? VAR_5 : ((void*)0);

  if (VAR_4.nbytes < VAR_4.total) {
   VAR_7 = FUNC_6(VAR_7,
         VAR_4.stride / VAR_0);
   VAR_8 = ((void*)0);
  }

  FUNC_4();
  FUNC_0(VAR_4.dst.virt.addr, VAR_4.src.virt.addr,
      VAR_3->rk, VAR_3->rounds, VAR_7, VAR_4.iv, VAR_8);
  FUNC_5();

  if (VAR_8) {
   u8 *VAR_9 = VAR_4.dst.virt.addr + VAR_7 * VAR_0;
   u8 *VAR_10 = VAR_4.src.virt.addr + VAR_7 * VAR_0;

   FUNC_3(VAR_9, VAR_10, VAR_8,
           VAR_4.total % VAR_0);

   VAR_6 = FUNC_7(&VAR_4, 0);
   break;
  }
  VAR_6 = FUNC_7(&VAR_4,
      VAR_4.nbytes - VAR_7 * VAR_0);
 }
 return VAR_6;
}
