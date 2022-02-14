
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct i40iw_virt_mem {int va; } ;
struct TYPE_3__ {int sd_cnt; int sd_entry; } ;
struct i40iw_hmc_info {int first_sd_index; TYPE_1__ sd_table; int hmc_obj; int hmc_fn_id; } ;
struct i40iw_vfdev {size_t iw_vf_idx; scalar_t__ fpm_query_buf; int fpm_query_buf_pa; struct i40iw_hmc_info hmc_info; } ;
struct i40iw_sc_dev {int hw; int hmc_fn_id; int hmc_fpm_misc; int cqp; TYPE_2__* vf_fpm_query_buf; scalar_t__ fpm_query_buf; int fpm_query_buf_pa; struct i40iw_hmc_info* hmc_info; } ;
struct i40iw_hmc_sd_entry {int dummy; } ;
struct i40iw_dma_mem {scalar_t__ va; int pa; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_4__ {int pa; scalar_t__ va; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i40iw_sc_dev*,TYPE_2__*) ;
 int FUNC_1 (int ,struct i40iw_virt_mem*,int) ;
 int FUNC_2 (struct i40iw_sc_dev*,struct i40iw_dma_mem*,int ) ;
 int FUNC_3 (struct i40iw_sc_dev*,struct i40iw_dma_mem*,int ) ;
 int FUNC_4 (struct i40iw_sc_dev*,int ,char*,struct i40iw_vfdev*,struct i40iw_hmc_info*,...) ;
 int FUNC_5 (struct i40iw_sc_dev*,int ,char*,scalar_t__,int ) ;
 int FUNC_6 (int *,int ,int*) ;
 int FUNC_7 (int *,struct i40iw_hmc_info*,int *) ;
 int FUNC_8 (int ,int ,int ,struct i40iw_dma_mem*,int,int ) ;
 struct i40iw_vfdev* FUNC_9 (struct i40iw_sc_dev*,int ) ;

enum i40iw_status_code FUNC_10(struct i40iw_sc_dev *VAR_8, u8 VAR_9)
{
 struct i40iw_hmc_info *VAR_10;
 struct i40iw_dma_mem VAR_11;
 struct i40iw_virt_mem VAR_12;
 struct i40iw_vfdev *VAR_13 = ((void*)0);
 u32 VAR_14;
 enum i40iw_status_code VAR_15 = 0;
 bool VAR_16 = 1;
 u16 VAR_17;
 u8 VAR_18;

 if (VAR_9 >= VAR_6 ||
     (VAR_8->hmc_fn_id != VAR_9 && VAR_9 < VAR_5))
  return VAR_3;

 FUNC_4(VAR_8, VAR_2, "hmc_fn_id %u, dev->hmc_fn_id %u\n", VAR_9,
      VAR_8->hmc_fn_id);
 if (VAR_9 == VAR_8->hmc_fn_id) {
  VAR_10 = VAR_8->hmc_info;
  VAR_11.pa = VAR_8->fpm_query_buf_pa;
  VAR_11.va = VAR_8->fpm_query_buf;
 } else {
  VAR_13 = FUNC_9(VAR_8, VAR_9);
  if (!VAR_13)
   return VAR_4;

  VAR_10 = &VAR_13->hmc_info;
  VAR_17 = VAR_13->iw_vf_idx;
  FUNC_4(VAR_8, VAR_2, "vf_dev %p, hmc_info %p, hmc_obj %p\n", VAR_13,
       VAR_10, VAR_10->hmc_obj);
  if (!VAR_13->fpm_query_buf) {
   if (!VAR_8->vf_fpm_query_buf[VAR_17].va) {
    VAR_15 = FUNC_0(VAR_8,
             &VAR_8->vf_fpm_query_buf[VAR_17]);
    if (VAR_15)
     return VAR_15;
   }
   VAR_13->fpm_query_buf = VAR_8->vf_fpm_query_buf[VAR_17].va;
   VAR_13->fpm_query_buf_pa = VAR_8->vf_fpm_query_buf[VAR_17].pa;
  }
  VAR_11.pa = VAR_13->fpm_query_buf_pa;
  VAR_11.va = VAR_13->fpm_query_buf;






  VAR_16 = 0;
 }

 VAR_10->hmc_fn_id = VAR_9;

 if (VAR_9 != VAR_8->hmc_fn_id) {
  VAR_15 =
   FUNC_3(VAR_8, &VAR_11, VAR_9);
 } else {
  VAR_18 = VAR_16 ? (u8)VAR_1 :
       (u8)VAR_0;

  VAR_15 = FUNC_8(
     VAR_8->cqp,
     0,
     VAR_10->hmc_fn_id,
     &VAR_11,
     1,
     VAR_18);
 }
 if (VAR_15)
  return VAR_15;


 VAR_15 =
  FUNC_7((u64 *)VAR_11.va,
          VAR_10,
          &VAR_8->hmc_fpm_misc);
 if (VAR_15)
  return VAR_15;
 FUNC_5(VAR_8, VAR_2, "QUERY FPM BUFFER",
   VAR_11.va, VAR_7);

 if (VAR_9 != VAR_8->hmc_fn_id) {
  FUNC_2(VAR_8, &VAR_11, VAR_9);


  FUNC_6((u64 *)VAR_11.va, VAR_10->hmc_obj, &VAR_10->sd_table.sd_cnt);
  VAR_14 = sizeof(struct i40iw_hmc_sd_entry) *
      (VAR_10->sd_table.sd_cnt + VAR_10->first_sd_index);
  VAR_15 = FUNC_1(VAR_8->hw, &VAR_12, VAR_14);
  if (VAR_15)
   return VAR_15;
  VAR_10->sd_table.sd_entry = VAR_12.va;
 }

 return VAR_15;
}
