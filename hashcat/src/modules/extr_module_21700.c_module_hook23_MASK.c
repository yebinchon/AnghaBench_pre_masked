
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u64 ;
typedef size_t u32 ;
typedef int secp256k1_pubkey ;
struct TYPE_5__ {scalar_t__ hooks_buf; } ;
typedef TYPE_1__ hc_device_param_t ;
struct TYPE_6__ {int hook_success; size_t* pubkey; size_t* ukey; } ;
typedef TYPE_2__ electrum_hook_t ;
struct TYPE_7__ {int ephemeral_pubkey_struct; } ;
typedef TYPE_3__ electrum_hook_salt_t ;


 int FUNC_0 (int *,int *,size_t const) ;

void FUNC_1 (hc_device_param_t *VAR_0, const void *VAR_1, const u32 VAR_2, const u64 VAR_3)
{
  electrum_hook_t *VAR_4 = (electrum_hook_t *) VAR_0->hooks_buf;

  electrum_hook_salt_t *VAR_5 = (electrum_hook_salt_t *) VAR_1;
  electrum_hook_salt_t *VAR_6 = &VAR_5[VAR_2];



  secp256k1_pubkey VAR_7 = VAR_6->ephemeral_pubkey_struct;



  electrum_hook_t *VAR_8 = &VAR_4[VAR_3];

  VAR_8->hook_success = 0;

  u32 *VAR_9 = VAR_8->pubkey;

  VAR_9[0] = VAR_8->ukey[0];
  VAR_9[1] = VAR_8->ukey[1];
  VAR_9[2] = VAR_8->ukey[2];
  VAR_9[3] = VAR_8->ukey[3];
  VAR_9[4] = VAR_8->ukey[4];
  VAR_9[5] = VAR_8->ukey[5];
  VAR_9[6] = VAR_8->ukey[6];
  VAR_9[7] = VAR_8->ukey[7];
  VAR_9[8] = 0;





  const size_t VAR_10 = 33;

  bool VAR_11 = FUNC_0 (&VAR_7, (u8 *) VAR_9, VAR_10);

  if (VAR_11 == 0) return;




  VAR_8->hook_success = 1;
}
