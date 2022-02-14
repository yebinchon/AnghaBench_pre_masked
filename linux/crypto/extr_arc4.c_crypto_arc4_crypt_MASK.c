
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
struct skcipher_walk {scalar_t__ nbytes; TYPE_4__ src; TYPE_2__ dst; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct arc4_ctx {int dummy; } ;


 int FUNC_0 (struct arc4_ctx*,int ,int ,scalar_t__) ;
 struct arc4_ctx* FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (struct skcipher_walk*,int ) ;
 int FUNC_4 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_5(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_2(VAR_0);
 struct arc4_ctx *VAR_2 = FUNC_1(VAR_1);
 struct skcipher_walk VAR_3;
 int VAR_4;

 VAR_4 = FUNC_4(&VAR_3, VAR_0, 0);

 while (VAR_3.nbytes > 0) {
  FUNC_0(VAR_2, VAR_3.dst.virt.addr, VAR_3.src.virt.addr,
      VAR_3.nbytes);
  VAR_4 = FUNC_3(&VAR_3, 0);
 }

 return VAR_4;
}
