
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i40iw_sc_cqp {int polarity; int dev; } ;
struct i40iw_manage_vf_pble_info {int pd_entry_cnt; int first_pd_index; int sd_index; int pd_pl_pba; scalar_t__ inv_pd_ent; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int* FUNC_2 (struct i40iw_sc_cqp*,int) ;
 int FUNC_3 (struct i40iw_sc_cqp*) ;
 int FUNC_4 (int*,int,int) ;

enum i40iw_status_code FUNC_5(struct i40iw_sc_cqp *VAR_11,
            struct i40iw_manage_vf_pble_info *VAR_12,
            u64 VAR_13,
            bool VAR_14)
{
 u64 *VAR_15;
 u64 VAR_16, VAR_17, VAR_18 = 0;

 VAR_15 = FUNC_2(VAR_11, VAR_13);
 if (!VAR_15)
  return VAR_10;

 VAR_16 = FUNC_0(VAR_12->pd_entry_cnt, VAR_2) |
     FUNC_0(VAR_12->first_pd_index, VAR_0) |
     FUNC_0(VAR_12->sd_index, VAR_4);
 FUNC_4(VAR_15, 16, VAR_16);

 VAR_17 = FUNC_0((VAR_12->inv_pd_ent ? 1 : 0), VAR_1) |
     FUNC_0(VAR_7, VAR_5) |
     FUNC_0(VAR_11->polarity, VAR_6);
 FUNC_4(VAR_15, 24, VAR_17);

 VAR_18 = FUNC_0(VAR_12->pd_pl_pba >> 3, VAR_3);
 FUNC_4(VAR_15, 32, VAR_18);

 FUNC_1(VAR_11->dev, VAR_9, "MANAGE VF_PBLE_BP WQE", VAR_15, VAR_8 * 8);

 if (VAR_14)
  FUNC_3(VAR_11);
 return 0;
}
