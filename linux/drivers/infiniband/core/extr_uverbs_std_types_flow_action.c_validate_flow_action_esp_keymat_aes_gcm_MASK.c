
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_uverbs_flow_action_esp_keymat_aes_gcm {scalar_t__ iv_algo; int key_len; int icv_len; } ;
struct TYPE_2__ {struct ib_uverbs_flow_action_esp_keymat_aes_gcm aes_gcm; } ;
struct ib_flow_action_attrs_esp_keymats {TYPE_1__ keymat; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ib_flow_action_attrs_esp_keymats *VAR_3)
{
 struct ib_uverbs_flow_action_esp_keymat_aes_gcm *VAR_4 =
  &VAR_3->keymat.aes_gcm;

 if (VAR_4->iv_algo > VAR_2)
  return -VAR_1;

 if (VAR_4->key_len != 32 &&
     VAR_4->key_len != 24 &&
     VAR_4->key_len != 16)
  return -VAR_0;

 if (VAR_4->icv_len != 16 &&
     VAR_4->icv_len != 8 &&
     VAR_4->icv_len != 12)
  return -VAR_0;

 return 0;
}
