
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


typedef int u8 ;
struct TYPE_9__ {int * addr; } ;
struct TYPE_10__ {TYPE_3__ virt; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; TYPE_4__ dst; TYPE_2__ src; } ;
struct skcipher_request {int dummy; } ;
struct common_glue_ctx {unsigned int num_funcs; TYPE_6__* funcs; int fpu_blocks_limit; } ;
struct TYPE_11__ {int (* ecb ) (void*,int *,int const*) ;} ;
struct TYPE_12__ {unsigned int const num_blocks; TYPE_5__ fn_u; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (unsigned int const,int ,struct skcipher_walk*,int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct skcipher_walk*,unsigned int) ;
 int FUNC_5 (struct skcipher_walk*,struct skcipher_request*,int) ;
 int FUNC_6 (void*,int *,int const*) ;

int FUNC_7(const struct common_glue_ctx *VAR_0,
   struct skcipher_request *VAR_1)
{
 void *VAR_2 = FUNC_0(FUNC_1(VAR_1));
 const unsigned int VAR_3 = 128 / 8;
 struct skcipher_walk VAR_4;
 bool VAR_5 = 0;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_5(&VAR_4, VAR_1, 0);

 while ((VAR_6 = VAR_4.nbytes)) {
  const u8 *VAR_8 = VAR_4.src.virt.addr;
  u8 *VAR_9 = VAR_4.dst.virt.addr;
  unsigned int VAR_10;
  unsigned int VAR_11;

  VAR_5 = FUNC_2(VAR_3, VAR_0->fpu_blocks_limit,
          &VAR_4, VAR_5, VAR_6);
  for (VAR_11 = 0; VAR_11 < VAR_0->num_funcs; VAR_11++) {
   VAR_10 = VAR_3 * VAR_0->funcs[VAR_11].num_blocks;

   if (VAR_6 < VAR_10)
    continue;


   do {
    VAR_0->funcs[VAR_11].fn_u.ecb(VAR_2, VAR_9, VAR_8);
    VAR_8 += VAR_10;
    VAR_9 += VAR_10;
    VAR_6 -= VAR_10;
   } while (VAR_6 >= VAR_10);

   if (VAR_6 < VAR_3)
    break;
  }
  VAR_7 = FUNC_4(&VAR_4, VAR_6);
 }

 FUNC_3(VAR_5);
 return VAR_7;
}
