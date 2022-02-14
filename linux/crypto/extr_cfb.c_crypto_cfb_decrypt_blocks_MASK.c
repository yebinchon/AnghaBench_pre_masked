
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
struct skcipher_walk {TYPE_4__ dst; TYPE_2__ src; } ;
struct crypto_skcipher {int dummy; } ;


 int FUNC_0 (struct skcipher_walk*,struct crypto_skcipher*) ;
 int FUNC_1 (struct skcipher_walk*,struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_2(struct skcipher_walk *VAR_0,
         struct crypto_skcipher *VAR_1)
{
 if (VAR_0->src.virt.addr == VAR_0->dst.virt.addr)
  return FUNC_0(VAR_0, VAR_1);
 else
  return FUNC_1(VAR_0, VAR_1);
}
