
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ietf_mpa_v1 {int priv_data_len; int rev; int flags; int key; } ;
struct TYPE_2__ {int size; } ;
struct i40iw_cm_node {TYPE_1__ pdata; int mpa_frame_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct i40iw_cm_node *VAR_4,
          void *VAR_5,
          u8 VAR_6)
{
 struct ietf_mpa_v1 *VAR_7 = (struct ietf_mpa_v1 *)VAR_5;

 switch (VAR_6) {
 case 128:
  FUNC_1(VAR_7->key, VAR_1, VAR_3);
  break;
 case 129:
  FUNC_1(VAR_7->key, VAR_0, VAR_3);
  break;
 default:
  break;
 }
 VAR_7->flags = VAR_2;
 VAR_7->rev = VAR_4->mpa_frame_rev;
 VAR_7->priv_data_len = FUNC_0(VAR_4->pdata.size);
}
