
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i40iw_sc_cqp {int dev; int polarity; } ;
struct i40iw_apbvt_info {int add; int port; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(
    struct i40iw_sc_cqp *VAR_7,
    struct i40iw_apbvt_info *VAR_8,
    u64 VAR_9,
    bool VAR_10)
{
 u64 *VAR_11;
 u64 VAR_12;

 VAR_11 = FUNC_3(VAR_7, VAR_9);
 if (!VAR_11)
  return VAR_6;

 FUNC_5(VAR_11, 16, VAR_8->port);

 VAR_12 = FUNC_0(VAR_3, VAR_1) |
   FUNC_0(VAR_8->add, VAR_0) |
   FUNC_0(VAR_7->polarity, VAR_2);

 FUNC_2(VAR_11, VAR_12);

 FUNC_1(VAR_7->dev, VAR_5, "MANAGE_APBVT WQE",
   VAR_11, VAR_4 * 8);

 if (VAR_10)
  FUNC_4(VAR_7);
 return 0;
}
