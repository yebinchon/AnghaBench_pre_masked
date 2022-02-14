
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
struct cast5_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int const VAR_1 ;
 int FUNC_0 (struct cast5_ctx*,int *,int *) ;
 int FUNC_1 (struct cast5_ctx*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct cast5_ctx *VAR_2,
      struct skcipher_walk *VAR_3)
{
 const unsigned int VAR_4 = VAR_0;
 unsigned int VAR_5 = VAR_3->nbytes;
 u64 *VAR_6 = (u64 *)VAR_3->src.virt.addr;
 u64 *VAR_7 = (u64 *)VAR_3->dst.virt.addr;
 u64 VAR_8;


 VAR_6 += VAR_5 / VAR_4 - 1;
 VAR_7 += VAR_5 / VAR_4 - 1;

 VAR_8 = *VAR_6;


 if (VAR_5 >= VAR_4 * VAR_1) {
  do {
   VAR_5 -= VAR_4 * (VAR_1 - 1);
   VAR_6 -= VAR_1 - 1;
   VAR_7 -= VAR_1 - 1;

   FUNC_1(VAR_2, (u8 *)VAR_7, (u8 *)VAR_6);

   VAR_5 -= VAR_4;
   if (VAR_5 < VAR_4)
    goto done;

   *VAR_7 ^= *(VAR_6 - 1);
   VAR_6 -= 1;
   VAR_7 -= 1;
  } while (VAR_5 >= VAR_4 * VAR_1);
 }


 for (;;) {
  FUNC_0(VAR_2, (u8 *)VAR_7, (u8 *)VAR_6);

  VAR_5 -= VAR_4;
  if (VAR_5 < VAR_4)
   break;

  *VAR_7 ^= *(VAR_6 - 1);
  VAR_6 -= 1;
  VAR_7 -= 1;
 }

done:
 *VAR_7 ^= *(u64 *)VAR_3->iv;
 *(u64 *)VAR_3->iv = VAR_8;

 return VAR_5;
}
