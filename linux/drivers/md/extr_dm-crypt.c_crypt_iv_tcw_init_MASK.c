
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iv_tcw_private {int whitening; int iv_seed; } ;
struct TYPE_2__ {struct iv_tcw_private tcw; } ;
struct crypt_config {int key_size; int iv_size; int * key; TYPE_1__ iv_gen_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct crypt_config *VAR_1)
{
 struct iv_tcw_private *VAR_2 = &VAR_1->iv_gen_private.tcw;
 int VAR_3 = VAR_1->key_size - VAR_1->iv_size - VAR_0;

 FUNC_0(VAR_2->iv_seed, &VAR_1->key[VAR_3], VAR_1->iv_size);
 FUNC_0(VAR_2->whitening, &VAR_1->key[VAR_3 + VAR_1->iv_size],
        VAR_0);

 return 0;
}
