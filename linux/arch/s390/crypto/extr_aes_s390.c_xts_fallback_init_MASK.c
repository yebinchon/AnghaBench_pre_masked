
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_xts_ctx {int fallback; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct TYPE_2__ {char* cra_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ,int ) ;
 struct s390_xts_ctx* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_1)
{
 const char *VAR_2 = VAR_1->__crt_alg->cra_name;
 struct s390_xts_ctx *VAR_3 = FUNC_3(VAR_1);

 VAR_3->fallback = FUNC_2(VAR_2, 0,
        VAR_0);

 if (FUNC_0(VAR_3->fallback)) {
  FUNC_4("Allocating XTS fallback algorithm %s failed\n",
         VAR_2);
  return FUNC_1(VAR_3->fallback);
 }
 return 0;
}
