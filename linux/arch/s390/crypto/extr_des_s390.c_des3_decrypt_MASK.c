
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s390_des_ctx {int key; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int *,int const*,int ) ;
 struct s390_des_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_3, u8 *VAR_4, const u8 *VAR_5)
{
 struct s390_des_ctx *VAR_6 = FUNC_1(VAR_3);

 FUNC_0(VAR_1 | VAR_0,
   VAR_6->key, VAR_4, VAR_5, VAR_2);
}
