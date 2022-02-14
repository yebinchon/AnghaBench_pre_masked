
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tfms; int * tfms_aead; } ;
struct crypt_config {unsigned int key_mac_size; int tfms_count; scalar_t__ authenc_key; scalar_t__ key; TYPE_1__ cipher_tfm; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct crypt_config*) ;
 int FUNC_1 (scalar_t__,scalar_t__,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (struct crypt_config*) ;
 scalar_t__ FUNC_3 (struct crypt_config*) ;
 unsigned int FUNC_4 (struct crypt_config*) ;
 int FUNC_5 (int ,scalar_t__,unsigned int) ;
 int FUNC_6 (int ,scalar_t__,unsigned int) ;
 int FUNC_7 (scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct crypt_config *VAR_1)
{
 unsigned VAR_2;
 int VAR_3 = 0, VAR_4, VAR_5;


 VAR_2 = FUNC_4(VAR_1);

 if (FUNC_3(VAR_1)) {
  if (VAR_2 < VAR_1->key_mac_size)
   return -VAR_0;

  FUNC_1(VAR_1->authenc_key, VAR_1->key,
          VAR_2 - VAR_1->key_mac_size,
          VAR_1->key_mac_size);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->tfms_count; VAR_4++) {
  if (FUNC_3(VAR_1))
   VAR_5 = FUNC_5(VAR_1->cipher_tfm.tfms_aead[VAR_4],
    VAR_1->authenc_key, FUNC_0(VAR_1));
  else if (FUNC_2(VAR_1))
   VAR_5 = FUNC_5(VAR_1->cipher_tfm.tfms_aead[VAR_4],
            VAR_1->key + (VAR_4 * VAR_2),
            VAR_2);
  else
   VAR_5 = FUNC_6(VAR_1->cipher_tfm.tfms[VAR_4],
         VAR_1->key + (VAR_4 * VAR_2),
         VAR_2);
  if (VAR_5)
   VAR_3 = VAR_5;
 }

 if (FUNC_3(VAR_1))
  FUNC_7(VAR_1->authenc_key, FUNC_0(VAR_1));

 return VAR_3;
}
