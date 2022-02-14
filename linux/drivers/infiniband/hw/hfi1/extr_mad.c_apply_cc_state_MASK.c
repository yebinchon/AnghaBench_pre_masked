
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct opa_congestion_setting_entry {int dummy; } ;
struct ib_cc_table_entry {int dummy; } ;
struct hfi1_pportdata {int total_cct_entry; int cc_state_lock; int cc_state; int congestion_entries; int cc_sl_control_map; int ccti_entries; } ;
struct TYPE_4__ {int entries; int control_map; int port_control; } ;
struct TYPE_3__ {int ccti_limit; int entries; } ;
struct cc_state {TYPE_2__ cong_setting; TYPE_1__ cct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cc_state* FUNC_0 (struct hfi1_pportdata*) ;
 int FUNC_1 (struct cc_state*) ;
 int FUNC_2 (struct cc_state*,int ) ;
 struct cc_state* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_5 (int ,struct cc_state*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct hfi1_pportdata *VAR_4)
{
 struct cc_state *VAR_5, *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return;





 FUNC_6(&VAR_4->cc_state_lock);

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5) {

  FUNC_7(&VAR_4->cc_state_lock);
  FUNC_1(VAR_6);
  return;
 }

 *VAR_6 = *VAR_5;

 if (VAR_4->total_cct_entry)
  VAR_6->cct.ccti_limit = VAR_4->total_cct_entry - 1;
 else
  VAR_6->cct.ccti_limit = 0;

 FUNC_4(VAR_6->cct.entries, VAR_4->ccti_entries,
        VAR_4->total_cct_entry * sizeof(struct ib_cc_table_entry));

 VAR_6->cong_setting.port_control = VAR_1;
 VAR_6->cong_setting.control_map = VAR_4->cc_sl_control_map;
 FUNC_4(VAR_6->cong_setting.entries, VAR_4->congestion_entries,
        VAR_2 * sizeof(struct opa_congestion_setting_entry));

 FUNC_5(VAR_4->cc_state, VAR_6);

 FUNC_7(&VAR_4->cc_state_lock);

 FUNC_2(VAR_5, VAR_3);
}
