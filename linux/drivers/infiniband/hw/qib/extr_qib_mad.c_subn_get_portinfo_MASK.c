
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ mkey; int mkeyprot; int port_cap_flags; int sm_sl; int subnet_timeout; int qkey_violations; int pkey_violations; int mkey_violations; int vl_high_limit; int mkey_lease_period; scalar_t__ sm_lid; int gid_prefix; } ;
struct qib_ibport {TYPE_1__ rvp; } ;
struct qib_pportdata {int link_speed_supported; int lmc; int link_speed_active; int link_speed_enabled; int ibmtu; int vls_supported; int lastibcstat; int link_width_active; int link_width_supported; int link_width_enabled; int lid; struct qib_ibport ibport_data; } ;
struct qib_devdata {int (* f_iblink_state ) (int ) ;int (* f_ibphys_portstate ) (int ) ;int (* f_get_ib_cfg ) (struct qib_pportdata*,int ) ;struct qib_pportdata* pport; } ;
struct ib_smp {scalar_t__ method; scalar_t__ mkey; scalar_t__ data; int status; int attr_mod; } ;
struct ib_port_info {scalar_t__ mkey; int local_port_num; int linkspeed_portstate; int portphysstate_linkdown; int mkeyprot_resv_lmc; int linkspeedactive_enabled; int neighbormtu_mastersmsl; int vlcap_inittype; int vl_arb_high_cap; int vl_arb_low_cap; int operationalvl_pei_peo_fpi_fpo; int resv_resptimevalue; int localphyerrors_overrunerrors; int* link_roundtrip_latency; int clientrereg_resv_subnetto; int guid_cap; void* qkey_violations; void* pkey_violations; void* mkey_violations; void* inittypereply_mtucap; int vl_high_limit; int link_width_active; int link_width_supported; int link_width_enabled; void* mkey_lease_period; int cap_mask; void* sm_lid; void* lid; int gid_prefix; } ;
struct ib_device {int phys_port_cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qib_ibport*,struct ib_smp*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 struct qib_devdata* FUNC_4 (struct ib_device*) ;
 scalar_t__ FUNC_5 (struct qib_pportdata*) ;
 int FUNC_6 (struct qib_pportdata*) ;
 int FUNC_7 (struct qib_pportdata*) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 void* VAR_14 ;
 int FUNC_9 (struct ib_smp*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct qib_pportdata*,int ) ;
 int FUNC_13 (struct qib_pportdata*,int ) ;
 int FUNC_14 (struct qib_pportdata*,int ) ;
 int FUNC_15 (struct qib_pportdata*,int ) ;
 struct qib_ibport* FUNC_16 (struct ib_device*,int) ;

__attribute__((used)) static int FUNC_17(struct ib_smp *VAR_15, struct ib_device *VAR_16,
        u8 VAR_17)
{
 struct qib_devdata *VAR_18;
 struct qib_pportdata *VAR_19;
 struct qib_ibport *VAR_20;
 struct ib_port_info *VAR_21 = (struct ib_port_info *)VAR_15->data;
 u8 VAR_22;
 int VAR_23;
 u32 VAR_24;
 u32 VAR_25 = FUNC_0(VAR_15->attr_mod);

 if (VAR_25 == 0)
  VAR_25 = VAR_17;
 else {
  if (VAR_25 > VAR_16->phys_port_cnt) {
   VAR_15->status |= VAR_8;
   VAR_23 = FUNC_9(VAR_15);
   goto bail;
  }
  if (VAR_25 != VAR_17) {
   VAR_20 = FUNC_16(VAR_16, VAR_25);
   VAR_23 = FUNC_1(VAR_20, VAR_15, 0);
   if (VAR_23) {
    VAR_23 = VAR_0;
    goto bail;
   }
  }
 }

 VAR_18 = FUNC_4(VAR_16);

 VAR_19 = VAR_18->pport + (VAR_25 - 1);
 VAR_20 = &VAR_19->ibport_data;


 FUNC_8(VAR_15->data, 0, sizeof(VAR_15->data));


 if (!(VAR_15->method == VAR_1 &&
       VAR_20->rvp.mkey != VAR_15->mkey &&
       VAR_20->rvp.mkeyprot == 1))
  VAR_21->mkey = VAR_20->rvp.mkey;
 VAR_21->gid_prefix = VAR_20->rvp.gid_prefix;
 VAR_21->lid = FUNC_2(VAR_19->lid);
 VAR_21->sm_lid = FUNC_2((u16)VAR_20->rvp.sm_lid);
 VAR_21->cap_mask = FUNC_3(VAR_20->rvp.port_cap_flags);

 VAR_21->mkey_lease_period = FUNC_2(VAR_20->rvp.mkey_lease_period);
 VAR_21->local_port_num = VAR_17;
 VAR_21->link_width_enabled = VAR_19->link_width_enabled;
 VAR_21->link_width_supported = VAR_19->link_width_supported;
 VAR_21->link_width_active = VAR_19->link_width_active;
 VAR_24 = VAR_18->f_iblink_state(VAR_19->lastibcstat);
 VAR_21->linkspeed_portstate = VAR_19->link_speed_supported << 4 | VAR_24;

 VAR_21->portphysstate_linkdown =
  (VAR_18->f_ibphys_portstate(VAR_19->lastibcstat) << 4) |
  (FUNC_5(VAR_19) ? 1 : 2);
 VAR_21->mkeyprot_resv_lmc = (VAR_20->rvp.mkeyprot << 6) | VAR_19->lmc;
 VAR_21->linkspeedactive_enabled = (VAR_19->link_speed_active << 4) |
  VAR_19->link_speed_enabled;
 switch (VAR_19->ibmtu) {
 default:
 case 4096:
  VAR_22 = VAR_5;
  break;
 case 2048:
  VAR_22 = VAR_3;
  break;
 case 1024:
  VAR_22 = VAR_2;
  break;
 case 512:
  VAR_22 = VAR_6;
  break;
 case 256:
  VAR_22 = VAR_4;
  break;
 }
 VAR_21->neighbormtu_mastersmsl = (VAR_22 << 4) | VAR_20->rvp.sm_sl;
 VAR_21->vlcap_inittype = VAR_19->vls_supported << 4;
 VAR_21->vl_high_limit = VAR_20->rvp.vl_high_limit;
 VAR_21->vl_arb_high_cap =
  VAR_18->f_get_ib_cfg(VAR_19, VAR_12);
 VAR_21->vl_arb_low_cap =
  VAR_18->f_get_ib_cfg(VAR_19, VAR_13);

 VAR_21->inittypereply_mtucap = VAR_14 ? VAR_14 : VAR_5;


 VAR_21->operationalvl_pei_peo_fpi_fpo =
  VAR_18->f_get_ib_cfg(VAR_19, VAR_11) << 4;
 VAR_21->mkey_violations = FUNC_2(VAR_20->rvp.mkey_violations);

 VAR_21->pkey_violations = FUNC_2(VAR_20->rvp.pkey_violations);
 VAR_21->qkey_violations = FUNC_2(VAR_20->rvp.qkey_violations);

 VAR_21->guid_cap = VAR_9;
 VAR_21->clientrereg_resv_subnetto = VAR_20->rvp.subnet_timeout;

 VAR_21->resv_resptimevalue = 3;
 VAR_21->localphyerrors_overrunerrors =
  (FUNC_7(VAR_19) << 4) |
  FUNC_6(VAR_19);

 if (VAR_20->rvp.port_cap_flags & VAR_7) {
  u32 VAR_26;

  VAR_26 = VAR_18->f_get_ib_cfg(VAR_19, VAR_10);
  VAR_21->link_roundtrip_latency[0] = VAR_26 >> 16;
  VAR_21->link_roundtrip_latency[1] = VAR_26 >> 8;
  VAR_21->link_roundtrip_latency[2] = VAR_26;
 }

 VAR_23 = FUNC_9(VAR_15);

bail:
 return VAR_23;
}
