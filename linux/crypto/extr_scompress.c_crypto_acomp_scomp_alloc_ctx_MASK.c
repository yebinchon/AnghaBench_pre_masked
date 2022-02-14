
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct crypto_scomp {int dummy; } ;
struct crypto_acomp {int dummy; } ;
struct acomp_req {void** __ctx; } ;


 scalar_t__ FUNC_0 (void*) ;
 struct crypto_acomp* FUNC_1 (struct acomp_req*) ;
 struct crypto_tfm* FUNC_2 (struct crypto_acomp*) ;
 void* FUNC_3 (struct crypto_scomp*) ;
 struct crypto_scomp** FUNC_4 (struct crypto_tfm*) ;
 int FUNC_5 (struct acomp_req*) ;

struct acomp_req *FUNC_6(struct acomp_req *VAR_0)
{
 struct crypto_acomp *VAR_1 = FUNC_1(VAR_0);
 struct crypto_tfm *VAR_2 = FUNC_2(VAR_1);
 struct crypto_scomp **VAR_3 = FUNC_4(VAR_2);
 struct crypto_scomp *VAR_4 = *VAR_3;
 void *VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 if (FUNC_0(VAR_5)) {
  FUNC_5(VAR_0);
  return ((void*)0);
 }

 *VAR_0->__ctx = VAR_5;

 return VAR_0;
}
