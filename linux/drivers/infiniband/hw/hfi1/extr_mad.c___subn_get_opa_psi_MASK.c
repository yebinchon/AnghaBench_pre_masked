
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct TYPE_2__ {int ledenable_offlinereason; int portphysstate_portstate; } ;
struct opa_port_state_info {void* link_width_downgrade_rx_active; void* link_width_downgrade_tx_active; TYPE_1__ port_states; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int is_sm_config_started; int neighbor_normal; int offline_disabled_reason; int link_width_downgrade_rx_active; int link_width_downgrade_tx_active; } ;
struct hfi1_ibport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct hfi1_pportdata*) ;
 int FUNC_4 (struct hfi1_pportdata*) ;
 struct hfi1_pportdata* FUNC_5 (struct hfi1_ibport*) ;
 int FUNC_6 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_7 (int,int) ;
 struct hfi1_ibport* FUNC_8 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct opa_smp *VAR_2, u32 VAR_3, u8 *VAR_4,
         struct ib_device *VAR_5, u8 VAR_6,
         u32 *VAR_7, u32 VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_3);
 u32 VAR_10 = FUNC_1(VAR_3);
 u32 VAR_11;
 struct hfi1_ibport *VAR_12;
 struct hfi1_pportdata *VAR_13;
 struct opa_port_state_info *VAR_14 = (struct opa_port_state_info *)VAR_4;

 if (VAR_9 != 1 || FUNC_7(sizeof(*VAR_14), VAR_8)) {
  VAR_2->status |= VAR_1;
  return FUNC_6((struct ib_mad_hdr *)VAR_2);
 }

 VAR_12 = FUNC_8(VAR_5, VAR_6);
 VAR_13 = FUNC_5(VAR_12);

 VAR_11 = FUNC_3(VAR_13);

 if (VAR_10 && (VAR_11 == VAR_0))
  VAR_13->is_sm_config_started = 1;

 VAR_14->port_states.ledenable_offlinereason = VAR_13->neighbor_normal << 4;
 VAR_14->port_states.ledenable_offlinereason |=
  VAR_13->is_sm_config_started << 5;
 VAR_14->port_states.ledenable_offlinereason |=
  VAR_13->offline_disabled_reason;

 VAR_14->port_states.portphysstate_portstate =
  (FUNC_4(VAR_13) << 4) | (VAR_11 & 0xf);
 VAR_14->link_width_downgrade_tx_active =
  FUNC_2(VAR_13->link_width_downgrade_tx_active);
 VAR_14->link_width_downgrade_rx_active =
  FUNC_2(VAR_13->link_width_downgrade_rx_active);
 if (VAR_7)
  *VAR_7 += sizeof(struct opa_port_state_info);

 return FUNC_6((struct ib_mad_hdr *)VAR_2);
}
