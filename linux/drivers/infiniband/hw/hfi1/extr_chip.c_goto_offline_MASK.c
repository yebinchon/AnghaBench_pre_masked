
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ reset_needed; scalar_t__ limiting_active; } ;
struct hfi1_pportdata {int host_link_state; scalar_t__ offline_disabled_reason; scalar_t__ port_type; scalar_t__ current_egress_rate; scalar_t__ link_width_downgrade_rx_active; scalar_t__ link_width_downgrade_tx_active; scalar_t__ link_width_active; TYPE_1__ qsfp_info; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_3 ;
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
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct hfi1_devdata*,int ,int ) ;
 int FUNC_2 (struct hfi1_pportdata*) ;
 int FUNC_3 (struct hfi1_devdata*,char*,...) ;
 int FUNC_4 (struct hfi1_pportdata*) ;
 int FUNC_5 (struct hfi1_devdata*,int ) ;
 scalar_t__ FUNC_6 (struct hfi1_pportdata*) ;
 int FUNC_7 (struct hfi1_devdata*) ;
 int FUNC_8 (struct hfi1_devdata*,int ) ;
 int FUNC_9 (struct hfi1_devdata*) ;
 int FUNC_10 (struct hfi1_devdata*,int) ;
 int FUNC_11 (struct hfi1_pportdata*,int ) ;
 int FUNC_12 (struct hfi1_devdata*) ;
 int FUNC_13 (struct hfi1_pportdata*,int ) ;
 int FUNC_14 (struct hfi1_devdata*,int) ;
 int FUNC_15 (struct hfi1_pportdata*,int ,int) ;
 int FUNC_16 (struct hfi1_pportdata*,int) ;
 int FUNC_17 (struct hfi1_pportdata*,int,int) ;
 int FUNC_18 (struct hfi1_devdata*,int ,unsigned long long) ;

__attribute__((used)) static int FUNC_19(struct hfi1_pportdata *VAR_17, u8 VAR_18)
{
 struct hfi1_devdata *VAR_19 = VAR_17->dd;
 u32 VAR_20;
 int VAR_21;
 int VAR_22;

 FUNC_12(VAR_19);

 VAR_20 = VAR_17->host_link_state;
 VAR_17->host_link_state = VAR_5;


 VAR_22 = FUNC_10(VAR_19, (VAR_18 << 8) | VAR_13);

 if (VAR_22 != VAR_2) {
  FUNC_3(VAR_19,
      "Failed to transition to Offline link state, return %d\n",
      VAR_22);
  return -VAR_1;
 }
 if (VAR_17->offline_disabled_reason ==
   FUNC_0(VAR_11))
  VAR_17->offline_disabled_reason =
  FUNC_0(VAR_12);

 VAR_21 = FUNC_16(VAR_17, 10000);
 if (VAR_21 < 0)
  return VAR_21;


 if (VAR_17->port_type == VAR_15 &&
     VAR_17->qsfp_info.limiting_active &&
     FUNC_6(VAR_17)) {
  int VAR_23;

  VAR_23 = FUNC_1(VAR_19, FUNC_7(VAR_19), VAR_16);
  if (VAR_23 == 0) {
   FUNC_11(VAR_17, 0);
   FUNC_8(VAR_19, FUNC_7(VAR_19));
  } else {

   FUNC_3(VAR_19,
       "Unable to acquire lock to turn off QSFP TX\n");
  }
 }





 if (VAR_21 != VAR_14) {
  VAR_22 = FUNC_17(VAR_17, VAR_13, 30000);
  if (VAR_22 < 0)
   return VAR_22;
 }





 FUNC_9(VAR_19);
 FUNC_18(VAR_19, VAR_0, ~0ull);


 VAR_22 = FUNC_15(VAR_17, VAR_10, 1000);
 if (VAR_22)
  FUNC_4(VAR_17);

 VAR_17->host_link_state = VAR_7;
 FUNC_13(VAR_17, VAR_10);
 VAR_22 = FUNC_14(VAR_19, 7000);
 if (VAR_22) {
  FUNC_3(VAR_19,
      "After going offline, timed out waiting for the 8051 to become ready to accept host requests\n");

  VAR_17->host_link_state = VAR_3;
  return VAR_22;
 }







 VAR_17->host_link_state = VAR_3;
 if (VAR_20 & VAR_8) {

  FUNC_5(VAR_19, 0);
 } else if (VAR_20
   & (VAR_4 | VAR_9 | VAR_6)) {

  FUNC_2(VAR_17);


  VAR_17->qsfp_info.reset_needed = 0;
 }


 VAR_17->link_width_active = 0;
 VAR_17->link_width_downgrade_tx_active = 0;
 VAR_17->link_width_downgrade_rx_active = 0;
 VAR_17->current_egress_rate = 0;
 return 0;
}
