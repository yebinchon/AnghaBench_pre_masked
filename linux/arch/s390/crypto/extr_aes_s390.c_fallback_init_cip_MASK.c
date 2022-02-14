
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cip; } ;
struct s390_aes_ctx {TYPE_2__ fallback; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct TYPE_3__ {char* cra_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ,int ) ;
 struct s390_aes_ctx* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_1)
{
 const char *VAR_2 = VAR_1->__crt_alg->cra_name;
 struct s390_aes_ctx *VAR_3 = FUNC_3(VAR_1);

 VAR_3->fallback.cip = FUNC_2(VAR_2, 0,
       VAR_0);

 if (FUNC_0(VAR_3->fallback.cip)) {
  FUNC_4("Allocating AES fallback algorithm %s failed\n",
         VAR_2);
  return FUNC_1(VAR_3->fallback.cip);
 }

 return 0;
}
