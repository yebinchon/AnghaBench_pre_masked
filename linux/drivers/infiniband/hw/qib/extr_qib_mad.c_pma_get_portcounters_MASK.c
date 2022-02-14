
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct qib_verbs_counters {int symbol_error_counter; int link_error_recovery_counter; int link_downed_counter; int port_rcv_errors; int port_rcv_remphys_errors; int port_xmit_discards; int port_xmit_data; int port_rcv_data; int port_xmit_packets; int port_rcv_packets; int local_link_integrity_errors; int excessive_buffer_overrun_errors; int vl15_dropped; } ;
struct qib_pportdata {int dummy; } ;
struct TYPE_3__ {scalar_t__ n_vl15_dropped; } ;
struct qib_ibport {TYPE_1__ rvp; scalar_t__ z_vl15_dropped; scalar_t__ z_excessive_buffer_overrun_errors; scalar_t__ z_local_link_integrity_errors; scalar_t__ z_port_rcv_packets; scalar_t__ z_port_xmit_packets; scalar_t__ z_port_rcv_data; scalar_t__ z_port_xmit_data; scalar_t__ z_port_xmit_discards; scalar_t__ z_port_rcv_remphys_errors; scalar_t__ z_port_rcv_errors; scalar_t__ z_link_downed_counter; scalar_t__ z_link_error_recovery_counter; scalar_t__ z_symbol_error_counter; } ;
struct ib_smp {int dummy; } ;
struct ib_pma_portcounters {scalar_t__ port_select; int link_error_recovery_counter; int link_downed_counter; int link_overrun_errors; void* port_rcv_packets; void* port_xmit_packets; void* port_rcv_data; void* port_xmit_data; void* vl15_dropped; void* port_xmit_discards; void* port_rcv_remphys_errors; void* port_rcv_errors; void* symbol_error_counter; } ;
struct TYPE_4__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_2__ mad_hdr; scalar_t__ data; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 struct qib_pportdata* FUNC_3 (struct qib_ibport*) ;
 int FUNC_4 (struct qib_pportdata*,struct qib_verbs_counters*) ;
 int FUNC_5 (struct ib_smp*) ;
 struct qib_ibport* FUNC_6 (struct ib_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct ib_pma_mad *VAR_1,
    struct ib_device *VAR_2, u8 VAR_3)
{
 struct ib_pma_portcounters *VAR_4 = (struct ib_pma_portcounters *)
  VAR_1->data;
 struct qib_ibport *VAR_5 = FUNC_6(VAR_2, VAR_3);
 struct qib_pportdata *VAR_6 = FUNC_3(VAR_5);
 struct qib_verbs_counters VAR_7;
 u8 VAR_8 = VAR_4->port_select;

 FUNC_4(VAR_6, &VAR_7);


 VAR_7.symbol_error_counter -= VAR_5->z_symbol_error_counter;
 VAR_7.link_error_recovery_counter -=
  VAR_5->z_link_error_recovery_counter;
 VAR_7.link_downed_counter -= VAR_5->z_link_downed_counter;
 VAR_7.port_rcv_errors -= VAR_5->z_port_rcv_errors;
 VAR_7.port_rcv_remphys_errors -= VAR_5->z_port_rcv_remphys_errors;
 VAR_7.port_xmit_discards -= VAR_5->z_port_xmit_discards;
 VAR_7.port_xmit_data -= VAR_5->z_port_xmit_data;
 VAR_7.port_rcv_data -= VAR_5->z_port_rcv_data;
 VAR_7.port_xmit_packets -= VAR_5->z_port_xmit_packets;
 VAR_7.port_rcv_packets -= VAR_5->z_port_rcv_packets;
 VAR_7.local_link_integrity_errors -=
  VAR_5->z_local_link_integrity_errors;
 VAR_7.excessive_buffer_overrun_errors -=
  VAR_5->z_excessive_buffer_overrun_errors;
 VAR_7.vl15_dropped -= VAR_5->z_vl15_dropped;
 VAR_7.vl15_dropped += VAR_5->rvp.n_vl15_dropped;

