
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
struct cast5_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cast5_ctx*,int *,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct skcipher_walk *VAR_1, struct cast5_ctx *VAR_2)
{
 u8 *VAR_3 = VAR_1->iv;
 u8 VAR_4[VAR_0];
 u8 *VAR_5 = VAR_1->src.virt.addr;
 u8 *VAR_6 = VAR_1->dst.virt.addr;
 unsigned int VAR_7 = VAR_1->nbytes;

 FUNC_0(VAR_2, VAR_4, VAR_3);
 FUNC_2(VAR_6, VAR_4, VAR_5, VAR_7);

 FUNC_1(VAR_3, VAR_0);
}
