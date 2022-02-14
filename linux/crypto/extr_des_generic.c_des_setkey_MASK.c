
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct des_ctx {int dummy; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct des_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct crypto_tfm*,int ) ;
 int FUNC_3 (struct des_ctx*,int const*,unsigned int) ;
 int FUNC_4 (struct des_ctx*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_4, const u8 *VAR_5,
        unsigned int VAR_6)
{
 struct des_ctx *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 VAR_8 = FUNC_3(VAR_7, VAR_5, VAR_6);
 if (VAR_8 == -VAR_3) {
  if (FUNC_1(VAR_4) & VAR_0)
   VAR_8 = -VAR_2;
  else
   VAR_8 = 0;
 }

 if (VAR_8) {
  FUNC_4(VAR_7, 0, sizeof(*VAR_7));
  FUNC_2(VAR_4, VAR_1);
 }
 return VAR_8;
}
