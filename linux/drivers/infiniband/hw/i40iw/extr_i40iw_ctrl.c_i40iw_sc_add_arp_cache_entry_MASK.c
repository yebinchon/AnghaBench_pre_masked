
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i40iw_sc_cqp {int polarity; int dev; } ;
struct i40iw_add_arp_cache_entry_info {int reach_max; int* mac_addr; int arp_index; scalar_t__ permanent; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,char*,int*,int) ;
 int FUNC_3 (int*,int) ;
 int* FUNC_4 (struct i40iw_sc_cqp*,int) ;
 int FUNC_5 (struct i40iw_sc_cqp*) ;
 int FUNC_6 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_7(
    struct i40iw_sc_cqp *VAR_8,
    struct i40iw_add_arp_cache_entry_info *VAR_9,
    u64 VAR_10,
    bool VAR_11)
{
 u64 *VAR_12;
 u64 VAR_13, VAR_14;

 VAR_12 = FUNC_4(VAR_8, VAR_10);
 if (!VAR_12)
  return VAR_7;
 FUNC_6(VAR_12, 8, VAR_9->reach_max);

 VAR_13 = VAR_9->mac_addr[5] |
        FUNC_1(VAR_9->mac_addr[4], 8) |
        FUNC_1(VAR_9->mac_addr[3], 16) |
        FUNC_1(VAR_9->mac_addr[2], 24) |
        FUNC_1(VAR_9->mac_addr[1], 32) |
        FUNC_1(VAR_9->mac_addr[0], 40);

 FUNC_6(VAR_12, 16, VAR_13);

 VAR_14 = VAR_9->arp_index |
   FUNC_0(VAR_4, VAR_2) |
   FUNC_0((VAR_9->permanent ? 1 : 0), VAR_1) |
   FUNC_0(1, VAR_0) |
   FUNC_0(VAR_8->polarity, VAR_3);

 FUNC_3(VAR_12, VAR_14);

 FUNC_2(VAR_8->dev, VAR_6, "ARP_CACHE_ENTRY WQE",
   VAR_12, VAR_5 * 8);

 if (VAR_11)
  FUNC_5(VAR_8);
 return 0;
}
