
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u128 ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; scalar_t__ iv; TYPE_4__ dst; TYPE_2__ src; } ;
struct skcipher_request {int dummy; } ;
typedef int (* common_glue_func_t ) (void*,int *,int *) ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (struct skcipher_walk*,unsigned int) ;
 int FUNC_3 (struct skcipher_walk*,struct skcipher_request*,int) ;
 int FUNC_4 (int *,int const*,int *) ;

int FUNC_5(const common_glue_func_t VAR_0,
    struct skcipher_request *VAR_1)
{
 void *VAR_2 = FUNC_0(FUNC_1(VAR_1));
 const unsigned int VAR_3 = 128 / 8;
 struct skcipher_walk VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(&VAR_4, VAR_1, 0);

 while ((VAR_5 = VAR_4.nbytes)) {
  const u128 *VAR_7 = (u128 *)VAR_4.src.virt.addr;
  u128 *VAR_8 = (u128 *)VAR_4.dst.virt.addr;
  u128 *VAR_9 = (u128 *)VAR_4.iv;

  do {
   FUNC_4(VAR_8, VAR_7, VAR_9);
   VAR_0(VAR_2, (u8 *)VAR_8, (u8 *)VAR_8);
   VAR_9 = VAR_8;
   VAR_7++;
   VAR_8++;
   VAR_5 -= VAR_3;
  } while (VAR_5 >= VAR_3);

  *(u128 *)VAR_4.iv = *VAR_9;
  VAR_6 = FUNC_2(&VAR_4, VAR_5);
 }
 return VAR_6;
}
