
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct i40iw_sc_cqp {int dev; int polarity; } ;
struct i40iw_dma_mem {scalar_t__ pa; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i40iw_sc_cqp*,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,char*,int*,int) ;
 int FUNC_3 (struct i40iw_sc_cqp*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int*,int) ;
 int* FUNC_5 (struct i40iw_sc_cqp*,int) ;
 int FUNC_6 (struct i40iw_sc_cqp*) ;
 int FUNC_7 (struct i40iw_sc_cqp*) ;
 int FUNC_8 (int*,int,scalar_t__) ;

__attribute__((used)) static enum i40iw_status_code FUNC_9(
     struct i40iw_sc_cqp *VAR_10,
     u64 VAR_11,
     u8 VAR_12,
     struct i40iw_dma_mem *VAR_13,
     bool VAR_14,
     u8 VAR_15)
{
 u64 *VAR_16;
 u64 VAR_17;
 u32 VAR_18, VAR_19, VAR_20;
 enum i40iw_status_code VAR_21 = 0;

 VAR_16 = FUNC_5(VAR_10, VAR_11);
 if (!VAR_16)
  return VAR_9;

 FUNC_8(VAR_16, 16, VAR_12);
 FUNC_8(VAR_16, 32, VAR_13->pa);

 VAR_17 = FUNC_0(VAR_2, VAR_0) |
   FUNC_0(VAR_10->polarity, VAR_1);

 FUNC_4(VAR_16, VAR_17);

 FUNC_2(VAR_10->dev, VAR_6, "QUERY_FPM WQE",
   VAR_16, VAR_5 * 8);


 FUNC_3(VAR_10, &VAR_19, &VAR_18, &VAR_20);

 if (VAR_20)
  return VAR_8;

 if (VAR_14) {
  FUNC_6(VAR_10);
  if (VAR_15 == VAR_4)
   VAR_21 = FUNC_1(VAR_10, VAR_18, VAR_7);
  else if (VAR_15 == VAR_3)
   VAR_21 = FUNC_7(VAR_10);
 }

 return VAR_21;
}
