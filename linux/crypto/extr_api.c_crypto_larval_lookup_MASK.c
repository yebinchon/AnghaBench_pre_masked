
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_alg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct crypto_alg* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_alg*) ;
 struct crypto_alg* FUNC_2 (char const*,int,int) ;
 scalar_t__ FUNC_3 (struct crypto_alg*) ;
 struct crypto_alg* FUNC_4 (char const*,int,int) ;
 struct crypto_alg* FUNC_5 (struct crypto_alg*) ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static struct crypto_alg *FUNC_7(const char *VAR_5, u32 VAR_6,
            u32 VAR_7)
{
 struct crypto_alg *VAR_8;

 if (!VAR_5)
  return FUNC_0(-VAR_4);

 VAR_6 &= ~(VAR_1 | VAR_0);
 VAR_7 &= ~(VAR_1 | VAR_0);

 VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
 if (!VAR_8 && !(VAR_7 & VAR_3)) {
  FUNC_6("crypto-%s", VAR_5);

  if (!((VAR_6 ^ VAR_2) & VAR_7 &
        VAR_2))
   FUNC_6("crypto-%s-all", VAR_5);

  VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
 }

 if (!FUNC_1(VAR_8) && FUNC_3(VAR_8))
  VAR_8 = FUNC_5(VAR_8);
 else if (!VAR_8)
  VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_7);

 return VAR_8;
}