 FUNC_2(VAR_1->data, 0, sizeof(VAR_1->data));

 VAR_4->port_select = VAR_8;
 if (VAR_1->mad_hdr.attr_mod != 0 || VAR_8 != VAR_3)
  VAR_1->mad_hdr.status |= VAR_0;

 if (VAR_7.symbol_error_counter > 0xFFFFUL)
  VAR_4->symbol_error_counter = FUNC_0(0xFFFF);
 else
  VAR_4->symbol_error_counter =
   FUNC_0((u16)VAR_7.symbol_error_counter);
 if (VAR_7.link_error_recovery_counter > 0xFFUL)
  VAR_4->link_error_recovery_counter = 0xFF;
 else
  VAR_4->link_error_recovery_counter =
   (u8)VAR_7.link_error_recovery_counter;
 if (VAR_7.link_downed_counter > 0xFFUL)
  VAR_4->link_downed_counter = 0xFF;
 else
  VAR_4->link_downed_counter = (u8)VAR_7.link_downed_counter;
 if (VAR_7.port_rcv_errors > 0xFFFFUL)
  VAR_4->port_rcv_errors = FUNC_0(0xFFFF);
 else
  VAR_4->port_rcv_errors =
   FUNC_0((u16) VAR_7.port_rcv_errors);
 if (VAR_7.port_rcv_remphys_errors > 0xFFFFUL)
  VAR_4->port_rcv_remphys_errors = FUNC_0(0xFFFF);
 else
  VAR_4->port_rcv_remphys_errors =
   FUNC_0((u16)VAR_7.port_rcv_remphys_errors);
 if (VAR_7.port_xmit_discards > 0xFFFFUL)
  VAR_4->port_xmit_discards = FUNC_0(0xFFFF);
 else
  VAR_4->port_xmit_discards =
   FUNC_0((u16)VAR_7.port_xmit_discards);
 if (VAR_7.local_link_integrity_errors > 0xFUL)
  VAR_7.local_link_integrity_errors = 0xFUL;
 if (VAR_7.excessive_buffer_overrun_errors > 0xFUL)
  VAR_7.excessive_buffer_overrun_errors = 0xFUL;
 VAR_4->link_overrun_errors = (VAR_7.local_link_integrity_errors << 4) |
  VAR_7.excessive_buffer_overrun_errors;
 if (VAR_7.vl15_dropped > 0xFFFFUL)
  VAR_4->vl15_dropped = FUNC_0(0xFFFF);
 else
  VAR_4->vl15_dropped = FUNC_0((u16)VAR_7.vl15_dropped);
 if (VAR_7.port_xmit_data > 0xFFFFFFFFUL)
  VAR_4->port_xmit_data = FUNC_1(0xFFFFFFFF);
 else
  VAR_4->port_xmit_data = FUNC_1((u32)VAR_7.port_xmit_data);
 if (VAR_7.port_rcv_data > 0xFFFFFFFFUL)
  VAR_4->port_rcv_data = FUNC_1(0xFFFFFFFF);
 else
  VAR_4->port_rcv_data = FUNC_1((u32)VAR_7.port_rcv_data);
 if (VAR_7.port_xmit_packets > 0xFFFFFFFFUL)
  VAR_4->port_xmit_packets = FUNC_1(0xFFFFFFFF);
 else
  VAR_4->port_xmit_packets =
   FUNC_1((u32)VAR_7.port_xmit_packets);
 if (VAR_7.port_rcv_packets > 0xFFFFFFFFUL)
  VAR_4->port_rcv_packets = FUNC_1(0xFFFFFFFF);
 else
  VAR_4->port_rcv_packets =
   FUNC_1((u32) VAR_7.port_rcv_packets);

 return FUNC_5((struct ib_smp *) VAR_1);
}
