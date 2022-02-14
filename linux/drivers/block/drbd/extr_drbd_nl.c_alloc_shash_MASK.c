
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_shash {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int VAR_0 ;
 struct crypto_shash* FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct crypto_shash **VAR_1, char *VAR_2, int VAR_3)
{
 if (!VAR_2[0])
  return VAR_0;

 *VAR_1 = FUNC_1(VAR_2, 0, 0);
 if (FUNC_0(*VAR_1)) {
  *VAR_1 = ((void*)0);
  return VAR_3;
 }

 return VAR_0;
}
