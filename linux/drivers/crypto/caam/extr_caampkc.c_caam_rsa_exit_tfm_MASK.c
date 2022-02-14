
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_akcipher {int dummy; } ;
struct caam_rsa_key {int dummy; } ;
struct caam_rsa_ctx {int dev; int padding_dma; struct caam_rsa_key key; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct caam_rsa_ctx* FUNC_0 (struct crypto_akcipher*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct caam_rsa_key*) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct crypto_akcipher *VAR_2)
{
 struct caam_rsa_ctx *VAR_3 = FUNC_0(VAR_2);
 struct caam_rsa_key *VAR_4 = &VAR_3->key;

 FUNC_3(VAR_3->dev, VAR_3->padding_dma, VAR_0 -
    1, VAR_1);
 FUNC_2(VAR_4);
 FUNC_1(VAR_3->dev);
}
