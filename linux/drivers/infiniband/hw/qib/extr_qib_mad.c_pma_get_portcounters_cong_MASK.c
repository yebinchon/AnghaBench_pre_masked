
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct qib_verbs_counters {int symbol_error_counter; int link_error_recovery_counter; int link_downed_counter; int port_rcv_errors; int port_rcv_remphys_errors; int port_xmit_discards; int local_link_integrity_errors; int excessive_buffer_overrun_errors; int vl15_dropped; scalar_t__ port_rcv_packets; scalar_t__ port_xmit_packets; scalar_t__ port_rcv_data; scalar_t__ port_xmit_data; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_7__ {TYPE_2__ rvp; } ;
struct qib_pportdata {TYPE_3__ ibport_data; } ;
struct TYPE_8__ {scalar_t__ n_vl15_dropped; } ;
struct qib_ibport {scalar_t__ z_port_rcv_packets; scalar_t__ z_port_xmit_packets; scalar_t__ z_port_rcv_data; scalar_t__ z_port_xmit_data; TYPE_4__ rvp; scalar_t__ z_vl15_dropped; scalar_t__ z_excessive_buffer_overrun_errors; scalar_t__ z_local_link_integrity_errors; scalar_t__ z_port_xmit_discards; scalar_t__ z_port_rcv_remphys_errors; scalar_t__ z_port_rcv_errors; scalar_t__ z_link_downed_counter; scalar_t__ z_link_error_recovery_counter; scalar_t__ z_symbol_error_counter; } ;
struct qib_devdata {int psxmitwait_check_rate; int psxmitwait_supported; } ;
struct ib_smp {int dummy; } ;
struct ib_pma_portcounters_cong {int link_error_recovery_counter; int link_downed_counter; int link_overrun_errors; void* vl15_dropped; void* port_xmit_discards; void* port_rcv_remphys_errors; void* port_rcv_errors; void* symbol_error_counter; void* port_rcv_packets; void* port_xmit_packets; void* port_rcv_data; void* port_xmit_data; void* port_xmit_wait; void* port_adr_events; void* port_check_rate; } ;
struct TYPE_5__ {int status; int attr_mod; } ;
struct ib_pma_mad {scalar_t__ data; scalar_t__ reserved; TYPE_1__ mad_hdr; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;
 struct qib_devdata* FUNC_3 (struct qib_pportdata*) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 struct qib_pportdata* FUNC_5 (struct qib_ibport*) ;
 int FUNC_6 (struct qib_pportdata*,struct qib_verbs_counters*) ;
 int FUNC_7 (struct ib_smp*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct qib_ibport* FUNC_10 (struct ib_device*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct qib_pportdata*) ;

__attribute__((used)) static int FUNC_12(struct ib_pma_mad *VAR_3,
         struct ib_device *VAR_4, u8 VAR_5)
{

 struct ib_pma_portcounters_cong *VAR_6 =
  (struct ib_pma_portcounters_cong *)VAR_3->reserved;
 struct qib_verbs_counters VAR_7;
 struct qib_ibport *VAR_8 = FUNC_10(VAR_4, VAR_5);
 struct qib_pportdata *VAR_9 = FUNC_5(VAR_8);
 struct qib_devdata *VAR_10 = FUNC_3(VAR_9);
 u32 VAR_11 = FUNC_0(VAR_3->mad_hdr.attr_mod) & 0xFF;
 u64 VAR_12;
 unsigned long VAR_13;





 if (!VAR_10->psxmitwait_supported)
  VAR_3->mad_hdr.status |= VAR_1;
 if (VAR_11 != VAR_5)
  VAR_3->mad_hdr.status |= VAR_0;

 FUNC_6(VAR_9, &VAR_7);
 FUNC_8(&VAR_9->ibport_data.rvp.lock, VAR_13);
 VAR_12 = FUNC_11(VAR_9);
 FUNC_9(&VAR_9->ibport_data.rvp.lock, VAR_13);


 VAR_7.symbol_error_counter -= VAR_8->z_symbol_error_counter;
 VAR_7.link_error_recovery_counter -=
  VAR_8->z_link_error_recovery_counter;
 VAR_7.link_downed_counter -= VAR_8->z_link_downed_counter;
 VAR_7.port_rcv_errors -= VAR_8->z_port_rcv_errors;
 VAR_7.port_rcv_remphys_errors -=
  VAR_8->z_port_rcv_remphys_errors;
 VAR_7.port_xmit_discards -= VAR_8->z_port_xmit_discards;
 VAR_7.local_link_integrity_errors -=
  VAR_8->z_local_link_integrity_errors;
 VAR_7.excessive_buffer_overrun_errors -=
  VAR_8->z_excessive_buffer_overrun_errors;
 VAR_7.vl15_dropped -= VAR_8->z_vl15_dropped;
 VAR_7.vl15_dropped += VAR_8->rvp.n_vl15_dropped;
 VAR_7.port_xmit_data -= VAR_8->z_port_xmit_data;
 VAR_7.port_rcv_data -= VAR_8->z_port_rcv_data;
 VAR_7.port_xmit_packets -= VAR_8->z_port_xmit_packets;
 VAR_7.port_rcv_packets -= VAR_8->z_port_rcv_packets;

 FUNC_4(VAR_3->reserved, 0, sizeof(VAR_3->reserved));
 FUNC_4(VAR_3->data, 0, sizeof(VAR_3->data));





 VAR_6->port_check_rate =
  FUNC_1((VAR_2 << 13) |
       (VAR_10->psxmitwait_check_rate &
        ~(VAR_2 << 13)));
 VAR_6->port_adr_events = FUNC_2(0);
 VAR_6->port_xmit_wait = FUNC_2(VAR_12);
 VAR_6->port_xmit_data = FUNC_2(VAR_7.port_xmit_data);
 VAR_6->port_rcv_data = FUNC_2(VAR_7.port_rcv_data);
 VAR_6->port_xmit_packets =
  FUNC_2(VAR_7.port_xmit_packets);
 VAR_6->port_rcv_packets =
  FUNC_2(VAR_7.port_rcv_packets);
 if (VAR_7.symbol_error_counter > 0xFFFFUL)
  VAR_6->symbol_error_counter = FUNC_1(0xFFFF);
 else
  VAR_6->symbol_error_counter =
   FUNC_1(
    (u16)VAR_7.symbol_error_counter);
 if (VAR_7.link_error_recovery_counter > 0xFFUL)
  VAR_6->link_error_recovery_counter = 0xFF;
 else
  VAR_6->link_error_recovery_counter =
   (u8)VAR_7.link_error_recovery_counter;
 if (VAR_7.link_downed_counter > 0xFFUL)
  VAR_6->link_downed_counter = 0xFF;
 else
  VAR_6->link_downed_counter =
   (u8)VAR_7.link_downed_counter;
 if (VAR_7.port_rcv_errors > 0xFFFFUL)
  VAR_6->port_rcv_errors = FUNC_1(0xFFFF);
 else
  VAR_6->port_rcv_errors =
   FUNC_1((u16) VAR_7.port_rcv_errors);
 if (VAR_7.port_rcv_remphys_errors > 0xFFFFUL)
  VAR_6->port_rcv_remphys_errors = FUNC_1(0xFFFF);
 else
  VAR_6->port_rcv_remphys_errors =
   FUNC_1(
    (u16)VAR_7.port_rcv_remphys_errors);
 if (VAR_7.port_xmit_discards > 0xFFFFUL)
  VAR_6->port_xmit_discards = FUNC_1(0xFFFF);
 else
  VAR_6->port_xmit_discards =
   FUNC_1((u16)VAR_7.port_xmit_discards);
 if (VAR_7.local_link_integrity_errors > 0xFUL)
  VAR_7.local_link_integrity_errors = 0xFUL;
 if (VAR_7.excessive_buffer_overrun_errors > 0xFUL)
  VAR_7.excessive_buffer_overrun_errors = 0xFUL;
 VAR_6->link_overrun_errors = (VAR_7.local_link_integrity_errors << 4) |
  VAR_7.excessive_buffer_overrun_errors;
 if (VAR_7.vl15_dropped > 0xFFFFUL)
  VAR_6->vl15_dropped = FUNC_1(0xFFFF);
 else
  VAR_6->vl15_dropped = FUNC_1((u16)VAR_7.vl15_dropped);

 return FUNC_7((struct ib_smp *)VAR_3);
}
