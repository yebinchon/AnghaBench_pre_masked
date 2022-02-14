
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; TYPE_4__ dst; TYPE_2__ src; } ;
struct skcipher_request {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int const*,int *,int *) ;
 int FUNC_1 (int const*,int *,int *) ;
 int FUNC_2 (struct skcipher_walk*,unsigned int) ;
 int FUNC_3 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_4(struct skcipher_request *VAR_1, const u32 *VAR_2)
{
 const unsigned int VAR_3 = VAR_0;
 struct skcipher_walk VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(&VAR_4, VAR_1, 0);

 while ((VAR_5 = VAR_4.nbytes)) {
  u8 *VAR_7 = VAR_4.src.virt.addr;
  u8 *VAR_8 = VAR_4.dst.virt.addr;


  if (VAR_5 >= VAR_3 * 3) {
   do {
    FUNC_1(VAR_2, VAR_8,
              VAR_7);

    VAR_7 += VAR_3 * 3;
    VAR_8 += VAR_3 * 3;
    VAR_5 -= VAR_3 * 3;
   } while (VAR_5 >= VAR_3 * 3);

   if (VAR_5 < VAR_3)
    goto done;
  }


  do {
   FUNC_0(VAR_2, VAR_8, VAR_7);

   VAR_7 += VAR_3;
   VAR_8 += VAR_3;
   VAR_5 -= VAR_3;
  } while (VAR_5 >= VAR_3);

done:
  VAR_6 = FUNC_2(&VAR_4, VAR_5);
 }

 return VAR_6;
}
