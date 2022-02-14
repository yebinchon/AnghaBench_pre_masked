
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct opa_hfi1_cong_log_event_internal {int timestamp; int sl; int svc_type; int rlid; int rqpn; int lqpn; } ;
struct opa_hfi1_cong_log {TYPE_1__* events; void* current_time_stamp; int threshold_cong_event_map; int threshold_event_counter; scalar_t__ congestion_flags; int log_type; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int cc_mad_idx; int cc_log_lock; scalar_t__ threshold_event_counter; int * threshold_cong_event_map; struct opa_hfi1_cong_log_event_internal* cc_events; } ;
struct hfi1_ibport {int dummy; } ;
struct TYPE_2__ {int sl_svc_type_cn_entry; void* timestamp_cn_entry; void* remote_lid_cn_entry; int remote_qp_number_cn_entry; int local_qp_cn_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *,int,int) ;
 struct hfi1_pportdata* FUNC_5 (struct hfi1_ibport*) ;
 int FUNC_6 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct hfi1_ibport* FUNC_10 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_11(struct opa_smp *VAR_4, u32 VAR_5,
     u8 *VAR_6, struct ib_device *VAR_7,
     u8 VAR_8, u32 *VAR_9, u32 VAR_10)
{
 struct hfi1_ibport *VAR_11 = FUNC_10(VAR_7, VAR_8);
 struct hfi1_pportdata *VAR_12 = FUNC_5(VAR_11);
 struct opa_hfi1_cong_log *VAR_13 = (struct opa_hfi1_cong_log *)VAR_6;
 u64 VAR_14;
 int VAR_15;

 if (VAR_5 || FUNC_7(sizeof(*VAR_13), VAR_10)) {
  VAR_4->status |= VAR_0;
  return FUNC_6((struct ib_mad_hdr *)VAR_4);
 }

 FUNC_8(&VAR_12->cc_log_lock);

 VAR_13->log_type = VAR_1;
 VAR_13->congestion_flags = 0;
 VAR_13->threshold_event_counter =
  FUNC_0(VAR_12->threshold_event_counter);
 FUNC_3(VAR_13->threshold_cong_event_map,
        VAR_12->threshold_cong_event_map,
        sizeof(VAR_13->threshold_cong_event_map));

 VAR_14 = FUNC_2() / 1024;
 VAR_13->current_time_stamp = FUNC_1(VAR_14);
 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
  struct opa_hfi1_cong_log_event_internal *VAR_16 =
   &VAR_12->cc_events[VAR_12->cc_mad_idx++];
  if (VAR_12->cc_mad_idx == VAR_2)
   VAR_12->cc_mad_idx = 0;





  if ((VAR_14 - VAR_16->timestamp) / 2 > VAR_3)
   continue;
  FUNC_3(VAR_13->events[VAR_15].local_qp_cn_entry, &VAR_16->lqpn, 3);
  FUNC_3(VAR_13->events[VAR_15].remote_qp_number_cn_entry,
         &VAR_16->rqpn, 3);
  VAR_13->events[VAR_15].sl_svc_type_cn_entry =
   ((VAR_16->sl & 0x1f) << 3) | (VAR_16->svc_type & 0x7);
  VAR_13->events[VAR_15].remote_lid_cn_entry =
   FUNC_1(VAR_16->rlid);
  VAR_13->events[VAR_15].timestamp_cn_entry =
   FUNC_1(VAR_16->timestamp);
 }





 FUNC_4(VAR_12->threshold_cong_event_map, 0x0,
        sizeof(VAR_12->threshold_cong_event_map));
 VAR_12->threshold_event_counter = 0;

 FUNC_9(&VAR_12->cc_log_lock);

 if (VAR_9)
  *VAR_9 += sizeof(struct opa_hfi1_cong_log);

 return FUNC_6((struct ib_mad_hdr *)VAR_4);
}
