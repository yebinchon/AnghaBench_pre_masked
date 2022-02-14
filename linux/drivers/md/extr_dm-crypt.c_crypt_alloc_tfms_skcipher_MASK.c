
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct crypto_skcipher {int dummy; } ;
struct TYPE_4__ {int * tfms; } ;
struct crypt_config {unsigned int tfms_count; TYPE_1__ cipher_tfm; } ;
struct TYPE_5__ {int cra_driver_name; } ;
struct TYPE_6__ {TYPE_2__ base; } ;


 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct crypt_config*) ;
 int FUNC_4 (struct crypt_config*) ;
 int FUNC_5 (char*,int ,int ) ;
 TYPE_3__* FUNC_6 (int ) ;
 int * FUNC_7 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_8(struct crypt_config *VAR_2, char *VAR_3)
{
 unsigned VAR_4;
 int VAR_5;

 VAR_2->cipher_tfm.tfms = FUNC_7(VAR_2->tfms_count,
          sizeof(struct crypto_skcipher *),
          VAR_1);
 if (!VAR_2->cipher_tfm.tfms)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2->tfms_count; VAR_4++) {
  VAR_2->cipher_tfm.tfms[VAR_4] = FUNC_5(VAR_3, 0, 0);
  if (FUNC_1(VAR_2->cipher_tfm.tfms[VAR_4])) {
   VAR_5 = FUNC_2(VAR_2->cipher_tfm.tfms[VAR_4]);
   FUNC_4(VAR_2);
   return VAR_5;
  }
 }






 FUNC_0("%s using implementation \"%s\"", VAR_3,
        FUNC_6(FUNC_3(VAR_2))->base.cra_driver_name);
 return 0;
}
