
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct i40iw_sc_cqp {int polarity; int dev; } ;
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
 scalar_t__ VAR_9 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_5(
    struct i40iw_sc_cqp *VAR_10,
    u64 VAR_11,
    u8 VAR_12,
    bool VAR_13,
    bool VAR_14)
{
 u64 *VAR_15;
 u64 VAR_16;

 if (VAR_12 >= VAR_9)
  return VAR_7;
 VAR_15 = FUNC_3(VAR_10, VAR_11);
 if (!VAR_15)
  return VAR_8;

 VAR_16 = FUNC_0(VAR_12, VAR_1) |
   FUNC_0(VAR_4, VAR_2) |
   FUNC_0(VAR_13, VAR_0) |
   FUNC_0(VAR_10->polarity, VAR_3);

 FUNC_2(VAR_15, VAR_16);
 FUNC_1(VAR_10->dev, VAR_6, "MANAGE_HMC_PM_FUNC_TABLE WQE",
   VAR_15, VAR_5 * 8);
 if (VAR_14)
  FUNC_4(VAR_10);
 return 0;
}
