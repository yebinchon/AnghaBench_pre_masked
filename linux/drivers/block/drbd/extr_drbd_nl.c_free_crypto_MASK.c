
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto {int verify_tfm; int csums_tfm; int integrity_tfm; int cram_hmac_tfm; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct crypto *VAR_0)
{
 FUNC_0(VAR_0->cram_hmac_tfm);
 FUNC_0(VAR_0->integrity_tfm);
 FUNC_0(VAR_0->csums_tfm);
 FUNC_0(VAR_0->verify_tfm);
}
