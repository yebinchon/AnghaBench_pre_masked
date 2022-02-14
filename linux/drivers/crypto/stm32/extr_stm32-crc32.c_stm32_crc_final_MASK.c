
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stm32_crc_desc_ctx {int partial; } ;
struct stm32_crc_ctx {scalar_t__ poly; } ;
struct shash_desc {int tfm; } ;


 scalar_t__ VAR_0 ;
 struct stm32_crc_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 struct stm32_crc_desc_ctx* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_1, u8 *VAR_2)
{
 struct stm32_crc_desc_ctx *VAR_3 = FUNC_2(VAR_1);
 struct stm32_crc_ctx *VAR_4 = FUNC_0(VAR_1->tfm);


 FUNC_1(VAR_4->poly == VAR_0 ?
      ~VAR_3->partial : VAR_3->partial, VAR_2);

 return 0;
}
