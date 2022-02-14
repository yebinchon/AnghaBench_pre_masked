
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_alg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct crypto_alg* FUNC_0 (int ) ;
 struct crypto_alg* FUNC_1 (char const*,int,int) ;
 int VAR_2 ;
 int FUNC_2 (struct crypto_alg*) ;
 int FUNC_3 (struct crypto_alg*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct crypto_alg *FUNC_6(const char *VAR_3, u32 VAR_4,
         u32 VAR_5)
{
 struct crypto_alg *VAR_6;
 u32 VAR_7 = 0;

 if (!((VAR_4 | VAR_5) & VAR_0))
  VAR_7 |= VAR_0;

 FUNC_4(&VAR_2);
 VAR_6 = FUNC_1(VAR_3, VAR_4 | VAR_7, VAR_5 | VAR_7);
 if (!VAR_6 && VAR_7) {
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
  if (VAR_6 && !FUNC_2(VAR_6)) {

   FUNC_3(VAR_6);
   VAR_6 = FUNC_0(-VAR_1);
  }
 }
 FUNC_5(&VAR_2);

 return VAR_6;
}
