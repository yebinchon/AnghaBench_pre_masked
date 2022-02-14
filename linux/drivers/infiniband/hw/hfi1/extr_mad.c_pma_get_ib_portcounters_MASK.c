
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ib_pma_portcounters {void* port_select; int link_error_recovery_counter; int link_downed_counter; int port_xmit_constraint_errors; int port_rcv_constraint_errors; scalar_t__ vl15_dropped; void* link_overrun_errors; void* port_xmit_discards; void* port_rcv_switch_relay_errors; void* port_rcv_remphys_errors; void* port_rcv_errors; scalar_t__ symbol_error_counter; } ;
struct TYPE_2__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct _port_ectrs {int excessive_buffer_overruns; int local_link_integrity_errors; int port_rcv_constraint_errors; int port_xmit_constraint_errors; int port_xmit_discards; int port_rcv_switch_relay_errors; int port_rcv_remote_physical_errors; int port_rcv_errors; int link_downed; int link_error_recovery; } ;
typedef int rsp ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct _port_ectrs*,int ,int) ;
 int FUNC_4 (struct ib_device*,struct _port_ectrs*,void*) ;
 int FUNC_5 (struct ib_mad_hdr*) ;

__attribute__((used)) static int FUNC_6(struct ib_pma_mad *VAR_1,
       struct ib_device *VAR_2, u8 VAR_3)
{
 struct ib_pma_portcounters *VAR_4 = (struct ib_pma_portcounters *)
  VAR_1->data;
 struct _port_ectrs VAR_5;
 u64 VAR_6;
 u64 VAR_7;
 u32 VAR_8;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 FUNC_4(VAR_2, &VAR_5, VAR_3);

 if (VAR_1->mad_hdr.attr_mod != 0 || VAR_4->port_select != VAR_3) {
  VAR_1->mad_hdr.status |= VAR_0;
  goto bail;
 }

 VAR_4->symbol_error_counter = 0;

 VAR_8 = FUNC_0(VAR_5.link_error_recovery);
 if (VAR_8 > 0xFFUL)
  VAR_4->link_error_recovery_counter = 0xFF;
 else
  VAR_4->link_error_recovery_counter = (u8)VAR_8;

 VAR_8 = FUNC_0(VAR_5.link_downed);
 if (VAR_8 > 0xFFUL)
  VAR_4->link_downed_counter = 0xFF;
 else
  VAR_4->link_downed_counter = (u8)VAR_8;

 VAR_7 = FUNC_1(VAR_5.port_rcv_errors);
 if (VAR_7 > 0xFFFFUL)
  VAR_4->port_rcv_errors = FUNC_2(0xFFFF);
 else
  VAR_4->port_rcv_errors = FUNC_2((u16)VAR_7);

 VAR_7 = FUNC_1(VAR_5.port_rcv_remote_physical_errors);
 if (VAR_7 > 0xFFFFUL)
  VAR_4->port_rcv_remphys_errors = FUNC_2(0xFFFF);
 else
  VAR_4->port_rcv_remphys_errors = FUNC_2((u16)VAR_7);

 VAR_7 = FUNC_1(VAR_5.port_rcv_switch_relay_errors);
 VAR_4->port_rcv_switch_relay_errors = FUNC_2((u16)VAR_7);

 VAR_7 = FUNC_1(VAR_5.port_xmit_discards);
 if (VAR_7 > 0xFFFFUL)
  VAR_4->port_xmit_discards = FUNC_2(0xFFFF);
 else
  VAR_4->port_xmit_discards = FUNC_2((u16)VAR_7);

 VAR_7 = FUNC_1(VAR_5.port_xmit_constraint_errors);
 if (VAR_7 > 0xFFUL)
  VAR_4->port_xmit_constraint_errors = 0xFF;
 else
  VAR_4->port_xmit_constraint_errors = (u8)VAR_7;

 VAR_7 = FUNC_1(VAR_5.port_rcv_constraint_errors);
 if (VAR_7 > 0xFFUL)
  VAR_4->port_rcv_constraint_errors = 0xFFUL;
 else
  VAR_4->port_rcv_constraint_errors = (u8)VAR_7;


 VAR_7 = FUNC_1(VAR_5.local_link_integrity_errors);
 if (VAR_7 > 0xFUL)
  VAR_7 = 0xFUL;

 VAR_6 = VAR_7 << 4;

 VAR_7 = FUNC_1(VAR_5.excessive_buffer_overruns);
 if (VAR_7 > 0xFUL)
  VAR_7 = 0xFUL;
 VAR_6 |= VAR_7;

 VAR_4->link_overrun_errors = (u8)VAR_6;

 VAR_4->vl15_dropped = 0;

bail:
 return FUNC_5((struct ib_mad_hdr *)VAR_1);
}
