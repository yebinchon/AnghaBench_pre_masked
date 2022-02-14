
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv_cesa_des_ctx {int key; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 struct mv_cesa_des_ctx* FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (struct crypto_skcipher*,int const*) ;

__attribute__((used)) static int FUNC_3(struct crypto_skcipher *VAR_1,
       const u8 *VAR_2, unsigned int VAR_3)
{
 struct mv_cesa_des_ctx *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_4->key, VAR_2, VAR_0);

 return 0;
}
