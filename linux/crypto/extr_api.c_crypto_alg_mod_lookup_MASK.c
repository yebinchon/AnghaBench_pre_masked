
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_alg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct crypto_alg* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct crypto_alg*) ;
 int VAR_3 ;
 int FUNC_2 (struct crypto_alg*) ;
 int FUNC_3 (struct crypto_alg*) ;
 struct crypto_alg* FUNC_4 (char const*,int,int) ;
 struct crypto_alg* FUNC_5 (struct crypto_alg*) ;
 int FUNC_6 (struct crypto_alg*) ;
 int FUNC_7 (int ,struct crypto_alg*) ;

struct crypto_alg *FUNC_8(const char *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct crypto_alg *VAR_7;
 struct crypto_alg *VAR_8;
 int VAR_9;
 if (!((VAR_5 | VAR_6) & VAR_0))
  VAR_6 |= VAR_0;

 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6);
 if (FUNC_1(VAR_8) || !FUNC_2(VAR_8))
  return VAR_8;

 VAR_9 = FUNC_7(VAR_1, VAR_8);

 if (VAR_9 == VAR_3)
  VAR_7 = FUNC_5(VAR_8);
 else {
  FUNC_6(VAR_8);
  VAR_7 = FUNC_0(-VAR_2);
 }
 FUNC_3(VAR_8);
 return VAR_7;
}
