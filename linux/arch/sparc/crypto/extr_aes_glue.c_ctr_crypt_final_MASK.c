
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct crypto_sparc64_aes_ctx {int * key; TYPE_3__* ops; } ;
struct TYPE_6__ {int * addr; } ;
struct TYPE_7__ {TYPE_1__ virt; } ;
struct TYPE_9__ {int * addr; } ;
struct TYPE_10__ {TYPE_4__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_2__ dst; TYPE_5__ src; int * iv; } ;
struct TYPE_8__ {int (* ecb_encrypt ) (int *,int const*,int *,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int *,unsigned int) ;
 int FUNC_2 (int *,int const*,int *,int) ;

__attribute__((used)) static void FUNC_3(struct crypto_sparc64_aes_ctx *VAR_1,
       struct blkcipher_walk *VAR_2)
{
 u8 *VAR_3 = VAR_2->iv;
 u64 VAR_4[VAR_0 / sizeof(u64)];
 u8 *VAR_5 = VAR_2->src.virt.addr;
 u8 *VAR_6 = VAR_2->dst.virt.addr;
 unsigned int VAR_7 = VAR_2->nbytes;

 VAR_1->ops->ecb_encrypt(&VAR_1->key[0], (const u64 *)VAR_3,
         VAR_4, VAR_0);
 FUNC_1(VAR_6, (u8 *) VAR_4, VAR_5, VAR_7);
 FUNC_0(VAR_3, VAR_0);
}
