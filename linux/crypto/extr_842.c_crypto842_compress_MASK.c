
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;
struct crypto842_ctx {int wmem; } ;


 struct crypto842_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int const*,unsigned int,int *,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_0,
         const u8 *VAR_1, unsigned int VAR_2,
         u8 *VAR_3, unsigned int *VAR_4)
{
 struct crypto842_ctx *VAR_5 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5->wmem);
}
