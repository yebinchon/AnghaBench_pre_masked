
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct skcipher_walk {unsigned int nbytes; int * iv; TYPE_2__ dst; TYPE_4__ src; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,unsigned long const) ;
 int FUNC_1 (struct crypto_skcipher*,int *,int *) ;
 unsigned long FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (int *,int *,int *,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct skcipher_walk *VAR_2,
        struct crypto_skcipher *VAR_3)
{
 const unsigned long VAR_4 = FUNC_2(VAR_3);
 u8 VAR_5[VAR_1 + VAR_0];
 u8 *VAR_6 = FUNC_0(VAR_5 + 0, VAR_4 + 1);
 u8 *VAR_7 = VAR_2->src.virt.addr;
 u8 *VAR_8 = VAR_2->dst.virt.addr;
 u8 *VAR_9 = VAR_2->iv;
 unsigned int VAR_10 = VAR_2->nbytes;

 FUNC_1(VAR_3, VAR_9, VAR_6);
 FUNC_3(VAR_8, VAR_6, VAR_7, VAR_10);
}
