
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_verbs_counters {int vl15_dropped; int excessive_buffer_overrun_errors; int local_link_integrity_errors; int port_rcv_packets; int port_xmit_packets; int port_rcv_data; int port_xmit_data; int port_xmit_discards; int port_rcv_remphys_errors; int port_rcv_errors; int link_downed_counter; int link_error_recovery_counter; int symbol_error_counter; } ;
struct TYPE_4__ {int port_cap_flags; int * qp; int * pma_counter_select; int sm_lid; int gid_prefix; int lock; } ;
struct qib_ibport {TYPE_2__ rvp; int z_vl15_dropped; int z_excessive_buffer_overrun_errors; int z_local_link_integrity_errors; int z_port_rcv_packets; int z_port_xmit_packets; int z_port_rcv_data; int z_port_xmit_data; int z_port_xmit_discards; int z_port_rcv_remphys_errors; int z_port_rcv_errors; int z_link_downed_counter; int z_link_error_recovery_counter; int z_symbol_error_counter; } ;
struct qib_pportdata {TYPE_1__* dd; struct qib_ibport ibport_data; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qib_pportdata*,struct qib_verbs_counters*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct qib_pportdata *VAR_17)
{
 struct qib_verbs_counters VAR_18;
 struct qib_ibport *VAR_19 = &VAR_17->ibport_data;

 FUNC_3(&VAR_19->rvp.lock);

 VAR_19->rvp.gid_prefix = VAR_0;
 VAR_19->rvp.sm_lid = FUNC_1(VAR_1);
 VAR_19->rvp.port_cap_flags = VAR_14 |
  VAR_9 | VAR_13 |
  VAR_15 | VAR_7 |
  VAR_10 | VAR_8 |
  VAR_12;
 if (VAR_17->dd->flags & VAR_16)
  VAR_19->rvp.port_cap_flags |= VAR_11;
 VAR_19->rvp.pma_counter_select[0] = VAR_4;
 VAR_19->rvp.pma_counter_select[1] = VAR_2;
 VAR_19->rvp.pma_counter_select[2] = VAR_5;
 VAR_19->rvp.pma_counter_select[3] = VAR_3;
 VAR_19->rvp.pma_counter_select[4] = VAR_6;


 FUNC_2(VAR_17, &VAR_18);
 VAR_19->z_symbol_error_counter = VAR_18.symbol_error_counter;
 VAR_19->z_link_error_recovery_counter =
  VAR_18.link_error_recovery_counter;
 VAR_19->z_link_downed_counter = VAR_18.link_downed_counter;
 VAR_19->z_port_rcv_errors = VAR_18.port_rcv_errors;
 VAR_19->z_port_rcv_remphys_errors = VAR_18.port_rcv_remphys_errors;
 VAR_19->z_port_xmit_discards = VAR_18.port_xmit_discards;
 VAR_19->z_port_xmit_data = VAR_18.port_xmit_data;
 VAR_19->z_port_rcv_data = VAR_18.port_rcv_data;
 VAR_19->z_port_xmit_packets = VAR_18.port_xmit_packets;
 VAR_19->z_port_rcv_packets = VAR_18.port_rcv_packets;
 VAR_19->z_local_link_integrity_errors =
  VAR_18.local_link_integrity_errors;
 VAR_19->z_excessive_buffer_overrun_errors =
  VAR_18.excessive_buffer_overrun_errors;
 VAR_19->z_vl15_dropped = VAR_18.vl15_dropped;
 FUNC_0(VAR_19->rvp.qp[0], ((void*)0));
 FUNC_0(VAR_19->rvp.qp[1], ((void*)0));
}
