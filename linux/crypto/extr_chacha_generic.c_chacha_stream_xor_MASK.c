
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
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int nbytes; unsigned int total; TYPE_4__ src; TYPE_2__ dst; } ;
struct skcipher_request {int dummy; } ;
struct chacha_ctx {int nrounds; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,unsigned int,int ) ;
 int FUNC_1 (int *,struct chacha_ctx const*,int const*) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct skcipher_walk*,unsigned int) ;
 int FUNC_4 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_5(struct skcipher_request *VAR_1,
        const struct chacha_ctx *VAR_2, const u8 *VAR_3)
{
 struct skcipher_walk VAR_4;
 u32 VAR_5[16];
 int VAR_6;

 VAR_6 = FUNC_4(&VAR_4, VAR_1, 0);

 FUNC_1(VAR_5, VAR_2, VAR_3);

 while (VAR_4.nbytes > 0) {
  unsigned int VAR_7 = VAR_4.nbytes;

  if (VAR_7 < VAR_4.total)
   VAR_7 = FUNC_2(VAR_7, VAR_0);

  FUNC_0(VAR_5, VAR_4.dst.virt.addr, VAR_4.src.virt.addr,
          VAR_7, VAR_2->nrounds);
  VAR_6 = FUNC_3(&VAR_4, VAR_4.nbytes - VAR_7);
 }

 return VAR_6;
}
