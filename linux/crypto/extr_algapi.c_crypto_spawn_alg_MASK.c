
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_spawn {struct crypto_alg* alg; } ;
struct crypto_alg {int dummy; } ;


 int VAR_0 ;
 struct crypto_alg* FUNC_0 (int ) ;
 int VAR_1 ;
 struct crypto_alg* FUNC_1 (struct crypto_alg*) ;
 int FUNC_2 (struct crypto_alg*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct crypto_alg *FUNC_5(struct crypto_spawn *VAR_2)
{
 struct crypto_alg *VAR_3;
 struct crypto_alg *VAR_4;

 FUNC_3(&VAR_1);
 VAR_3 = VAR_2->alg;
 VAR_4 = VAR_3;
 if (VAR_4)
  VAR_4 = FUNC_1(VAR_4);
 FUNC_4(&VAR_1);

 if (!VAR_4) {
  if (VAR_3)
   FUNC_2(VAR_3);
  return FUNC_0(-VAR_0);
 }

 return VAR_3;
}
