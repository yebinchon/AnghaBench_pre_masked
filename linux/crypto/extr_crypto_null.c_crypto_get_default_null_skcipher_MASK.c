
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_sync_skcipher {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_sync_skcipher*) ;
 struct crypto_sync_skcipher* FUNC_1 (char*,int ,int ) ;
 struct crypto_sync_skcipher* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct crypto_sync_skcipher *FUNC_4(void)
{
 struct crypto_sync_skcipher *VAR_3;

 FUNC_2(&VAR_1);
 VAR_3 = VAR_0;

 if (!VAR_3) {
  VAR_3 = FUNC_1("ecb(cipher_null)", 0, 0);
  if (FUNC_0(VAR_3))
   goto unlock;

  VAR_0 = VAR_3;
 }

 VAR_2++;

unlock:
 FUNC_3(&VAR_1);

 return VAR_3;
}
