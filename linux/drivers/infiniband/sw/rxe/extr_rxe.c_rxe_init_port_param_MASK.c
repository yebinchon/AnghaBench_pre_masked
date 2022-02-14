
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phys_state; int active_speed; int active_width; int init_type_reply; int subnet_timeout; int sm_sl; int max_vl_num; int lmc; int sm_lid; int lid; int pkey_tbl_len; int qkey_viol_cntr; int bad_pkey_cntr; int max_msg_sz; int port_cap_flags; int gid_tbl_len; int active_mtu; int max_mtu; int state; } ;
struct rxe_port {int subnet_prefix; int mtu_cap; TYPE_1__ attr; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct rxe_port *VAR_20)
{
 VAR_20->attr.state = VAR_2;
 VAR_20->attr.max_mtu = VAR_1;
 VAR_20->attr.active_mtu = VAR_0;
 VAR_20->attr.gid_tbl_len = VAR_6;
 VAR_20->attr.port_cap_flags = VAR_14;
 VAR_20->attr.max_msg_sz = VAR_10;
 VAR_20->attr.bad_pkey_cntr = VAR_5;
 VAR_20->attr.qkey_viol_cntr = VAR_15;
 VAR_20->attr.pkey_tbl_len = VAR_13;
 VAR_20->attr.lid = VAR_8;
 VAR_20->attr.sm_lid = VAR_16;
 VAR_20->attr.lmc = VAR_9;
 VAR_20->attr.max_vl_num = VAR_11;
 VAR_20->attr.sm_sl = VAR_17;
 VAR_20->attr.subnet_timeout = VAR_19;
 VAR_20->attr.init_type_reply = VAR_7;
 VAR_20->attr.active_width = VAR_4;
 VAR_20->attr.active_speed = VAR_3;
 VAR_20->attr.phys_state = VAR_12;
 VAR_20->mtu_cap = FUNC_1(VAR_0);
 VAR_20->subnet_prefix = FUNC_0(VAR_18);

 return 0;
}
