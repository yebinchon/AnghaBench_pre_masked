
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** tfms; } ;
struct crypt_config {unsigned int tfms_count; TYPE_1__ cipher_tfm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;

__attribute__((used)) static void FUNC_3(struct crypt_config *VAR_0)
{
 unsigned VAR_1;

 if (!VAR_0->cipher_tfm.tfms)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->tfms_count; VAR_1++)
  if (VAR_0->cipher_tfm.tfms[VAR_1] && !FUNC_0(VAR_0->cipher_tfm.tfms[VAR_1])) {
   FUNC_1(VAR_0->cipher_tfm.tfms[VAR_1]);
   VAR_0->cipher_tfm.tfms[VAR_1] = ((void*)0);
  }

 FUNC_2(VAR_0->cipher_tfm.tfms);
 VAR_0->cipher_tfm.tfms = ((void*)0);
}
