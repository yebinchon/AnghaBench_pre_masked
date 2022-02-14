
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i40iw_sc_cqp {int dev; int polarity; } ;
struct i40iw_local_mac_ipaddr_entry_info {int* mac_addr; int entry_idx; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,char*,int*,int) ;
 int FUNC_3 (int*,int) ;
 int* FUNC_4 (struct i40iw_sc_cqp*,int) ;
 int FUNC_5 (struct i40iw_sc_cqp*) ;
 int FUNC_6 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_7(
    struct i40iw_sc_cqp *VAR_7,
    struct i40iw_local_mac_ipaddr_entry_info *VAR_8,
    u64 VAR_9,
    bool VAR_10)
{
 u64 *VAR_11;
 u64 VAR_12, VAR_13;

 VAR_11 = FUNC_4(VAR_7, VAR_9);
 if (!VAR_11)
  return VAR_6;
 VAR_12 = VAR_8->mac_addr[5] |
  FUNC_1(VAR_8->mac_addr[4], 8) |
  FUNC_1(VAR_8->mac_addr[3], 16) |
  FUNC_1(VAR_8->mac_addr[2], 24) |
  FUNC_1(VAR_8->mac_addr[1], 32) |
  FUNC_1(VAR_8->mac_addr[0], 40);

 FUNC_6(VAR_11, 32, VAR_12);

 VAR_13 = FUNC_0(VAR_8->entry_idx, VAR_0) |
   FUNC_0(VAR_3, VAR_1) |
   FUNC_0(VAR_7->polarity, VAR_2);

 FUNC_3(VAR_11, VAR_13);

 FUNC_2(VAR_7->dev, VAR_5, "ADD_LOCAL_MAC_IPADDR WQE",
   VAR_11, VAR_4 * 8);

 if (VAR_10)
  FUNC_5(VAR_7);
 return 0;
}
