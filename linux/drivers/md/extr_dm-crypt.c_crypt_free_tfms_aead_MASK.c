
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** tfms_aead; } ;
struct crypt_config {TYPE_1__ cipher_tfm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;

__attribute__((used)) static void FUNC_3(struct crypt_config *VAR_0)
{
 if (!VAR_0->cipher_tfm.tfms_aead)
  return;

 if (VAR_0->cipher_tfm.tfms_aead[0] && !FUNC_0(VAR_0->cipher_tfm.tfms_aead[0])) {
  FUNC_1(VAR_0->cipher_tfm.tfms_aead[0]);
  VAR_0->cipher_tfm.tfms_aead[0] = ((void*)0);
 }

 FUNC_2(VAR_0->cipher_tfm.tfms_aead);
 VAR_0->cipher_tfm.tfms_aead = ((void*)0);
}
