
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
struct skcipher_walk {unsigned int nbytes; TYPE_4__ dst; TYPE_2__ src; int * iv; } ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,unsigned long) ;
 unsigned long FUNC_1 (struct crypto_cipher*) ;
 unsigned int FUNC_2 (struct crypto_cipher*) ;
 int FUNC_3 (struct crypto_cipher*,int *,int *) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *,int *,int *,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct skcipher_walk *VAR_2,
       struct crypto_cipher *VAR_3)
{
 unsigned int VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5 = FUNC_1(VAR_3);
 u8 *VAR_6 = VAR_2->iv;
 u8 VAR_7[VAR_1 + VAR_0];
 u8 *VAR_8 = FUNC_0(VAR_7 + 0, VAR_5 + 1);
 u8 *VAR_9 = VAR_2->src.virt.addr;
 u8 *VAR_10 = VAR_2->dst.virt.addr;
 unsigned int VAR_11 = VAR_2->nbytes;

 FUNC_3(VAR_3, VAR_8, VAR_6);
 FUNC_5(VAR_10, VAR_8, VAR_9, VAR_11);

 FUNC_4(VAR_6, VAR_4);
}
