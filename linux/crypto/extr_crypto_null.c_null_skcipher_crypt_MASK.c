
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ addr; } ;
struct TYPE_7__ {TYPE_4__ virt; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {scalar_t__ nbytes; TYPE_3__ src; TYPE_2__ dst; } ;
struct skcipher_request {int dummy; } ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct skcipher_walk*,int ) ;
 int FUNC_2 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_3(struct skcipher_request *VAR_0)
{
 struct skcipher_walk VAR_1;
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1, VAR_0, 0);

 while (VAR_1.nbytes) {
  if (VAR_1.src.virt.addr != VAR_1.dst.virt.addr)
   FUNC_0(VAR_1.dst.virt.addr, VAR_1.src.virt.addr,
          VAR_1.nbytes);
  VAR_2 = FUNC_1(&VAR_1, 0);
 }

 return VAR_2;
}
