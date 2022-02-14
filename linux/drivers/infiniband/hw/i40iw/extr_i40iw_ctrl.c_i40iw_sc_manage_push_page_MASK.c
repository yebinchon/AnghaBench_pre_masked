
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i40iw_sc_cqp {scalar_t__ polarity; int dev; } ;
struct i40iw_cqp_manage_push_page_info {scalar_t__ push_idx; scalar_t__ free_page; int qs_handle; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(
    struct i40iw_sc_cqp *VAR_10,
    struct i40iw_cqp_manage_push_page_info *VAR_11,
    u64 VAR_12,
    bool VAR_13)
{
 u64 *VAR_14;
 u64 VAR_15;

 if (VAR_11->push_idx >= VAR_9)
  return VAR_7;

 VAR_14 = FUNC_3(VAR_10, VAR_12);
 if (!VAR_14)
  return VAR_8;

 FUNC_5(VAR_14, 16, VAR_11->qs_handle);

 VAR_15 = FUNC_0(VAR_11->push_idx, VAR_1) |
   FUNC_0(VAR_4, VAR_2) |
   FUNC_0(VAR_10->polarity, VAR_3) |
   FUNC_0(VAR_11->free_page, VAR_0);

 FUNC_2(VAR_14, VAR_15);

 FUNC_1(VAR_10->dev, VAR_6, "MANAGE_PUSH_PAGES WQE",
   VAR_14, VAR_5 * 8);

 if (VAR_13)
  FUNC_4(VAR_10);
 return 0;
}
