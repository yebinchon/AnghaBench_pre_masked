
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct n2_request_context {int dummy; } ;
struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;



__attribute__((used)) static int FUNC_0(struct crypto_tfm *VAR_0)
{
 VAR_0->crt_ablkcipher.reqsize = sizeof(struct n2_request_context);
 return 0;
}
