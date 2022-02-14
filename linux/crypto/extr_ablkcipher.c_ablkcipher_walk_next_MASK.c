
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct crypto_tfm {int dummy; } ;
struct TYPE_6__ {unsigned long offset; void* page; } ;
struct TYPE_5__ {unsigned long offset; void* page; } ;
struct ablkcipher_walk {unsigned int total; unsigned int nbytes; TYPE_3__ dst; TYPE_2__ src; int out; int in; int blocksize; int flags; } ;
struct TYPE_4__ {int flags; struct crypto_tfm* tfm; } ;
struct ablkcipher_request {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ablkcipher_request*,struct ablkcipher_walk*) ;
 int FUNC_1 (struct ablkcipher_request*,struct ablkcipher_walk*,unsigned int,unsigned int,void**,void**) ;
 int FUNC_2 (struct ablkcipher_request*,struct ablkcipher_walk*,int ) ;
 unsigned int FUNC_3 (struct crypto_tfm*) ;
 unsigned int FUNC_4 (struct crypto_tfm*) ;
 unsigned int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int *,unsigned int) ;
 unsigned int FUNC_7 (int *,unsigned int) ;
 scalar_t__ FUNC_8 (int) ;
 void* FUNC_9 (void*) ;

__attribute__((used)) static int FUNC_10(struct ablkcipher_request *VAR_4,
    struct ablkcipher_walk *VAR_5)
{
 struct crypto_tfm *VAR_6 = VAR_4->base.tfm;
 unsigned int VAR_7, VAR_8, VAR_9;
 void *VAR_10, *VAR_11;
 int VAR_12;

 VAR_7 = FUNC_3(VAR_6);
 VAR_9 = VAR_5->total;
 if (FUNC_8(VAR_9 < FUNC_4(VAR_6))) {
  VAR_4->base.flags |= VAR_1;
  return FUNC_2(VAR_4, VAR_5, -VAR_2);
 }

 VAR_5->flags &= ~VAR_0;
 VAR_10 = VAR_11 = ((void*)0);

 VAR_8 = FUNC_5(VAR_5->blocksize, VAR_9);
 VAR_9 = FUNC_7(&VAR_5->in, VAR_9);
 VAR_9 = FUNC_7(&VAR_5->out, VAR_9);

 if (VAR_9 < VAR_8 ||
     !FUNC_6(&VAR_5->in, VAR_7) ||
     !FUNC_6(&VAR_5->out, VAR_7)) {
  VAR_12 = FUNC_1(VAR_4, VAR_5, VAR_8, VAR_7,
        &VAR_10, &VAR_11);
  goto set_phys_lowmem;
 }

 VAR_5->nbytes = VAR_9;

 return FUNC_0(VAR_4, VAR_5);

set_phys_lowmem:
 if (VAR_12 >= 0) {
  VAR_5->src.page = FUNC_9(VAR_10);
  VAR_5->dst.page = FUNC_9(VAR_11);
  VAR_5->src.offset = ((unsigned long)VAR_10 & (VAR_3 - 1));
  VAR_5->dst.offset = ((unsigned long)VAR_11 & (VAR_3 - 1));
 }

 return VAR_12;
}
