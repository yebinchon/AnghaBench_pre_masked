
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_5(
    struct i40iw_sc_cqp *VAR_9,
    u64 VAR_10,
    u8 VAR_11,
    u8 VAR_12,
    bool VAR_13)
{
 u64 *VAR_14;
 u64 VAR_15;

 VAR_14 = FUNC_3(VAR_9, VAR_10);
 if (!VAR_14)
  return VAR_8;
 VAR_15 = FUNC_0(VAR_11, VAR_2) |
   FUNC_0(VAR_5, VAR_3) |
   FUNC_0(1, VAR_0) |
   FUNC_0(VAR_9->polarity, VAR_4) |
   FUNC_0(VAR_12, VAR_1);

 FUNC_2(VAR_14, VAR_15);

 FUNC_1(VAR_9->dev, VAR_7, "DEL_LOCAL_MAC_IPADDR WQE",
   VAR_14, VAR_6 * 8);

 if (VAR_13)
  FUNC_4(VAR_9);
 return 0;
}
