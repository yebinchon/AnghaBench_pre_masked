
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* cra_type; } ;
struct crypto_instance {TYPE_3__ alg; TYPE_1__* tmpl; } ;
struct TYPE_5__ {int (* free ) (struct crypto_instance*) ;} ;
struct TYPE_4__ {int (* free ) (struct crypto_instance*) ;} ;


 int FUNC_0 (struct crypto_instance*) ;
 int FUNC_1 (struct crypto_instance*) ;

__attribute__((used)) static void FUNC_2(struct crypto_instance *VAR_0)
{
 if (!VAR_0->alg.cra_type->free) {
  VAR_0->tmpl->free(VAR_0);
  return;
 }

 VAR_0->alg.cra_type->free(VAR_0);
}
