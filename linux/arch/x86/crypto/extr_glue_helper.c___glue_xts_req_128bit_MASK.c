
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u128 ;
struct TYPE_9__ {int * addr; } ;
struct TYPE_10__ {TYPE_3__ virt; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; int iv; TYPE_4__ dst; TYPE_2__ src; } ;
struct common_glue_ctx {unsigned int num_funcs; TYPE_6__* funcs; } ;
struct TYPE_11__ {int (* xts ) (void*,int *,int *,int ) ;} ;
struct TYPE_12__ {unsigned int num_blocks; TYPE_5__ fn_u; } ;


 int FUNC_0 (void*,int *,int *,int ) ;

__attribute__((used)) static unsigned int FUNC_1(const struct common_glue_ctx *VAR_0,
       void *VAR_1,
       struct skcipher_walk *VAR_2)
{
 const unsigned int VAR_3 = 128 / 8;
 unsigned int VAR_4 = VAR_2->nbytes;
 u128 *VAR_5 = VAR_2->src.virt.addr;
 u128 *VAR_6 = VAR_2->dst.virt.addr;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_0->num_funcs; VAR_9++) {
  VAR_7 = VAR_0->funcs[VAR_9].num_blocks;
  VAR_8 = VAR_3 * VAR_7;

  if (VAR_4 >= VAR_8) {
   do {
    VAR_0->funcs[VAR_9].fn_u.xts(VAR_1, VAR_6, VAR_5,
       VAR_2->iv);

    VAR_5 += VAR_7;
    VAR_6 += VAR_7;
    VAR_4 -= VAR_8;
   } while (VAR_4 >= VAR_8);

   if (VAR_4 < VAR_3)
    goto done;
  }
 }

done:
 return VAR_4;
}
