
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {int nbytes; unsigned int total; TYPE_4__ src; TYPE_2__ dst; int stride; } ;
struct aegis_state {int dummy; } ;
struct aegis128_ops {int (* crypt_chunk ) (struct aegis_state*,int ,int ,unsigned int) ;int (* skcipher_walk_init ) (struct skcipher_walk*,struct aead_request*,int) ;} ;
struct aead_request {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct skcipher_walk*,unsigned int) ;
 int FUNC_2 (struct skcipher_walk*,struct aead_request*,int) ;
 int FUNC_3 (struct aegis_state*,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct aegis_state *VAR_0,
       struct aead_request *VAR_1,
       const struct aegis128_ops *VAR_2)
{
 struct skcipher_walk VAR_3;

 VAR_2->skcipher_walk_init(&VAR_3, VAR_1, 0);

 while (VAR_3.nbytes) {
  unsigned int VAR_4 = VAR_3.nbytes;

  if (VAR_4 < VAR_3.total)
   VAR_4 = FUNC_0(VAR_4, VAR_3.stride);

  VAR_2->crypt_chunk(VAR_0, VAR_3.dst.virt.addr, VAR_3.src.virt.addr,
     VAR_4);

  FUNC_1(&VAR_3, VAR_3.nbytes - VAR_4);
 }
}
