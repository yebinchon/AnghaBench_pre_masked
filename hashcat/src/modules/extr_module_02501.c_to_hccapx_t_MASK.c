
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int keyver; int eapol_len; size_t* eapol; size_t* orig_mac_ap; size_t* orig_mac_sta; size_t* orig_nonce_ap; size_t* orig_nonce_sta; size_t* keymic; int message_pair; } ;
typedef TYPE_1__ wpa_eapol_t ;
typedef size_t u32 ;
struct TYPE_9__ {size_t const digests_offset; int salt_len; size_t* salt_buf; } ;
typedef TYPE_2__ salt_t ;
struct TYPE_10__ {int essid_len; int keyver; int eapol_len; int keymic; int nonce_sta; int nonce_ap; int mac_sta; int mac_ap; int eapol; int message_pair; int essid; int version; int signature; } ;
typedef TYPE_3__ hccapx_t ;
struct TYPE_11__ {void* esalts_buf; TYPE_2__* salts_buf; } ;
typedef TYPE_4__ hashes_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int ,size_t*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_3 (const hashes_t *VAR_2, hccapx_t *VAR_3, const u32 VAR_4, const u32 VAR_5)
{
  const salt_t *VAR_6 = VAR_2->salts_buf;
  const void *VAR_7 = VAR_2->esalts_buf;

  FUNC_2 (VAR_3, 0, sizeof (hccapx_t));

  VAR_3->signature = VAR_0;
  VAR_3->version = VAR_1;

  const salt_t *VAR_8 = &VAR_6[VAR_4];

  const u32 VAR_9 = VAR_8->digests_offset + VAR_5;

  VAR_3->essid_len = VAR_8->salt_len;

  FUNC_1 (VAR_3->essid, VAR_8->salt_buf, VAR_3->essid_len);

  wpa_eapol_t *VAR_10 = (wpa_eapol_t *) VAR_7;
  wpa_eapol_t *VAR_11 = &VAR_10[VAR_9];

  VAR_3->message_pair = VAR_11->message_pair;
  VAR_3->keyver = VAR_11->keyver;

  VAR_3->eapol_len = VAR_11->eapol_len;

  if (VAR_11->keyver != 1)
  {
    u32 VAR_12[64] = { 0 };

    for (u32 VAR_13 = 0; VAR_13 < 64; VAR_13++)
    {
      VAR_12[VAR_13] = FUNC_0 (VAR_11->eapol[VAR_13]);
    }

    FUNC_1 (VAR_3->eapol, VAR_12, VAR_11->eapol_len);
  }
  else
  {
    FUNC_1 (VAR_3->eapol, VAR_11->eapol, VAR_11->eapol_len);
  }

  FUNC_1 (VAR_3->mac_ap, VAR_11->orig_mac_ap, 6);
  FUNC_1 (VAR_3->mac_sta, VAR_11->orig_mac_sta, 6);
  FUNC_1 (VAR_3->nonce_ap, VAR_11->orig_nonce_ap, 32);
  FUNC_1 (VAR_3->nonce_sta, VAR_11->orig_nonce_sta, 32);

  if (VAR_11->keyver != 1)
  {
    u32 VAR_14[4];

    VAR_14[0] = FUNC_0 (VAR_11->keymic[0]);
    VAR_14[1] = FUNC_0 (VAR_11->keymic[1]);
    VAR_14[2] = FUNC_0 (VAR_11->keymic[2]);
    VAR_14[3] = FUNC_0 (VAR_11->keymic[3]);

    FUNC_1 (VAR_3->keymic, VAR_14, 16);
  }
  else
  {
    FUNC_1 (VAR_3->keymic, VAR_11->keymic, 16);
  }
}
