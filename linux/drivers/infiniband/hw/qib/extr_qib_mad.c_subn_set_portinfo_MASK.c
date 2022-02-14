
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {scalar_t__ sm_lid; int sm_sl; int mkeyprot; int vl_high_limit; int subnet_timeout; scalar_t__ qkey_violations; scalar_t__ pkey_violations; scalar_t__ mkey_violations; int lock; TYPE_1__* sm_ah; scalar_t__ mkey_lease_period; int gid_prefix; int mkey; } ;
struct qib_ibport {TYPE_3__ rvp; } ;
struct qib_pportdata {scalar_t__ lid; int lmc; int link_width_supported; int link_width_enabled; int link_speed_supported; int link_speed_enabled; int vls_supported; int lflags_lock; int lflags; struct qib_ibport ibport_data; } ;
struct qib_devdata {int (* f_set_ib_cfg ) (struct qib_pportdata*,int ,int) ;struct qib_pportdata* pport; } ;
struct ib_smp {int status; int hop_cnt; int attr_mod; scalar_t__ data; } ;
struct ib_port_info {int clientrereg_resv_subnetto; int mkeyprot_resv_lmc; int neighbormtu_mastersmsl; int link_width_enabled; int linkspeedactive_enabled; int portphysstate_linkdown; int vl_high_limit; int operationalvl_pei_peo_fpi_fpo; scalar_t__ mkey_violations; scalar_t__ pkey_violations; scalar_t__ qkey_violations; int localphyerrors_overrunerrors; int linkspeed_portstate; int sm_lid; int lid; int mkey_lease_period; int gid_prefix; int mkey; } ;
struct TYPE_5__ {int port_num; } ;
struct ib_event {int event; TYPE_2__ element; struct ib_device* device; } ;
struct ib_device {int phys_port_cnt; } ;
struct TYPE_4__ {int attr; } ;


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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct qib_devdata* FUNC_2 (struct ib_device*) ;
 int FUNC_3 (struct ib_event*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct qib_pportdata*,scalar_t__,int) ;
 int FUNC_6 (struct qib_pportdata*,scalar_t__) ;
 int FUNC_7 (struct qib_pportdata*,int) ;
 int FUNC_8 (struct qib_pportdata*,int ) ;
 int FUNC_9 (struct qib_pportdata*,int ,int) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (struct qib_pportdata*,int) ;
 int FUNC_13 (struct qib_pportdata*,int) ;
 scalar_t__ FUNC_14 (struct qib_pportdata*,int) ;
 scalar_t__ FUNC_15 (struct qib_pportdata*,int) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (struct qib_pportdata*,int ,int) ;
 int FUNC_19 (struct qib_pportdata*,int ,int) ;
 int FUNC_20 (struct qib_pportdata*,int ,int) ;
 int FUNC_21 (struct qib_pportdata*,int ,int) ;
 int FUNC_22 (struct ib_smp*,struct ib_device*,int) ;

