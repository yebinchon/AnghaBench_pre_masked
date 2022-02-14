
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct TYPE_5__ {int * tfms_aead; int tfms; } ;
struct crypt_config {TYPE_2__ cipher_tfm; } ;
struct TYPE_4__ {int cra_driver_name; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct crypt_config*) ;
 int FUNC_4 (struct crypt_config*) ;
 TYPE_3__* FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct crypt_config *VAR_2, char *VAR_3)
{
 int VAR_4;

 VAR_2->cipher_tfm.tfms = FUNC_7(sizeof(struct crypto_aead *), VAR_1);
 if (!VAR_2->cipher_tfm.tfms)
  return -VAR_0;

 VAR_2->cipher_tfm.tfms_aead[0] = FUNC_6(VAR_3, 0, 0);
 if (FUNC_1(VAR_2->cipher_tfm.tfms_aead[0])) {
  VAR_4 = FUNC_2(VAR_2->cipher_tfm.tfms_aead[0]);
  FUNC_4(VAR_2);
  return VAR_4;
 }

 FUNC_0("%s using implementation \"%s\"", VAR_3,
        FUNC_5(FUNC_3(VAR_2))->base.cra_driver_name);
 return 0;
}
