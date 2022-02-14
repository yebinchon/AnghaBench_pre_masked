
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct crypto_kpp {int dummy; } ;
struct TYPE_3__ {int count; int vecs; } ;
struct TYPE_4__ {TYPE_1__ kpp; } ;
struct alg_test_desc {TYPE_2__ suite; int alg; } ;


 scalar_t__ FUNC_0 (struct crypto_kpp*) ;
 int FUNC_1 (struct crypto_kpp*) ;
 struct crypto_kpp* FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (struct crypto_kpp*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (struct crypto_kpp*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(const struct alg_test_desc *VAR_0, const char *VAR_1,
   u32 VAR_2, u32 VAR_3)
{
 struct crypto_kpp *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_4("alg: kpp: Failed to load tfm for %s: %ld\n",
         VAR_1, FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }
 if (VAR_0->suite.kpp.vecs)
  VAR_5 = FUNC_5(VAR_4, VAR_0->alg, VAR_0->suite.kpp.vecs,
          VAR_0->suite.kpp.count);

 FUNC_3(VAR_4);
 return VAR_5;
}
