
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct i40iw_sc_dev {scalar_t__ hmc_fn_id; int * fpm_commit_buf; int cqp; int fpm_commit_buf_pa; struct i40iw_hmc_info* hmc_info; } ;
struct i40iw_hmc_obj_info {scalar_t__ cnt; } ;
struct TYPE_2__ {int sd_cnt; } ;
struct i40iw_hmc_info {TYPE_1__ sd_table; struct i40iw_hmc_obj_info* hmc_obj; int hmc_fn_id; } ;
struct i40iw_dma_mem {int * va; int pa; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct i40iw_sc_dev*,int ,char*,int *,int ) ;
 int FUNC_1 (int ,int ,int ,struct i40iw_dma_mem*,int,scalar_t__) ;
 int FUNC_2 (int *,struct i40iw_hmc_obj_info*,int *) ;
 struct i40iw_hmc_info* FUNC_3 (struct i40iw_sc_dev*,scalar_t__) ;
 int FUNC_4 (int *,int,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_5(struct i40iw_sc_dev *VAR_10,
       u8 VAR_11)
{
 struct i40iw_hmc_info *VAR_12;
 struct i40iw_hmc_obj_info *VAR_13;
 u64 *VAR_14;
 struct i40iw_dma_mem VAR_15;
 u32 VAR_16, VAR_17;
 enum i40iw_status_code VAR_18 = 0;
 bool VAR_19 = 1;
 u8 VAR_20;

 if (VAR_11 >= VAR_9 ||
     (VAR_10->hmc_fn_id != VAR_11 && VAR_11 < VAR_6))
  return VAR_5;

 if (VAR_11 == VAR_10->hmc_fn_id) {
  VAR_12 = VAR_10->hmc_info;
 } else {
  VAR_12 = FUNC_3(VAR_10, VAR_11);
  VAR_19 = 0;
 }
 if (!VAR_12)
  return VAR_4;

 VAR_13 = VAR_12->hmc_obj;
 VAR_14 = VAR_10->fpm_commit_buf;


 for (VAR_16 = VAR_8, VAR_17 = 0; VAR_16 <= VAR_7;
      VAR_16++, VAR_17 += 8)
  FUNC_4(VAR_14, VAR_17, (u64)VAR_13[VAR_16].cnt);

 FUNC_4(VAR_14, 40, 0);

 VAR_15.pa = VAR_10->fpm_commit_buf_pa;
 VAR_15.va = VAR_10->fpm_commit_buf;
 VAR_20 = VAR_19 ? (u8)VAR_2 :
   (u8)VAR_1;
 VAR_18 = FUNC_1(
     VAR_10->cqp,
     0,
     VAR_12->hmc_fn_id,
     &VAR_15,
     1,
     VAR_20);


 if (!VAR_18)
  VAR_18 = FUNC_2(VAR_10->fpm_commit_buf,
        VAR_12->hmc_obj,
        &VAR_12->sd_table.sd_cnt);

 FUNC_0(VAR_10, VAR_3, "COMMIT FPM BUFFER",
   VAR_15.va, VAR_0);

 return VAR_18;
}
