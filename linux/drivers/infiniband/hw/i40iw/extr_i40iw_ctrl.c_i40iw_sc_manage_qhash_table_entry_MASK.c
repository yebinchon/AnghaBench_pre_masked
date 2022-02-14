
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct i40iw_sc_vsi {TYPE_1__* qos; } ;
struct i40iw_sc_cqp {scalar_t__ polarity; int dev; } ;
struct i40iw_qhash_table_info {int* mac_addr; scalar_t__ qp_num; scalar_t__ dest_port; scalar_t__ ipv4_valid; scalar_t__* dest_ip; size_t user_pri; scalar_t__ vlan_valid; scalar_t__ vlan_id; scalar_t__ entry_type; scalar_t__ src_port; scalar_t__* src_ip; scalar_t__ manage; struct i40iw_sc_vsi* vsi; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {scalar_t__ qs_handle; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,char*,int*,int) ;
 int FUNC_3 (int*,int) ;
 int* FUNC_4 (struct i40iw_sc_cqp*,int) ;
 int FUNC_5 (struct i40iw_sc_cqp*) ;
 int FUNC_6 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_7(
     struct i40iw_sc_cqp *VAR_20,
     struct i40iw_qhash_table_info *VAR_21,
     u64 VAR_22,
     bool VAR_23)
{
 u64 *VAR_24;
 u64 VAR_25 = 0;
 u64 VAR_26 = 0;
 u64 VAR_27;
 struct i40iw_sc_vsi *VAR_28 = VAR_21->vsi;

 VAR_24 = FUNC_4(VAR_20, VAR_22);
 if (!VAR_24)
  return VAR_18;

 VAR_27 = VAR_21->mac_addr[5] |
  FUNC_1(VAR_21->mac_addr[4], 8) |
  FUNC_1(VAR_21->mac_addr[3], 16) |
  FUNC_1(VAR_21->mac_addr[2], 24) |
  FUNC_1(VAR_21->mac_addr[1], 32) |
  FUNC_1(VAR_21->mac_addr[0], 40);

 FUNC_6(VAR_24, 0, VAR_27);

 VAR_25 = FUNC_0(VAR_21->qp_num, VAR_9) |
       FUNC_0(VAR_21->dest_port, VAR_4);
 if (VAR_21->ipv4_valid) {
  FUNC_6(VAR_24,
         48,
         FUNC_0(VAR_21->dest_ip[0], VAR_3));
 } else {
  FUNC_6(VAR_24,
         56,
         FUNC_0(VAR_21->dest_ip[0], VAR_0) |
         FUNC_0(VAR_21->dest_ip[1], VAR_1));

  FUNC_6(VAR_24,
         48,
         FUNC_0(VAR_21->dest_ip[2], VAR_2) |
         FUNC_0(VAR_21->dest_ip[3], VAR_3));
 }
 VAR_26 = FUNC_0(VAR_28->qos[VAR_21->user_pri].qs_handle, VAR_10);
 if (VAR_21->vlan_valid)
  VAR_26 |= FUNC_0(VAR_21->vlan_id, VAR_12);
 FUNC_6(VAR_24, 16, VAR_26);
 if (VAR_21->entry_type == VAR_19) {
  VAR_25 |= FUNC_0(VAR_21->src_port, VAR_11);
  if (!VAR_21->ipv4_valid) {
   FUNC_6(VAR_24,
          40,
          FUNC_0(VAR_21->src_ip[0], VAR_0) |
          FUNC_0(VAR_21->src_ip[1], VAR_1));
   FUNC_6(VAR_24,
          32,
          FUNC_0(VAR_21->src_ip[2], VAR_2) |
          FUNC_0(VAR_21->src_ip[3], VAR_3));
  } else {
   FUNC_6(VAR_24,
          32,
          FUNC_0(VAR_21->src_ip[0], VAR_3));
  }
 }

 FUNC_6(VAR_24, 8, VAR_25);
 VAR_27 = FUNC_0(VAR_20->polarity, VAR_14) |
        FUNC_0(VAR_15, VAR_8) |
        FUNC_0(VAR_21->manage, VAR_7) |
        FUNC_0(VAR_21->ipv4_valid, VAR_6) |
        FUNC_0(VAR_21->vlan_valid, VAR_13) |
        FUNC_0(VAR_21->entry_type, VAR_5);

 FUNC_3(VAR_24, VAR_27);

 FUNC_2(VAR_20->dev, VAR_17, "MANAGE_QHASH WQE",
   VAR_24, VAR_16 * 8);

 if (VAR_23)
  FUNC_5(VAR_20);
 return 0;
}
