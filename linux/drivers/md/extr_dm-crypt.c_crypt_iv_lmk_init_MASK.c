
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iv_lmk_private {int hash_tfm; scalar_t__ seed; } ;
struct TYPE_2__ {struct iv_lmk_private lmk; } ;
struct crypt_config {int key_size; int key_parts; int tfms_count; scalar_t__ key; TYPE_1__ iv_gen_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct crypt_config *VAR_0)
{
 struct iv_lmk_private *VAR_1 = &VAR_0->iv_gen_private.lmk;
 int VAR_2 = VAR_0->key_size / VAR_0->key_parts;


 if (VAR_1->seed)
  FUNC_1(VAR_1->seed, VAR_0->key + (VAR_0->tfms_count * VAR_2),
         FUNC_0(VAR_1->hash_tfm));

 return 0;
}
