
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_pxts_ctx {TYPE_1__* kb; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_2__ {int * key; } ;


 struct s390_pxts_ctx* FUNC_0 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_0)
{
 struct s390_pxts_ctx *VAR_1 = FUNC_0(VAR_0);

 VAR_1->kb[0].key = ((void*)0);
 VAR_1->kb[1].key = ((void*)0);

 return 0;
}
