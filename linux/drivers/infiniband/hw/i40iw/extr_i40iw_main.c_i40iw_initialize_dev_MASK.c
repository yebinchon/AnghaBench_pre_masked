
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vsi_info ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct i40iw_vsi_stats_info {int is_pf; int exception_lan_queue; int stats_initialize; void* pestat; int fcn_id; struct i40iw_vsi_stats_info* params; void* back_vsi; struct i40iw_sc_dev* dev; int vchnl_send; scalar_t__* qs_handle_list; scalar_t__ mtu; int debug_mask; TYPE_2__* hw; int bar0; int hmc_fn_id; int fpm_commit_buf; int fpm_commit_buf_pa; int fpm_query_buf; int fpm_query_buf_pa; } ;
struct i40iw_vsi_init_info {int is_pf; int exception_lan_queue; int stats_initialize; void* pestat; int fcn_id; struct i40iw_vsi_init_info* params; void* back_vsi; struct i40iw_sc_dev* dev; int vchnl_send; scalar_t__* qs_handle_list; scalar_t__ mtu; int debug_mask; TYPE_2__* hw; int bar0; int hmc_fn_id; int fpm_commit_buf; int fpm_commit_buf_pa; int fpm_query_buf; int fpm_query_buf_pa; } ;
struct i40iw_sc_dev {scalar_t__ is_pf; TYPE_1__* hmc_info; } ;
struct i40iw_l2params {int is_pf; int exception_lan_queue; int stats_initialize; void* pestat; int fcn_id; struct i40iw_l2params* params; void* back_vsi; struct i40iw_sc_dev* dev; int vchnl_send; scalar_t__* qs_handle_list; scalar_t__ mtu; int debug_mask; TYPE_2__* hw; int bar0; int hmc_fn_id; int fpm_commit_buf; int fpm_commit_buf_pa; int fpm_query_buf; int fpm_query_buf_pa; } ;
struct i40iw_hmc_pble_rsrc {int dummy; } ;
struct i40iw_hmc_obj_info {int dummy; } ;
struct i40iw_hmc_info {int dummy; } ;
struct i40iw_dma_mem {int va; int pa; } ;
struct i40iw_device_init_info {int is_pf; int exception_lan_queue; int stats_initialize; void* pestat; int fcn_id; struct i40iw_device_init_info* params; void* back_vsi; struct i40iw_sc_dev* dev; int vchnl_send; scalar_t__* qs_handle_list; scalar_t__ mtu; int debug_mask; TYPE_2__* hw; int bar0; int hmc_fn_id; int fpm_commit_buf; int fpm_commit_buf_pa; int fpm_query_buf; int fpm_query_buf_pa; } ;
struct TYPE_6__ {struct i40iw_hmc_obj_info* hmc_obj; } ;
struct TYPE_7__ {TYPE_1__ hmc; } ;
struct i40iw_device {int dcb; int * hmc_info_mem; int vsi; struct i40iw_sc_dev sc_dev; TYPE_2__ hw; struct i40iw_hmc_pble_rsrc* pble_rsrc; } ;
struct TYPE_9__ {TYPE_3__* prio_qos; } ;
struct TYPE_10__ {TYPE_4__ qos; scalar_t__ mtu; } ;
struct i40e_info {int fid; TYPE_5__ params; int hw_addr; scalar_t__ ftype; } ;
typedef int stats_info ;
typedef int l2params ;
typedef int info ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_8__ {scalar_t__ qs_handle; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct i40iw_sc_dev*,struct i40iw_vsi_stats_info*) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_dma_mem*,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,struct i40iw_vsi_stats_info*) ;
 int VAR_11 ;
 int FUNC_4 (int *,struct i40iw_vsi_stats_info*) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (struct i40iw_vsi_stats_info*,int ,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_8(struct i40iw_device *VAR_12,
         struct i40e_info *VAR_13)
{
 enum i40iw_status_code VAR_14;
 struct i40iw_sc_dev *VAR_15 = &VAR_12->sc_dev;
 struct i40iw_device_init_info VAR_16;
 struct i40iw_vsi_init_info VAR_17;
 struct i40iw_dma_mem VAR_18;
 struct i40iw_l2params VAR_19;
 u32 VAR_20;
 struct i40iw_vsi_stats_info VAR_21;
 u16 VAR_22 = VAR_8;
 u16 VAR_23;
 u32 VAR_24;

 FUNC_7(&VAR_19, 0, sizeof(VAR_19));
 FUNC_7(&VAR_16, 0, sizeof(VAR_16));
 VAR_20 = sizeof(struct i40iw_hmc_pble_rsrc) + sizeof(struct i40iw_hmc_info) +
    (sizeof(struct i40iw_hmc_obj_info) * VAR_7);
 VAR_12->hmc_info_mem = FUNC_6(VAR_20, VAR_0);
 if (!VAR_12->hmc_info_mem)
  return VAR_4;

 VAR_12->pble_rsrc = (struct i40iw_hmc_pble_rsrc *)VAR_12->hmc_info_mem;
 VAR_15->hmc_info = &VAR_12->hw.hmc;
 VAR_15->hmc_info->hmc_obj = (struct i40iw_hmc_obj_info *)(VAR_12->pble_rsrc + 1);
 VAR_14 = FUNC_1(VAR_12, &VAR_18, VAR_9,
           VAR_6);
 if (VAR_14)
  goto error;
 VAR_16.fpm_query_buf_pa = VAR_18.pa;
 VAR_16.fpm_query_buf = VAR_18.va;
 VAR_14 = FUNC_1(VAR_12, &VAR_18, VAR_2,
           VAR_5);
 if (VAR_14)
  goto error;
 VAR_16.fpm_commit_buf_pa = VAR_18.pa;
 VAR_16.fpm_commit_buf = VAR_18.va;
 VAR_16.hmc_fn_id = VAR_13->fid;
 VAR_16.is_pf = (VAR_13->ftype) ? 0 : 1;
 VAR_16.bar0 = VAR_13->hw_addr;
 VAR_16.hw = &VAR_12->hw;
 VAR_16.debug_mask = VAR_10;
 VAR_19.mtu =
  (VAR_13->params.mtu) ? VAR_13->params.mtu : VAR_3;
 for (VAR_24 = 0; VAR_24 < VAR_1; VAR_24++) {
  VAR_23 = VAR_13->params.qos.prio_qos[VAR_24].qs_handle;
  VAR_19.qs_handle_list[VAR_24] = VAR_23;
  if (VAR_22 == VAR_8)
   VAR_22 = VAR_23;
  else if ((VAR_23 != VAR_22) && (VAR_23 != VAR_8))
   VAR_12->dcb = 1;
 }
 FUNC_2("DCB is set/clear = %d\n", VAR_12->dcb);
 VAR_16.vchnl_send = VAR_11;
 VAR_14 = FUNC_0(&VAR_12->sc_dev, &VAR_16);

 if (VAR_14)
  goto error;
 FUNC_7(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.dev = &VAR_12->sc_dev;
 VAR_17.back_vsi = (void *)VAR_12;
 VAR_17.params = &VAR_19;
 VAR_17.exception_lan_queue = 1;
 FUNC_3(&VAR_12->vsi, &VAR_17);

 if (VAR_15->is_pf) {
  FUNC_7(&VAR_21, 0, sizeof(VAR_21));
  VAR_21.fcn_id = VAR_13->fid;
  VAR_21.pestat = FUNC_6(sizeof(*VAR_21.pestat), VAR_0);
  if (!VAR_21.pestat) {
   VAR_14 = VAR_4;
   goto error;
  }
  VAR_21.stats_initialize = 1;
  if (VAR_21.pestat)
   FUNC_4(&VAR_12->vsi, &VAR_21);
 }
 return VAR_14;
error:
 FUNC_5(VAR_12->hmc_info_mem);
 VAR_12->hmc_info_mem = ((void*)0);
 return VAR_14;
}
