
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct crypto_type {int (* init ) (struct crypto_tfm*,int ,int ) ;} ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct TYPE_2__ {struct crypto_type* cra_type; } ;


 int FUNC_0 () ;


 int VAR_0 ;
 int FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (struct crypto_tfm*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_1, u32 VAR_2, u32 VAR_3)
{
 const struct crypto_type *VAR_4 = VAR_1->__crt_alg->cra_type;

 if (VAR_4)
  return VAR_4->init(VAR_1, VAR_2, VAR_3);

 switch (FUNC_3(VAR_1)) {
 case 129:
  return FUNC_1(VAR_1);

 case 128:
  return FUNC_2(VAR_1);

 default:
  break;
 }

 FUNC_0();
 return -VAR_0;
}
