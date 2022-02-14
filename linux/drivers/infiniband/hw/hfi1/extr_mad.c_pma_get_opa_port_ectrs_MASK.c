
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_ibport {int dummy; } ;
struct hfi1_devdata {int dummy; } ;
struct _port_ectrs {void* excessive_buffer_overruns; void* local_link_integrity_errors; void* port_rcv_constraint_errors; void* port_xmit_constraint_errors; void* port_xmit_discards; scalar_t__ port_rcv_switch_relay_errors; void* port_rcv_remote_physical_errors; void* port_rcv_errors; void* link_downed; void* link_error_recovery; } ;


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
 scalar_t__ VAR_11 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 struct hfi1_devdata* FUNC_2 (struct ib_device*) ;
 struct hfi1_pportdata* FUNC_3 (struct hfi1_ibport*) ;
 scalar_t__ FUNC_4 (struct hfi1_devdata*,int ,int ) ;
 scalar_t__ FUNC_5 (struct hfi1_pportdata*,int ,int ) ;
 struct hfi1_ibport* FUNC_6 (struct ib_device*,int ) ;

__attribute__((used)) static void FUNC_7(struct ib_device *VAR_12,
       struct _port_ectrs *VAR_13, u8 VAR_14)
{
 u64 VAR_15, VAR_16;
 struct hfi1_devdata *VAR_17 = FUNC_2(VAR_12);
 struct hfi1_ibport *VAR_18 = FUNC_6(VAR_12, VAR_14);
 struct hfi1_pportdata *VAR_19 = FUNC_3(VAR_18);

 VAR_15 = FUNC_4(VAR_17, VAR_5, VAR_0);
 VAR_16 = VAR_15 + FUNC_4(VAR_17, VAR_2,
     VAR_0);
 if (VAR_16 > (u32)VAR_11 || VAR_16 < VAR_15) {

  VAR_13->link_error_recovery = FUNC_0(~0);
 } else {
  VAR_13->link_error_recovery = FUNC_0(VAR_16);
 }

 VAR_13->link_downed = FUNC_0(FUNC_5(VAR_19, VAR_7,
      VAR_0));
 VAR_13->port_rcv_errors =
  FUNC_1(FUNC_4(VAR_17, VAR_1, VAR_0));
 VAR_13->port_rcv_remote_physical_errors =
  FUNC_1(FUNC_4(VAR_17, VAR_3,
       VAR_0));
 VAR_13->port_rcv_switch_relay_errors = 0;
 VAR_13->port_xmit_discards =
  FUNC_1(FUNC_5(VAR_19, VAR_10,
        VAR_0));
 VAR_13->port_xmit_constraint_errors =
  FUNC_1(FUNC_5(VAR_19, VAR_9,
        VAR_0));
 VAR_13->port_rcv_constraint_errors =
  FUNC_1(FUNC_5(VAR_19, VAR_8,
        VAR_0));
 VAR_13->local_link_integrity_errors =
  FUNC_1(FUNC_4(VAR_17, VAR_4,
       VAR_0));
 VAR_13->excessive_buffer_overruns =
  FUNC_1(FUNC_4(VAR_17, VAR_6, VAR_0));
}
