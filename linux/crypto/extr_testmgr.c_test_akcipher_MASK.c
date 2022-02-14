
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_akcipher {int dummy; } ;
struct akcipher_testvec {int dummy; } ;


 int FUNC_0 (struct crypto_akcipher*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char const*,int) ;
 int FUNC_3 (struct crypto_akcipher*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_akcipher *VAR_0, const char *VAR_1,
    const struct akcipher_testvec *VAR_2,
    unsigned int VAR_3)
{
 const char *VAR_4 =
  FUNC_1(FUNC_0(VAR_0));
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = FUNC_3(VAR_0, VAR_2++);
  if (!VAR_5)
   continue;

  FUNC_2("alg: akcipher: test %d failed for %s, err=%d\n",
         VAR_6 + 1, VAR_4, VAR_5);
  return VAR_5;
 }
 return 0;
}
