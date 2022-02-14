
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * addr; } ;
struct TYPE_4__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; int * iv; TYPE_2__ src; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*,int *,int *) ;
 int FUNC_2 (int *,int *,unsigned int const) ;
 int FUNC_3 (int *,int *,unsigned int const) ;

__attribute__((used)) static int FUNC_4(struct skcipher_walk *VAR_1,
          struct crypto_skcipher *VAR_2)
{
 const unsigned int VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4 = VAR_1->nbytes;
 u8 *VAR_5 = VAR_1->src.virt.addr;
 u8 *VAR_6 = VAR_1->iv;
 u8 VAR_7[VAR_0];

 do {
  FUNC_1(VAR_2, VAR_6, VAR_7);
  FUNC_2(VAR_5, VAR_7, VAR_3);
  VAR_6 = VAR_5;

  VAR_5 += VAR_3;
 } while ((VAR_4 -= VAR_3) >= VAR_3);

 FUNC_3(VAR_1->iv, VAR_6, VAR_3);

 return VAR_4;
}