__attribute__((used)) static int FUNC_23(struct ib_smp *VAR_21, struct ib_device *VAR_22,
        u8 VAR_23)
{
 struct ib_port_info *VAR_24 = (struct ib_port_info *)VAR_21->data;
 struct ib_event VAR_25;
 struct qib_devdata *VAR_26;
 struct qib_pportdata *VAR_27;
 struct qib_ibport *VAR_28;
 u8 VAR_29 = (VAR_24->clientrereg_resv_subnetto & 0x80);
 unsigned long VAR_30;
 u16 VAR_31, VAR_32;
 u8 VAR_33;
 u8 VAR_34;
 u8 VAR_35;
 u8 VAR_36;
 u8 VAR_37;
 u16 VAR_38;
 int VAR_39, VAR_40, VAR_41;
 u32 VAR_42 = FUNC_1(VAR_21->attr_mod);

 if (VAR_42 == 0)
  VAR_42 = VAR_23;
 else {
  if (VAR_42 > VAR_22->phys_port_cnt)
   goto err;

  if (VAR_42 != VAR_23)
   goto get_only;
 }

 VAR_26 = FUNC_2(VAR_22);

 VAR_27 = VAR_26->pport + (VAR_42 - 1);
 VAR_28 = &VAR_27->ibport_data;
 VAR_25.device = VAR_22;
 VAR_25.element.port_num = VAR_23;

 VAR_28->rvp.mkey = VAR_24->mkey;
 VAR_28->rvp.gid_prefix = VAR_24->gid_prefix;
 VAR_28->rvp.mkey_lease_period = FUNC_0(VAR_24->mkey_lease_period);

 VAR_31 = FUNC_0(VAR_24->lid);

 if (VAR_31 == 0 || VAR_31 >= FUNC_0(VAR_7))
  VAR_21->status |= VAR_8;
 else if (VAR_27->lid != VAR_31 || VAR_27->lmc != (VAR_24->mkeyprot_resv_lmc & 7)) {
  if (VAR_27->lid != VAR_31)
   FUNC_8(VAR_27, VAR_19);
  if (VAR_27->lmc != (VAR_24->mkeyprot_resv_lmc & 7))
   FUNC_8(VAR_27, VAR_20);
  FUNC_5(VAR_27, VAR_31, VAR_24->mkeyprot_resv_lmc & 7);
  VAR_25.event = VAR_1;
  FUNC_3(&VAR_25);
 }

 VAR_32 = FUNC_0(VAR_24->sm_lid);
 VAR_37 = VAR_24->neighbormtu_mastersmsl & 0xF;

 if (VAR_32 == 0 || VAR_32 >= FUNC_0(VAR_7))
  VAR_21->status |= VAR_8;
 else if (VAR_32 != VAR_28->rvp.sm_lid || VAR_37 != VAR_28->rvp.sm_sl) {
  FUNC_16(&VAR_28->rvp.lock, VAR_30);
  if (VAR_28->rvp.sm_ah) {
   if (VAR_32 != VAR_28->rvp.sm_lid)
    FUNC_10(&VAR_28->rvp.sm_ah->attr,
       VAR_32);
   if (VAR_37 != VAR_28->rvp.sm_sl)
    FUNC_11(&VAR_28->rvp.sm_ah->attr, VAR_37);
  }
  FUNC_17(&VAR_28->rvp.lock, VAR_30);
  if (VAR_32 != VAR_28->rvp.sm_lid)
   VAR_28->rvp.sm_lid = VAR_32;
  if (VAR_37 != VAR_28->rvp.sm_sl)
   VAR_28->rvp.sm_sl = VAR_37;
  VAR_25.event = VAR_2;
  FUNC_3(&VAR_25);
 }


 VAR_33 = VAR_24->link_width_enabled;
 if (VAR_33) {
  if (VAR_33 == 0xFF)
   FUNC_13(VAR_27, VAR_27->link_width_supported);
  else if (VAR_33 >= 16 || (VAR_33 & ~VAR_27->link_width_supported))
   VAR_21->status |= VAR_8;
  else if (VAR_33 != VAR_27->link_width_enabled)
   FUNC_13(VAR_27, VAR_33);
 }

 VAR_34 = VAR_24->linkspeedactive_enabled & 0xF;
 if (VAR_34) {





  if (VAR_34 == 15)
   FUNC_12(VAR_27,
            VAR_27->link_speed_supported);
  else if (VAR_34 >= 8 || (VAR_34 & ~VAR_27->link_speed_supported))
   VAR_21->status |= VAR_8;
  else if (VAR_34 != VAR_27->link_speed_enabled)
   FUNC_12(VAR_27, VAR_34);
 }


 switch (VAR_24->portphysstate_linkdown & 0xF) {
 case 0:
  break;
 case 1:
  (void) VAR_26->f_set_ib_cfg(VAR_27, VAR_10,
     VAR_4);
  break;
 case 2:
  (void) VAR_26->f_set_ib_cfg(VAR_27, VAR_10,
     VAR_3);
  break;
 default:
  VAR_21->status |= VAR_8;
 }

 VAR_28->rvp.mkeyprot = VAR_24->mkeyprot_resv_lmc >> 6;
 VAR_28->rvp.vl_high_limit = VAR_24->vl_high_limit;
 (void) VAR_26->f_set_ib_cfg(VAR_27, VAR_12,
        VAR_28->rvp.vl_high_limit);

 VAR_41 = FUNC_4((VAR_24->neighbormtu_mastersmsl >> 4) & 0xF);
 if (VAR_41 == -1)
  VAR_21->status |= VAR_8;
 else
  FUNC_7(VAR_27, VAR_41);


 VAR_36 = (VAR_24->operationalvl_pei_peo_fpi_fpo >> 4) & 0xF;
 if (VAR_36) {
  if (VAR_36 > VAR_27->vls_supported)
   VAR_21->status |= VAR_8;
  else
   (void) VAR_26->f_set_ib_cfg(VAR_27, VAR_11, VAR_36);
 }

 if (VAR_24->mkey_violations == 0)
  VAR_28->rvp.mkey_violations = 0;

 if (VAR_24->pkey_violations == 0)
  VAR_28->rvp.pkey_violations = 0;

 if (VAR_24->qkey_violations == 0)
  VAR_28->rvp.qkey_violations = 0;

 VAR_40 = VAR_24->localphyerrors_overrunerrors;
 if (FUNC_15(VAR_27, (VAR_40 >> 4) & 0xF))
  VAR_21->status |= VAR_8;

 if (FUNC_14(VAR_27, (VAR_40 & 0xF)))
  VAR_21->status |= VAR_8;

 VAR_28->rvp.subnet_timeout = VAR_24->clientrereg_resv_subnetto & 0x1F;







 VAR_35 = VAR_24->linkspeed_portstate & 0xF;
 VAR_38 = (VAR_24->portphysstate_linkdown >> 4) & 0xF;
 if (VAR_38 && !(VAR_35 == 129 || VAR_35 == 128))
  VAR_21->status |= VAR_8;





 switch (VAR_35) {
 case 128:
  if (VAR_38 == 0)
   break;

 case 129:
  if (VAR_38 == 0)
   VAR_38 = VAR_17;
  else if (VAR_38 == 1)
   VAR_38 = VAR_18;
  else if (VAR_38 == 2)
   VAR_38 = VAR_15;
  else if (VAR_38 == 3)
   VAR_38 = VAR_16;
  else {
   VAR_21->status |= VAR_8;
   break;
  }
  FUNC_16(&VAR_27->lflags_lock, VAR_30);
  VAR_27->lflags &= ~VAR_9;
  FUNC_17(&VAR_27->lflags_lock, VAR_30);
  FUNC_6(VAR_27, VAR_38);




  if (VAR_38 == VAR_16 && VAR_21->hop_cnt) {
   VAR_39 = VAR_6 | VAR_5;
   goto done;
  }
  FUNC_9(VAR_27, VAR_9, 10);
  break;
 case 130:
  FUNC_6(VAR_27, VAR_14);
  break;
 case 131:
  FUNC_6(VAR_27, VAR_13);
  break;
 default:
  VAR_21->status |= VAR_8;
 }

 if (VAR_29) {
  VAR_25.event = VAR_0;
  FUNC_3(&VAR_25);
 }


 VAR_24->clientrereg_resv_subnetto |= VAR_29;

 goto get_only;

err:
 VAR_21->status |= VAR_8;
get_only:
 VAR_39 = FUNC_22(VAR_21, VAR_22, VAR_23);
done:
 return VAR_39;
}
