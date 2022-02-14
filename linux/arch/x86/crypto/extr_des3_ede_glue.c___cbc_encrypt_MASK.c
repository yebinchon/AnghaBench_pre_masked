
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; scalar_t__ iv; TYPE_4__ dst; TYPE_2__ src; } ;
struct des3_ede_x86_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct des3_ede_x86_ctx*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct des3_ede_x86_ctx *VAR_1,
      struct skcipher_walk *VAR_2)
{
 unsigned int VAR_3 = VAR_0;
 unsigned int VAR_4 = VAR_2->nbytes;
 u64 *VAR_5 = (u64 *)VAR_2->src.virt.addr;
 u64 *VAR_6 = (u64 *)VAR_2->dst.virt.addr;
 u64 *VAR_7 = (u64 *)VAR_2->iv;

 do {
  *VAR_6 = *VAR_5 ^ *VAR_7;
  FUNC_0(VAR_1, (u8 *)VAR_6, (u8 *)VAR_6);
  VAR_7 = VAR_6;

  VAR_5 += 1;
  VAR_6 += 1;
  VAR_4 -= VAR_3;
 } while (VAR_4 >= VAR_3);

 *(u64 *)VAR_2->iv = *VAR_7;
 return VAR_4;
}
