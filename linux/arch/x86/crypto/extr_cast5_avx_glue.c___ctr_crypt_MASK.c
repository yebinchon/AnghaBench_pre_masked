
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
typedef int __be64 ;


 unsigned int VAR_0 ;
 unsigned int const VAR_1 ;
 int FUNC_0 (struct cast5_ctx*,int *,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct cast5_ctx*,int *,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct skcipher_walk *VAR_2,
    struct cast5_ctx *VAR_3)
{
 const unsigned int VAR_4 = VAR_0;
 unsigned int VAR_5 = VAR_2->nbytes;
 u64 *VAR_6 = (u64 *)VAR_2->src.virt.addr;
 u64 *VAR_7 = (u64 *)VAR_2->dst.virt.addr;


 if (VAR_5 >= VAR_4 * VAR_1) {
  do {
   FUNC_2(VAR_3, (u8 *)VAR_7, (u8 *)VAR_6,
     (__be64 *)VAR_2->iv);

   VAR_6 += VAR_1;
   VAR_7 += VAR_1;
   VAR_5 -= VAR_4 * VAR_1;
  } while (VAR_5 >= VAR_4 * VAR_1);

  if (VAR_5 < VAR_4)
   goto done;
 }


 do {
  u64 VAR_8;

  if (VAR_7 != VAR_6)
   *VAR_7 = *VAR_6;

  VAR_8 = *(u64 *)VAR_2->iv;
  FUNC_1((__be64 *)VAR_2->iv, 1);

  FUNC_0(VAR_3, (u8 *)&VAR_8, (u8 *)&VAR_8);
  *VAR_7 ^= VAR_8;

  VAR_6 += 1;
  VAR_7 += 1;
  VAR_5 -= VAR_4;
 } while (VAR_5 >= VAR_4);

done:
 return VAR_5;
}
