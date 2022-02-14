
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_shash {int dummy; } ;
struct alg_spec {int key_size; scalar_t__ key; scalar_t__ alg_string; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (struct crypto_shash*) ;
 int FUNC_4 (struct crypto_shash*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct crypto_shash **VAR_2, struct alg_spec *VAR_3, char **VAR_4,
     char *VAR_5, char *VAR_6)
{
 int VAR_7;

 if (VAR_3->alg_string) {
  *VAR_2 = FUNC_2(VAR_3->alg_string, 0, 0);
  if (FUNC_0(*VAR_2)) {
   *VAR_4 = VAR_5;
   VAR_7 = FUNC_1(*VAR_2);
   *VAR_2 = ((void*)0);
   return VAR_7;
  }

  if (VAR_3->key) {
   VAR_7 = FUNC_4(*VAR_2, VAR_3->key, VAR_3->key_size);
   if (VAR_7) {
    *VAR_4 = VAR_6;
    return VAR_7;
   }
  } else if (FUNC_3(*VAR_2) & VAR_0) {
   *VAR_4 = VAR_6;
   return -VAR_1;
  }
 }

 return 0;
}
