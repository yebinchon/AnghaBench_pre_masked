
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct i40iw_update_sds_info {int cnt; int hmc_fn_id; TYPE_1__* entry; } ;
struct i40iw_dma_mem {scalar_t__ pa; scalar_t__ va; } ;
struct i40iw_sc_cqp {int polarity; int dev; struct i40iw_dma_mem sdbuf; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int cmd; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,char*,int*,int) ;
 int FUNC_3 (int*,int) ;
 int* FUNC_4 (struct i40iw_sc_cqp*,int,int*) ;
 int FUNC_5 (char*,TYPE_1__*,int) ;
 int FUNC_6 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_7(struct i40iw_sc_cqp *VAR_11,
            struct i40iw_update_sds_info *VAR_12,
            u64 VAR_13)
{
 u64 VAR_14;
 u64 VAR_15;
 u64 *VAR_16;
 int VAR_17, VAR_18;
 struct i40iw_dma_mem *VAR_19 = &VAR_11->sdbuf;
 u64 VAR_20;
 u32 VAR_21;

 VAR_16 = FUNC_4(VAR_11, VAR_13, &VAR_21);
 if (!VAR_16)
  return VAR_9;

 FUNC_0(VAR_16);
 VAR_18 = (VAR_12->cnt > 3) ? 3 : VAR_12->cnt;
 VAR_17 = VAR_12->cnt - VAR_18;

 VAR_15 = FUNC_1(VAR_6, VAR_0) |
   FUNC_1(VAR_11->polarity, VAR_5) |
   FUNC_1(VAR_17, VAR_1);

 if (VAR_17) {
  VAR_20 = VAR_21 * VAR_10;
  FUNC_5((char *)VAR_19->va + VAR_20, &VAR_12->entry[3],
         VAR_17 << 4);
  VAR_14 = (u64)VAR_19->pa + VAR_20;
 } else {
  VAR_14 = 0;
 }
 VAR_14 |= FUNC_1(VAR_12->hmc_fn_id, VAR_3);

 FUNC_6(VAR_16, 16, VAR_14);

 switch (VAR_18) {
 case 3:
  FUNC_6(VAR_16, 48,
         (FUNC_1(VAR_12->entry[2].cmd, VAR_4) |
     FUNC_1(1, VAR_2)));

  FUNC_6(VAR_16, 56, VAR_12->entry[2].data);

 case 2:
  FUNC_6(VAR_16, 32,
         (FUNC_1(VAR_12->entry[1].cmd, VAR_4) |
     FUNC_1(1, VAR_2)));

  FUNC_6(VAR_16, 40, VAR_12->entry[1].data);

 case 1:
  FUNC_6(VAR_16, 0,
         FUNC_1(VAR_12->entry[0].cmd, VAR_4));

  FUNC_6(VAR_16, 8, VAR_12->entry[0].data);
  break;
 default:
  break;
 }

 FUNC_3(VAR_16, VAR_15);

 FUNC_2(VAR_11->dev, VAR_8, "UPDATE_PE_SDS WQE",
   VAR_16, VAR_7 * 8);
 return 0;
}
