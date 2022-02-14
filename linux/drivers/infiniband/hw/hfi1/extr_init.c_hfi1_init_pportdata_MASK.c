
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {struct hfi1_pportdata* ppd; int qsfp_lock; int qsfp_work; } ;
struct hfi1_pportdata {int hw_pidx; int port; int* pkeys; int sm_trap_qp; int sa_qp; int cc_state; int cc_log_lock; int cc_state_lock; int cc_max_table_entries; TYPE_2__* cca_timer; int cca_timer_lock; int * hfi1_wq; TYPE_1__ qsfp_info; int hls_lock; int linkstate_active_work; int start_link_work; int link_bounce_work; int sma_message_work; int link_downgrade_work; int freeze_work; int link_down_work; int link_up_work; int link_vc_work; int part_enforce; scalar_t__* vl_xmit_flit_cnt; scalar_t__* port_vl_xmit_wait_last; int prev_link_width; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;
struct cc_state {int dummy; } ;
struct TYPE_6__ {int function; } ;
struct TYPE_5__ {int sl; TYPE_3__ hrtimer; scalar_t__ ccti; struct hfi1_pportdata* ppd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,struct cc_state*) ;
 int VAR_9 ;
 int FUNC_3 (struct hfi1_devdata*,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 struct cc_state* FUNC_5 (int,int ) ;
 scalar_t__ VAR_18 ;
 int FUNC_6 (int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (int *) ;

void FUNC_8(struct pci_dev *VAR_21, struct hfi1_pportdata *VAR_22,
    struct hfi1_devdata *VAR_23, u8 VAR_24, u8 VAR_25)
{
 int VAR_26;
 uint VAR_27;
 struct cc_state *VAR_28;

 VAR_22->dd = VAR_23;
 VAR_22->hw_pidx = VAR_24;
 VAR_22->port = VAR_25;
 VAR_22->prev_link_width = VAR_7;




 for (VAR_26 = 0; VAR_26 < VAR_1 + 1; VAR_26++) {
  VAR_22->port_vl_xmit_wait_last[VAR_26] = 0;
  VAR_22->vl_xmit_flit_cnt[VAR_26] = 0;
 }

 VAR_27 = 1;

 VAR_22->pkeys[VAR_27] = VAR_2;
 VAR_22->part_enforce |= VAR_4;

 if (VAR_18) {
  FUNC_3(VAR_23, "Faking data partition 0x8001 in idx %u\n",
      !VAR_27);
  VAR_22->pkeys[!VAR_27] = 0x8001;
 }

 FUNC_1(&VAR_22->link_vc_work, VAR_17);
 FUNC_1(&VAR_22->link_up_work, VAR_14);
 FUNC_1(&VAR_22->link_down_work, VAR_12);
 FUNC_1(&VAR_22->freeze_work, VAR_10);
 FUNC_1(&VAR_22->link_downgrade_work, VAR_13);
 FUNC_1(&VAR_22->sma_message_work, VAR_15);
 FUNC_1(&VAR_22->link_bounce_work, VAR_11);
 FUNC_0(&VAR_22->start_link_work, VAR_16);
 FUNC_1(&VAR_22->linkstate_active_work, VAR_20);
 FUNC_1(&VAR_22->qsfp_info.qsfp_work, VAR_19);

 FUNC_6(&VAR_22->hls_lock);
 FUNC_7(&VAR_22->qsfp_info.qsfp_lock);

 VAR_22->qsfp_info.ppd = VAR_22;
 VAR_22->sm_trap_qp = 0x0;
 VAR_22->sa_qp = 0x1;

 VAR_22->hfi1_wq = ((void*)0);

 FUNC_7(&VAR_22->cca_timer_lock);

 for (VAR_26 = 0; VAR_26 < VAR_8; VAR_26++) {
  FUNC_4(&VAR_22->cca_timer[VAR_26].hrtimer, VAR_0,
        VAR_5);
  VAR_22->cca_timer[VAR_26].ppd = VAR_22;
  VAR_22->cca_timer[VAR_26].sl = VAR_26;
  VAR_22->cca_timer[VAR_26].ccti = 0;
  VAR_22->cca_timer[VAR_26].hrtimer.function = VAR_9;
 }

 VAR_22->cc_max_table_entries = VAR_6;

 FUNC_7(&VAR_22->cc_state_lock);
 FUNC_7(&VAR_22->cc_log_lock);
 VAR_28 = FUNC_5(sizeof(*VAR_28), VAR_3);
 FUNC_2(VAR_22->cc_state, VAR_28);
 if (!VAR_28)
  goto bail;
 return;

bail:
 FUNC_3(VAR_23, "Congestion Control Agent disabled for port %d\n", VAR_25);
}
