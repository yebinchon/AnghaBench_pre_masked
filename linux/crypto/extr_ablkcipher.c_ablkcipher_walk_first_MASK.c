
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_tfm {int dummy; } ;
struct TYPE_4__ {int sg; } ;
struct ablkcipher_walk {TYPE_2__ out; TYPE_2__ in; scalar_t__ iv; int * iv_buffer; int total; int nbytes; } ;
struct TYPE_3__ {struct crypto_tfm* tfm; } ;
struct ablkcipher_request {scalar_t__ info; TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ablkcipher_walk*,struct crypto_tfm*,unsigned int) ;
 int FUNC_2 (struct ablkcipher_request*,struct ablkcipher_walk*) ;
 unsigned int FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (unsigned long) ;

__attribute__((used)) static int FUNC_7(struct ablkcipher_request *VAR_1,
     struct ablkcipher_walk *VAR_2)
{
 struct crypto_tfm *VAR_3 = VAR_1->base.tfm;
 unsigned int VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 if (FUNC_0(FUNC_4()))
  return -VAR_0;

 VAR_2->iv = VAR_1->info;
 VAR_2->nbytes = VAR_2->total;
 if (FUNC_6(!VAR_2->total))
  return 0;

 VAR_2->iv_buffer = ((void*)0);
 if (FUNC_6(((unsigned long)VAR_2->iv & VAR_4))) {
  int VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);

  if (VAR_5)
   return VAR_5;
 }

 FUNC_5(&VAR_2->in, VAR_2->in.sg);
 FUNC_5(&VAR_2->out, VAR_2->out.sg);

 return FUNC_2(VAR_1, VAR_2);
}
