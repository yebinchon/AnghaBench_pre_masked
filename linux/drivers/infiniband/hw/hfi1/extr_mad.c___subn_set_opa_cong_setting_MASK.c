
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct opa_congestion_setting_entry_shadow {int ccti_min; int trigger_threshold; int ccti_timer; int ccti_increase; } ;
struct opa_congestion_setting_attr {TYPE_1__* entries; int control_map; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int cc_state_lock; struct opa_congestion_setting_entry_shadow* congestion_entries; int cc_sl_control_map; } ;
struct hfi1_ibport {int dummy; } ;
struct TYPE_2__ {int ccti_min; int trigger_threshold; int ccti_timer; int ccti_increase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_1 (struct hfi1_pportdata*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct hfi1_pportdata* FUNC_4 (struct hfi1_ibport*) ;
 int FUNC_5 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct hfi1_ibport* FUNC_9 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct opa_smp *VAR_2, u32 VAR_3, u8 *VAR_4,
           struct ib_device *VAR_5, u8 VAR_6,
           u32 *VAR_7, u32 VAR_8)
{
 struct opa_congestion_setting_attr *VAR_9 =
  (struct opa_congestion_setting_attr *)VAR_4;
 struct hfi1_ibport *VAR_10 = FUNC_9(VAR_5, VAR_6);
 struct hfi1_pportdata *VAR_11 = FUNC_4(VAR_10);
 struct opa_congestion_setting_entry_shadow *VAR_12;
 int VAR_13;

 if (FUNC_6(sizeof(*VAR_9), VAR_8)) {
  VAR_2->status |= VAR_0;
  return FUNC_5((struct ib_mad_hdr *)VAR_2);
 }





 FUNC_7(&VAR_11->cc_state_lock);
 VAR_11->cc_sl_control_map = FUNC_3(VAR_9->control_map);

 VAR_12 = VAR_11->congestion_entries;
 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_12[VAR_13].ccti_increase = VAR_9->entries[VAR_13].ccti_increase;
  VAR_12[VAR_13].ccti_timer = FUNC_2(VAR_9->entries[VAR_13].ccti_timer);
  VAR_12[VAR_13].trigger_threshold =
   VAR_9->entries[VAR_13].trigger_threshold;
  VAR_12[VAR_13].ccti_min = VAR_9->entries[VAR_13].ccti_min;
 }
 FUNC_8(&VAR_11->cc_state_lock);


 FUNC_1(VAR_11);

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7, VAR_8);
}
