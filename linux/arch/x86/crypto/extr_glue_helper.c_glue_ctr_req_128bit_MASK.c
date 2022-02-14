
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


typedef int const u128 ;
struct TYPE_11__ {int const* addr; } ;
struct TYPE_12__ {TYPE_5__ virt; } ;
struct TYPE_7__ {int const* addr; } ;
struct TYPE_8__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; scalar_t__ iv; TYPE_6__ dst; TYPE_2__ src; } ;
struct skcipher_request {int dummy; } ;
struct common_glue_ctx {unsigned int num_funcs; TYPE_4__* funcs; int fpu_blocks_limit; } ;
typedef int le128 ;
typedef int be128 ;
struct TYPE_9__ {int (* ctr ) (void*,int const*,int const*,int *) ;} ;
struct TYPE_10__ {unsigned int num_blocks; TYPE_3__ fn_u; } ;


 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (unsigned int const,int ,struct skcipher_walk*,int,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int const*,int const*,unsigned int) ;
 int FUNC_7 (struct skcipher_walk*,unsigned int) ;
 int FUNC_8 (struct skcipher_walk*,struct skcipher_request*,int) ;
 int FUNC_9 (void*,int const*,int const*,int *) ;
 int FUNC_10 (void*,int const*,int const*,int *) ;

int FUNC_11(const struct common_glue_ctx *VAR_0,
   struct skcipher_request *VAR_1)
{
 void *VAR_2 = FUNC_1(FUNC_2(VAR_1));
 const unsigned int VAR_3 = 128 / 8;
 struct skcipher_walk VAR_4;
 bool VAR_5 = 0;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_8(&VAR_4, VAR_1, 0);

 while ((VAR_6 = VAR_4.nbytes) >= VAR_3) {
  const u128 *VAR_8 = VAR_4.src.virt.addr;
  u128 *VAR_9 = VAR_4.dst.virt.addr;
  unsigned int VAR_10, VAR_11;
  unsigned int VAR_12;
  le128 VAR_13;

  VAR_5 = FUNC_3(VAR_3, VAR_0->fpu_blocks_limit,
          &VAR_4, VAR_5, VAR_6);

  FUNC_0(&VAR_13, (be128 *)VAR_4.iv);

  for (VAR_12 = 0; VAR_12 < VAR_0->num_funcs; VAR_12++) {
   VAR_11 = VAR_0->funcs[VAR_12].num_blocks;
   VAR_10 = VAR_3 * VAR_11;

   if (VAR_6 < VAR_10)
    continue;


   do {
    VAR_0->funcs[VAR_12].fn_u.ctr(VAR_2, VAR_9, VAR_8, &VAR_13);
    VAR_8 += VAR_11;
    VAR_9 += VAR_11;
    VAR_6 -= VAR_10;
   } while (VAR_6 >= VAR_10);

   if (VAR_6 < VAR_3)
    break;
  }

  FUNC_5((be128 *)VAR_4.iv, &VAR_13);
  VAR_7 = FUNC_7(&VAR_4, VAR_6);
 }

 FUNC_4(VAR_5);

 if (VAR_6) {
  le128 VAR_14;
  u128 VAR_15;

  FUNC_0(&VAR_14, (be128 *)VAR_4.iv);
  FUNC_6(&VAR_15, VAR_4.src.virt.addr, VAR_6);
  VAR_0->funcs[VAR_0->num_funcs - 1].fn_u.ctr(VAR_2, &VAR_15, &VAR_15,
         &VAR_14);
  FUNC_6(VAR_4.dst.virt.addr, &VAR_15, VAR_6);
  FUNC_5((be128 *)VAR_4.iv, &VAR_14);

  VAR_7 = FUNC_7(&VAR_4, 0);
 }

 return VAR_7;
}
