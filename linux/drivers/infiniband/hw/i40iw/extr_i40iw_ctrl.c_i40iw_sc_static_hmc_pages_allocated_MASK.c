
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i40iw_sc_cqp*,scalar_t__,int) ;
 int FUNC_2 (int ,int ,char*,int*,int) ;
 int FUNC_3 (struct i40iw_sc_cqp*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int*,int) ;
 int* FUNC_5 (struct i40iw_sc_cqp*,int) ;
 int FUNC_6 (struct i40iw_sc_cqp*) ;
 int FUNC_7 (struct i40iw_sc_cqp*,int ,int *) ;
 int FUNC_8 (int*,int,int) ;

enum i40iw_status_code FUNC_9(
     struct i40iw_sc_cqp *VAR_8,
     u64 VAR_9,
     u8 VAR_10,
     bool VAR_11,
     bool VAR_12)
{
 u64 VAR_13;
 u64 *VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 enum i40iw_status_code VAR_18 = 0;

 VAR_14 = FUNC_5(VAR_8, VAR_9);
 if (!VAR_14)
  return VAR_6;
 FUNC_8(VAR_14,
        16,
        FUNC_0(VAR_10, VAR_7));

 VAR_13 = FUNC_0(VAR_2, VAR_0) |
   FUNC_0(VAR_8->polarity, VAR_1);

 FUNC_4(VAR_14, VAR_13);

 FUNC_2(VAR_8->dev, VAR_4, "SHMC_PAGES_ALLOCATED WQE",
   VAR_14, VAR_3 * 8);
 FUNC_3(VAR_8, &VAR_16, &VAR_15, &VAR_17);
 if (VAR_17) {
  VAR_18 = VAR_5;
  return VAR_18;
 }
 if (VAR_11) {
  FUNC_6(VAR_8);
  if (VAR_12)

   VAR_18 = FUNC_1(VAR_8, VAR_15, 1000);
  else
   VAR_18 = FUNC_7(VAR_8,
         VAR_2,
         ((void*)0));
 }

 return VAR_18;
}
