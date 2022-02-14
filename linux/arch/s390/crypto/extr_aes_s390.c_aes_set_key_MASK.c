
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s390_aes_ctx {unsigned long fc; unsigned int key_len; int key; } ;
struct crypto_tfm {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int *,unsigned long) ;
 struct s390_aes_ctx* FUNC_1 (struct crypto_tfm*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (struct crypto_tfm*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_4, const u8 *VAR_5,
         unsigned int VAR_6)
{
 struct s390_aes_ctx *VAR_7 = FUNC_1(VAR_4);
 unsigned long VAR_8;


 VAR_8 = (VAR_6 == 16) ? VAR_0 :
      (VAR_6 == 24) ? VAR_1 :
      (VAR_6 == 32) ? VAR_2 : 0;


 VAR_7->fc = (VAR_8 && FUNC_0(&VAR_3, VAR_8)) ? VAR_8 : 0;
 if (!VAR_7->fc)
  return FUNC_3(VAR_4, VAR_5, VAR_6);

 VAR_7->key_len = VAR_6;
 FUNC_2(VAR_7->key, VAR_5, VAR_6);
 return 0;
}
