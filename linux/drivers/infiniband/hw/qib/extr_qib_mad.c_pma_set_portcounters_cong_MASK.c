
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qib_verbs_counters {int vl15_dropped; int excessive_buffer_overrun_errors; int local_link_integrity_errors; int port_xmit_discards; int port_rcv_remphys_errors; int port_rcv_errors; int link_downed_counter; int link_error_recovery_counter; int symbol_error_counter; int port_rcv_packets; int port_xmit_packets; int port_rcv_data; int port_xmit_data; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_9__ {TYPE_3__ rvp; } ;
struct TYPE_7__ {scalar_t__ counter; } ;
struct qib_pportdata {TYPE_4__ ibport_data; TYPE_2__ cong_stats; } ;
struct TYPE_10__ {scalar_t__ n_vl15_dropped; } ;
struct qib_ibport {int z_vl15_dropped; TYPE_5__ rvp; int z_excessive_buffer_overrun_errors; int z_local_link_integrity_errors; int z_port_xmit_discards; int z_port_rcv_remphys_errors; int z_port_rcv_errors; int z_link_downed_counter; int z_link_error_recovery_counter; int z_symbol_error_counter; int z_port_rcv_packets; int z_port_xmit_packets; int z_port_rcv_data; int z_port_xmit_data; } ;
struct qib_devdata {int (* f_set_cntr_sample ) (struct qib_pportdata*,int ,int) ;} ;
struct TYPE_6__ {int attr_mod; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct qib_devdata* FUNC_1 (struct qib_pportdata*) ;
 int FUNC_2 (struct ib_pma_mad*,struct ib_device*,int ) ;
 struct qib_pportdata* FUNC_3 (struct qib_ibport*) ;
 int FUNC_4 (struct qib_pportdata*,struct qib_verbs_counters*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct qib_pportdata*,int ,int) ;
 struct qib_ibport* FUNC_8 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct ib_pma_mad *VAR_4,
         struct ib_device *VAR_5, u8 VAR_6)
{
 struct qib_ibport *VAR_7 = FUNC_8(VAR_5, VAR_6);
 struct qib_pportdata *VAR_8 = FUNC_3(VAR_7);
 struct qib_devdata *VAR_9 = FUNC_1(VAR_8);
 struct qib_verbs_counters VAR_10;
 u32 VAR_11 = (FUNC_0(VAR_4->mad_hdr.attr_mod) >> 24) & 0xFF;
 int VAR_12 = 0;
 unsigned long VAR_13;

 FUNC_4(VAR_8, &VAR_10);

 VAR_12 = FUNC_2(VAR_4, VAR_5, VAR_6);

 if (VAR_11 & VAR_2) {
  FUNC_5(&VAR_8->ibport_data.rvp.lock, VAR_13);
  VAR_8->cong_stats.counter = 0;
  VAR_9->f_set_cntr_sample(VAR_8, VAR_3,
          0x0);
  FUNC_6(&VAR_8->ibport_data.rvp.lock, VAR_13);
 }
 if (VAR_11 & VAR_1) {
  VAR_7->z_port_xmit_data = VAR_10.port_xmit_data;
  VAR_7->z_port_rcv_data = VAR_10.port_rcv_data;
  VAR_7->z_port_xmit_packets = VAR_10.port_xmit_packets;
  VAR_7->z_port_rcv_packets = VAR_10.port_rcv_packets;
 }
 if (VAR_11 & VAR_0) {
  VAR_7->z_symbol_error_counter =
   VAR_10.symbol_error_counter;
  VAR_7->z_link_error_recovery_counter =
   VAR_10.link_error_recovery_counter;
  VAR_7->z_link_downed_counter =
   VAR_10.link_downed_counter;
  VAR_7->z_port_rcv_errors = VAR_10.port_rcv_errors;
  VAR_7->z_port_rcv_remphys_errors =
   VAR_10.port_rcv_remphys_errors;
  VAR_7->z_port_xmit_discards =
   VAR_10.port_xmit_discards;
  VAR_7->z_local_link_integrity_errors =
   VAR_10.local_link_integrity_errors;
  VAR_7->z_excessive_buffer_overrun_errors =
   VAR_10.excessive_buffer_overrun_errors;
  VAR_7->rvp.n_vl15_dropped = 0;
  VAR_7->z_vl15_dropped = VAR_10.vl15_dropped;
 }

 return VAR_12;
}
