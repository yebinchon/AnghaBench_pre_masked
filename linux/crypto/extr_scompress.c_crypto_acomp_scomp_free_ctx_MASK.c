
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct crypto_scomp {int dummy; } ;
struct crypto_acomp {int dummy; } ;
struct acomp_req {void** __ctx; } ;


 struct crypto_acomp* FUNC_0 (struct acomp_req*) ;
 struct crypto_tfm* FUNC_1 (struct crypto_acomp*) ;
 int FUNC_2 (struct crypto_scomp*,void*) ;
 struct crypto_scomp** FUNC_3 (struct crypto_tfm*) ;

void FUNC_4(struct acomp_req *VAR_0)
{
 struct crypto_acomp *VAR_1 = FUNC_0(VAR_0);
 struct crypto_tfm *VAR_2 = FUNC_1(VAR_1);
 struct crypto_scomp **VAR_3 = FUNC_3(VAR_2);
 struct crypto_scomp *VAR_4 = *VAR_3;
 void *VAR_5 = *VAR_0->__ctx;

 if (VAR_5)
  FUNC_2(VAR_4, VAR_5);
}
