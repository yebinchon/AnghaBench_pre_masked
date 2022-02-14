
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stm32_crc_ctx {int key; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stm32_crc_ctx* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*,int ) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static int FUNC_3(struct crypto_shash *VAR_2, const u8 *VAR_3,
       unsigned int VAR_4)
{
 struct stm32_crc_ctx *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4 != sizeof(u32)) {
  FUNC_1(VAR_2, VAR_0);
  return -VAR_1;
 }

 VAR_5->key = FUNC_2(VAR_3);
 return 0;
}
