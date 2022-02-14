
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int child; scalar_t__ table; } ;
struct crypto_skcipher {int dummy; } ;


 int FUNC_0 (int ) ;
 struct priv* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct crypto_skcipher *VAR_0)
{
 struct priv *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->table)
  FUNC_2(VAR_1->table);
 FUNC_0(VAR_1->child);
}
