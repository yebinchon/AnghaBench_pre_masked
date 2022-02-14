
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ablkcipher_walk {int blocksize; } ;
struct TYPE_2__ {int tfm; } ;
struct ablkcipher_request {TYPE_1__ base; } ;


 int FUNC_0 (struct ablkcipher_request*,struct ablkcipher_walk*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct ablkcipher_request *VAR_0,
    struct ablkcipher_walk *VAR_1)
{
 VAR_1->blocksize = FUNC_1(VAR_0->base.tfm);
 return FUNC_0(VAR_0, VAR_1);
}
