
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct i40iw_sc_cqp {int dev; int polarity; } ;
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i40iw_sc_cqp*,scalar_t__,int) ;
 int FUNC_2 (int ,int ,char*,int*,int) ;
 int FUNC_3 (struct i40iw_sc_cqp*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int*,int) ;
 int* FUNC_5 (struct i40iw_sc_cqp*,int) ;
 int FUNC_6 (struct i40iw_sc_cqp*) ;
 int FUNC_7 (struct i40iw_sc_cqp*,int ,int *) ;
 int FUNC_8 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_9(
    struct i40iw_sc_cqp *VAR_10,
    u64 VAR_11,
    u8 VAR_12,
    u8 VAR_13, bool VAR_14,
    bool VAR_15)
{
 u64 *VAR_16;
 u64 VAR_17;
 u32 VAR_18, VAR_19, VAR_20;
 enum i40iw_status_code VAR_21 = 0;

 VAR_16 = FUNC_5(VAR_10, VAR_11);
 if (!VAR_16)
  return VAR_9;

 FUNC_8(VAR_16, 16,
        (FUNC_0(VAR_12, VAR_1) |
    FUNC_0(VAR_13, VAR_2)));

 VAR_17 = FUNC_0(VAR_4, VAR_0) |
         FUNC_0(VAR_10->polarity, VAR_3);

 FUNC_4(VAR_16, VAR_17);

 FUNC_2(VAR_10->dev, VAR_7, "MANAGE_HMC_PM_FUNC_TABLE WQE",
   VAR_16, VAR_6 * 8);

 FUNC_3(VAR_10, &VAR_18, &VAR_19, &VAR_20);
 if (VAR_20)
  return VAR_8;

 if (VAR_14) {
  FUNC_6(VAR_10);
  if (VAR_15)
   VAR_21 = FUNC_1(VAR_10, VAR_19, 1000000);
  else
   VAR_21 = FUNC_7(VAR_10,
         VAR_5,
         ((void*)0));
 }

 return VAR_21;
}
