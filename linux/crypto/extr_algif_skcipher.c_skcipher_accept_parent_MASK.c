
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (void*,struct sock*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, struct sock *VAR_3)
{
 struct crypto_skcipher *VAR_4 = VAR_2;

 if (FUNC_0(VAR_4) & VAR_0)
  return -VAR_1;

 return FUNC_1(VAR_2, VAR_3);
}
