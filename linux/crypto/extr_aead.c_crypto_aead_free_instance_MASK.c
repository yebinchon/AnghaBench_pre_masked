
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_instance {TYPE_1__* tmpl; } ;
struct aead_instance {int (* free ) (struct aead_instance*) ;} ;
struct TYPE_2__ {int (* free ) (struct crypto_instance*) ;} ;


 struct aead_instance* FUNC_0 (struct crypto_instance*) ;
 int FUNC_1 (struct crypto_instance*) ;
 int FUNC_2 (struct aead_instance*) ;

__attribute__((used)) static void FUNC_3(struct crypto_instance *VAR_0)
{
 struct aead_instance *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->free) {
  VAR_0->tmpl->free(VAR_0);
  return;
 }

 VAR_1->free(VAR_1);
}
