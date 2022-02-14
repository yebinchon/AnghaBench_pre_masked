
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s390_des_ctx {int key; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (struct crypto_tfm*,int const*) ;
 struct s390_des_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_0, const u8 *VAR_1,
        unsigned int VAR_2)
{
 struct s390_des_ctx *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_3->key, VAR_1, VAR_2);
 return 0;
}
