
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct p8_ghash_ctx {int key; int htable; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct crypto_shash*) ;
 struct p8_ghash_ctx* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int const*) ;
 int FUNC_5 (int *,int const*,unsigned int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct crypto_shash *VAR_2, const u8 *VAR_3,
      unsigned int VAR_4)
{
 struct p8_ghash_ctx *VAR_5 = FUNC_1(FUNC_0(VAR_2));

 if (VAR_4 != VAR_1)
  return -VAR_0;

 FUNC_8();
 FUNC_6();
 FUNC_3();
 FUNC_4(VAR_5->htable, (const u64 *) VAR_3);
 FUNC_2();
 FUNC_7();
 FUNC_9();

 FUNC_5(&VAR_5->key, VAR_3, VAR_1);

 return 0;
}
