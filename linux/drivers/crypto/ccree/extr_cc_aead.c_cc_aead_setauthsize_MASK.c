
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_aead_ctx {unsigned int authsize; int drvdata; } ;


 int VAR_0 ;
 struct cc_aead_ctx* FUNC_0 (struct crypto_aead*) ;
 unsigned int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct device*,char*,unsigned int) ;
 struct device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_1,
          unsigned int VAR_2)
{
 struct cc_aead_ctx *VAR_3 = FUNC_0(VAR_1);
 struct device *VAR_4 = FUNC_3(VAR_3->drvdata);


 if (VAR_2 == 0 ||
     VAR_2 > FUNC_1(VAR_1)) {
  return -VAR_0;
 }

 VAR_3->authsize = VAR_2;
 FUNC_2(VAR_4, "authlen=%d\n", VAR_3->authsize);

 return 0;
}
