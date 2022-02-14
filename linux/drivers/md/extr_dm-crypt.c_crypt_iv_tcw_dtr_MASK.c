
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iv_tcw_private {int * crc32_tfm; int * whitening; int * iv_seed; } ;
struct TYPE_2__ {struct iv_tcw_private tcw; } ;
struct crypt_config {TYPE_1__ iv_gen_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct crypt_config *VAR_0)
{
 struct iv_tcw_private *VAR_1 = &VAR_0->iv_gen_private.tcw;

 FUNC_2(VAR_1->iv_seed);
 VAR_1->iv_seed = ((void*)0);
 FUNC_2(VAR_1->whitening);
 VAR_1->whitening = ((void*)0);

 if (VAR_1->crc32_tfm && !FUNC_0(VAR_1->crc32_tfm))
  FUNC_1(VAR_1->crc32_tfm);
 VAR_1->crc32_tfm = ((void*)0);
}
