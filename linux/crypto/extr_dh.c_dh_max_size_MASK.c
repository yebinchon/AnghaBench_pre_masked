
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dh_ctx {int p; } ;
struct crypto_kpp {int dummy; } ;


 struct dh_ctx* FUNC_0 (struct crypto_kpp*) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct crypto_kpp *VAR_0)
{
 struct dh_ctx *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->p);
}
