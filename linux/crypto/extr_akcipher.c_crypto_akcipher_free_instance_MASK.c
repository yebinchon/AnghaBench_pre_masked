
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_instance {int dummy; } ;
struct akcipher_instance {int (* free ) (struct akcipher_instance*) ;} ;


 struct akcipher_instance* FUNC_0 (struct crypto_instance*) ;
 int FUNC_1 (struct akcipher_instance*) ;

__attribute__((used)) static void FUNC_2(struct crypto_instance *VAR_0)
{
 struct akcipher_instance *VAR_1 = FUNC_0(VAR_0);

 VAR_1->free(VAR_1);
}
