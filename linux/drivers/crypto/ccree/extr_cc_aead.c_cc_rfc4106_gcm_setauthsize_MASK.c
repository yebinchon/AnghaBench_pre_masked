
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_aead_ctx {int drvdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_aead*,unsigned int) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct device*,char*,unsigned int) ;
 struct device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_1,
          unsigned int VAR_2)
{
 struct cc_aead_ctx *VAR_3 = FUNC_1(VAR_1);
 struct device *VAR_4 = FUNC_3(VAR_3->drvdata);

 FUNC_2(VAR_4, "authsize %d\n", VAR_2);

 switch (VAR_2) {
 case 8:
 case 12:
 case 16:
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_1, VAR_2);
}
