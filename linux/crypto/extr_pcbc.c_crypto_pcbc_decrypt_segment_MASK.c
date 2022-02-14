
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
struct TYPE_7__ {TYPE_4__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; int * iv; TYPE_3__ dst; TYPE_2__ src; } ;
struct skcipher_request {int dummy; } ;
struct crypto_cipher {int dummy; } ;


 int FUNC_0 (struct crypto_cipher*) ;
 int FUNC_1 (struct crypto_cipher*,int *,int *) ;
 int FUNC_2 (int *,int * const,int) ;
 int FUNC_3 (int * const,int *,int *,int) ;

__attribute__((used)) static int FUNC_4(struct skcipher_request *VAR_0,
           struct skcipher_walk *VAR_1,
           struct crypto_cipher *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4 = VAR_1->nbytes;
 u8 *VAR_5 = VAR_1->src.virt.addr;
 u8 *VAR_6 = VAR_1->dst.virt.addr;
 u8 * const VAR_7 = VAR_1->iv;

 do {
  FUNC_1(VAR_2, VAR_6, VAR_5);
  FUNC_2(VAR_6, VAR_7, VAR_3);
  FUNC_3(VAR_7, VAR_6, VAR_5, VAR_3);

  VAR_5 += VAR_3;
  VAR_6 += VAR_3;
 } while ((VAR_4 -= VAR_3) >= VAR_3);

 return VAR_4;
}
