
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int addr; } ;
struct TYPE_9__ {TYPE_3__ virt; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_7__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; int iv; TYPE_4__ src; TYPE_2__ dst; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_10__ {int rounds; } ;
struct aesbs_cbc_ctx {TYPE_5__ key; int enc; } ;


 unsigned int VAR_0 ;
 struct aesbs_cbc_ctx* FUNC_0 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,int ,unsigned int,int ) ;
 int FUNC_5 (struct skcipher_walk*,unsigned int) ;
 int FUNC_6 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_7(struct skcipher_request *VAR_1)
{
 struct crypto_skcipher *VAR_2 = FUNC_1(VAR_1);
 struct aesbs_cbc_ctx *VAR_3 = FUNC_0(VAR_2);
 struct skcipher_walk VAR_4;
 int VAR_5;

 VAR_5 = FUNC_6(&VAR_4, VAR_1, 0);

 while (VAR_4.nbytes >= VAR_0) {
  unsigned int VAR_6 = VAR_4.nbytes / VAR_0;


  FUNC_2();
  FUNC_4(VAR_4.dst.virt.addr, VAR_4.src.virt.addr,
         VAR_3->enc, VAR_3->key.rounds, VAR_6,
         VAR_4.iv);
  FUNC_3();
  VAR_5 = FUNC_5(&VAR_4, VAR_4.nbytes % VAR_0);
 }
 return VAR_5;
}
