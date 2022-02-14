
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
struct bf_ctx {int dummy; } ;
typedef int __be64 ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bf_ctx*,int *,int *) ;
 int FUNC_2 (struct bf_ctx*,int *,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct bf_ctx *VAR_1, struct skcipher_walk *VAR_2)
{
 unsigned int VAR_3 = VAR_0;
 unsigned int VAR_4 = VAR_2->nbytes;
 u64 *VAR_5 = (u64 *)VAR_2->src.virt.addr;
 u64 *VAR_6 = (u64 *)VAR_2->dst.virt.addr;
 u64 VAR_7 = FUNC_0(*(__be64 *)VAR_2->iv);
 __be64 VAR_8[4];


 if (VAR_4 >= VAR_3 * 4) {
  do {
   if (VAR_6 != VAR_5) {
    VAR_6[0] = VAR_5[0];
    VAR_6[1] = VAR_5[1];
    VAR_6[2] = VAR_5[2];
    VAR_6[3] = VAR_5[3];
   }


   VAR_8[0] = FUNC_3(VAR_7++);
   VAR_8[1] = FUNC_3(VAR_7++);
   VAR_8[2] = FUNC_3(VAR_7++);
   VAR_8[3] = FUNC_3(VAR_7++);

   FUNC_2(VAR_1, (u8 *)VAR_6,
        (u8 *)VAR_8);

   VAR_5 += 4;
   VAR_6 += 4;
  } while ((VAR_4 -= VAR_3 * 4) >= VAR_3 * 4);

  if (VAR_4 < VAR_3)
   goto done;
 }


 do {
  if (VAR_6 != VAR_5)
   *VAR_6 = *VAR_5;

  VAR_8[0] = FUNC_3(VAR_7++);

  FUNC_1(VAR_1, (u8 *)VAR_6, (u8 *)VAR_8);

  VAR_5 += 1;
  VAR_6 += 1;
 } while ((VAR_4 -= VAR_3) >= VAR_3);

done:
 *(__be64 *)VAR_2->iv = FUNC_3(VAR_7);
 return VAR_4;
}
