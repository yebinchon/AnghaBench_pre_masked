
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lzo_ctx {int lzo_comp_mem; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (int const*,unsigned int,int *,unsigned int*,int ) ;
 struct lzo_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_0, const u8 *VAR_1,
   unsigned int VAR_2, u8 *VAR_3, unsigned int *VAR_4)
{
 struct lzo_ctx *VAR_5 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5->lzo_comp_mem);
}
