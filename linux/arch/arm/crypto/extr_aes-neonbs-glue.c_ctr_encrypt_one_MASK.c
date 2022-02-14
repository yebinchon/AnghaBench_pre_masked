
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct aesbs_ctr_ctx {int fallback; } ;


 int FUNC_0 (int *,int *,int const*) ;
 struct aesbs_ctr_ctx* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct crypto_skcipher *VAR_0, const u8 *VAR_1, u8 *VAR_2)
{
 struct aesbs_ctr_ctx *VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4;






 FUNC_3(VAR_4);
 FUNC_0(&VAR_3->fallback, VAR_2, VAR_1);
 FUNC_2(VAR_4);
}
