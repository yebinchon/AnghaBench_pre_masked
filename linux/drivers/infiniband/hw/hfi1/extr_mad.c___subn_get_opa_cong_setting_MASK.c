
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct opa_congestion_setting_entry_shadow {int ccti_min; int trigger_threshold; int ccti_timer; int ccti_increase; } ;
struct opa_congestion_setting_attr {TYPE_2__* entries; int control_map; void* port_control; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_ibport {int dummy; } ;
struct TYPE_3__ {int control_map; int port_control; struct opa_congestion_setting_entry_shadow* entries; } ;
struct cc_state {TYPE_1__ cong_setting; } ;
struct TYPE_4__ {int ccti_min; int trigger_threshold; void* ccti_timer; int ccti_increase; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct cc_state* FUNC_2 (struct hfi1_pportdata*) ;
 struct hfi1_pportdata* FUNC_3 (struct hfi1_ibport*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_7 (int,int) ;
 struct hfi1_ibport* FUNC_8 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct opa_smp *VAR_2, u32 VAR_3,
           u8 *VAR_4, struct ib_device *VAR_5,
           u8 VAR_6, u32 *VAR_7, u32 VAR_8)
{
 int VAR_9;
 struct opa_congestion_setting_attr *VAR_10 =
  (struct opa_congestion_setting_attr *)VAR_4;
 struct hfi1_ibport *VAR_11 = FUNC_8(VAR_5, VAR_6);
 struct hfi1_pportdata *VAR_12 = FUNC_3(VAR_11);
 struct opa_congestion_setting_entry_shadow *VAR_13;
 struct cc_state *VAR_14;

 if (FUNC_7(sizeof(*VAR_10), VAR_8)) {
  VAR_2->status |= VAR_0;
  return FUNC_6((struct ib_mad_hdr *)VAR_2);
 }

 FUNC_4();

 VAR_14 = FUNC_2(VAR_12);

 if (!VAR_14) {
  FUNC_5();
  return FUNC_6((struct ib_mad_hdr *)VAR_2);
 }

 VAR_13 = VAR_14->cong_setting.entries;
 VAR_10->port_control = FUNC_0(VAR_14->cong_setting.port_control);
 VAR_10->control_map = FUNC_1(VAR_14->cong_setting.control_map);
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_10->entries[VAR_9].ccti_increase = VAR_13[VAR_9].ccti_increase;
  VAR_10->entries[VAR_9].ccti_timer = FUNC_0(VAR_13[VAR_9].ccti_timer);
  VAR_10->entries[VAR_9].trigger_threshold =
   VAR_13[VAR_9].trigger_threshold;
  VAR_10->entries[VAR_9].ccti_min = VAR_13[VAR_9].ccti_min;
 }

 FUNC_5();

 if (VAR_7)
  *VAR_7 += sizeof(*VAR_10);

 return FUNC_6((struct ib_mad_hdr *)VAR_2);
}
