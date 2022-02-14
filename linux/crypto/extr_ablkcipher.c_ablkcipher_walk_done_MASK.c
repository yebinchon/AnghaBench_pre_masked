
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ivsize; } ;
struct crypto_tfm {TYPE_2__ crt_ablkcipher; } ;
struct ablkcipher_walk {int nbytes; scalar_t__ total; int flags; scalar_t__ iv; int iv_buffer; int out; int in; } ;
struct TYPE_3__ {int flags; struct crypto_tfm* tfm; } ;
struct ablkcipher_request {scalar_t__ info; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ablkcipher_walk*,unsigned int) ;
 int FUNC_2 (struct ablkcipher_walk*,unsigned int) ;
 int FUNC_3 (struct ablkcipher_request*,struct ablkcipher_walk*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (int *,int,int) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct ablkcipher_request *VAR_2,
    struct ablkcipher_walk *VAR_3, int VAR_4)
{
 struct crypto_tfm *VAR_5 = VAR_2->base.tfm;
 unsigned int VAR_6;
 bool VAR_7;

 if (FUNC_9(VAR_4 < 0))
  goto finish;

 VAR_6 = VAR_3->nbytes - VAR_4;
 VAR_3->total -= VAR_6;
 VAR_7 = (VAR_3->total != 0);

 if (FUNC_6(!(VAR_3->flags & VAR_0))) {
  FUNC_1(VAR_3, VAR_6);
 } else {
  if (FUNC_0(VAR_4)) {

   VAR_4 = -VAR_1;
   goto finish;
  }
  FUNC_2(VAR_3, VAR_6);
 }

 FUNC_8(&VAR_3->in, 0, VAR_7);
 FUNC_8(&VAR_3->out, 1, VAR_7);

 if (VAR_7) {
  FUNC_4(VAR_2->base.flags);
  return FUNC_3(VAR_2, VAR_3);
 }
 VAR_4 = 0;
finish:
 VAR_3->nbytes = 0;
 if (VAR_3->iv != VAR_2->info)
  FUNC_7(VAR_2->info, VAR_3->iv, VAR_5->crt_ablkcipher.ivsize);
 FUNC_5(VAR_3->iv_buffer);
 return VAR_4;
}
