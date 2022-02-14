
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int dummy; } ;


 int FUNC_0 (struct crypto_alg*) ;
 int VAR_0 ;
 struct crypto_alg** VAR_1 ;

__attribute__((used)) static int FUNC_1(struct crypto_alg *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  VAR_1[VAR_0++] = VAR_2;
 return VAR_3;
}
