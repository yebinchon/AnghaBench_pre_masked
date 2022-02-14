
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpp_testvec {int dummy; } ;
struct crypto_kpp {int dummy; } ;


 int FUNC_0 (struct crypto_kpp*,int ,char const*) ;
 int FUNC_1 (char*,char const*,int,int) ;

__attribute__((used)) static int FUNC_2(struct crypto_kpp *VAR_0, const char *VAR_1,
      const struct kpp_testvec *VAR_2, unsigned int VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_0(VAR_0, VAR_2++, VAR_1);
  if (VAR_4) {
   FUNC_1("alg: %s: test failed on vector %d, err=%d\n",
          VAR_1, VAR_5 + 1, VAR_4);
   return VAR_4;
  }
 }
 return 0;
}
