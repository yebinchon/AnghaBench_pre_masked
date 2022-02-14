
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_akcipher {int dummy; } ;
struct caam_rsa_ctx {int dev; int padding_dma; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct caam_rsa_ctx* FUNC_2 (struct crypto_akcipher*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct crypto_akcipher *VAR_4)
{
 struct caam_rsa_ctx *VAR_5 = FUNC_2(VAR_4);

 VAR_5->dev = FUNC_3();

 if (FUNC_0(VAR_5->dev)) {
  FUNC_8("Job Ring Device allocation for transform failed\n");
  return FUNC_1(VAR_5->dev);
 }

 VAR_5->padding_dma = FUNC_6(VAR_5->dev, VAR_3,
       VAR_0 - 1,
       VAR_1);
 if (FUNC_7(VAR_5->dev, VAR_5->padding_dma)) {
  FUNC_5(VAR_5->dev, "unable to map padding\n");
  FUNC_4(VAR_5->dev);
  return -VAR_2;
 }

 return 0;
}
