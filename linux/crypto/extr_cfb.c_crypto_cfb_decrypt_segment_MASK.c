
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int * addr; } ;
struct TYPE_5__ {TYPE_4__ virt; } ;
struct TYPE_6__ {int * addr; } ;
struct TYPE_7__ {TYPE_2__ virt; } ;
struct skcipher_walk {unsigned int nbytes; int * iv; TYPE_1__ dst; TYPE_3__ src; } ;
struct crypto_skcipher {int dummy; } ;


 unsigned int FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*,int *,int *) ;
 int FUNC_2 (int *,int *,unsigned int const) ;
 int FUNC_3 (int *,int *,unsigned int const) ;

__attribute__((used)) static int FUNC_4(struct skcipher_walk *VAR_0,
          struct crypto_skcipher *VAR_1)
{
 const unsigned int VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3 = VAR_0->nbytes;
 u8 *VAR_4 = VAR_0->src.virt.addr;
 u8 *VAR_5 = VAR_0->dst.virt.addr;
 u8 *VAR_6 = VAR_0->iv;

 do {
  FUNC_1(VAR_1, VAR_6, VAR_5);
  FUNC_2(VAR_5, VAR_4, VAR_2);
  VAR_6 = VAR_4;

  VAR_4 += VAR_2;
  VAR_5 += VAR_2;
 } while ((VAR_3 -= VAR_2) >= VAR_2);

 FUNC_3(VAR_0->iv, VAR_6, VAR_2);

 return VAR_3;
}
