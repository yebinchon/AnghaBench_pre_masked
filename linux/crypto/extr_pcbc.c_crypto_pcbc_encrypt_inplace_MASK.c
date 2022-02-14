
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
struct skcipher_request {int dummy; } ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_cipher*) ;
 int FUNC_1 (struct crypto_cipher*,int *,int * const) ;
 int FUNC_2 (int * const,int *,int) ;
 int FUNC_3 (int * const,int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(struct skcipher_request *VAR_1,
           struct skcipher_walk *VAR_2,
           struct crypto_cipher *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5 = VAR_2->nbytes;
 u8 *VAR_6 = VAR_2->src.virt.addr;
 u8 * const VAR_7 = VAR_2->iv;
 u8 VAR_8[VAR_0];

 do {
  FUNC_4(VAR_8, VAR_6, VAR_4);
  FUNC_2(VAR_7, VAR_6, VAR_4);
  FUNC_1(VAR_3, VAR_6, VAR_7);
  FUNC_3(VAR_7, VAR_8, VAR_6, VAR_4);

  VAR_6 += VAR_4;
 } while ((VAR_5 -= VAR_4) >= VAR_4);

 return VAR_5;
}
