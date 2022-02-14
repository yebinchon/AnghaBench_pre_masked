
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct xcbc_tfm_ctx {int child; int * ctx; } ;
struct crypto_shash {int dummy; } ;
typedef int key1 ;


 int const* FUNC_0 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (int ,int const*,int const*) ;
 int FUNC_2 (int ,int const*,int) ;
 unsigned long FUNC_3 (struct crypto_shash*) ;
 struct xcbc_tfm_ctx* FUNC_4 (struct crypto_shash*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_5(struct crypto_shash *VAR_2,
         const u8 *VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5 = FUNC_3(VAR_2);
 struct xcbc_tfm_ctx *VAR_6 = FUNC_4(VAR_2);
 u8 *VAR_7 = FUNC_0(&VAR_6->ctx[0], VAR_5 + 1);
 int VAR_8 = 0;
 u8 VAR_9[VAR_0];
 int VAR_10 = sizeof(VAR_9);

 if ((VAR_8 = FUNC_2(VAR_6->child, VAR_3, VAR_4)))
  return VAR_8;

 FUNC_1(VAR_6->child, VAR_7, (u8 *)VAR_1 + VAR_10);
 FUNC_1(VAR_6->child, VAR_7 + VAR_10, (u8 *)VAR_1 + VAR_10 * 2);
 FUNC_1(VAR_6->child, VAR_9, (u8 *)VAR_1);

 return FUNC_2(VAR_6->child, VAR_9, VAR_10);

}
