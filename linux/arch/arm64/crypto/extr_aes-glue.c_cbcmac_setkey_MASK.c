
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mac_tfm_ctx {int key; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,unsigned int) ;
 struct mac_tfm_ctx* FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct crypto_shash*,int ) ;

__attribute__((used)) static int FUNC_3(struct crypto_shash *VAR_1, const u8 *VAR_2,
    unsigned int VAR_3)
{
 struct mac_tfm_ctx *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4->key, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_2(VAR_1, VAR_0);

 return VAR_5;
}
