
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ib_smp {int* data; int attr_mod; int attr_id; } ;
struct ib_port_attr {int lmc; int sm_sl; int state; int phys_state; int max_msg_sz; int active_width; int active_speed; int max_mtu; int active_mtu; int subnet_timeout; int max_vl_num; int init_type_reply; void* qkey_viol_cntr; void* bad_pkey_cntr; int pkey_tbl_len; int gid_tbl_len; int port_cap_flags; void* sm_lid; void* lid; } ;
struct ib_device {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_4__ {int pkey_table_len; int gid_table_len; } ;
struct TYPE_5__ {TYPE_1__ limits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_smp*) ;
 int FUNC_4 (struct ib_smp*) ;
 struct ib_smp* FUNC_5 (int,int ) ;
 struct ib_smp* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_2__*,int,int,int ,int *,int *,struct ib_smp*,struct ib_smp*) ;
 TYPE_2__* FUNC_8 (struct ib_device*) ;

__attribute__((used)) static int FUNC_9(struct ib_device *VAR_3,
       u8 VAR_4, struct ib_port_attr *VAR_5)
{
 struct ib_smp *VAR_6 = ((void*)0);
 struct ib_smp *VAR_7 = ((void*)0);
 int VAR_8 = -VAR_0;

 VAR_6 = FUNC_6(sizeof *VAR_6, VAR_1);
 VAR_7 = FUNC_5(sizeof *VAR_7, VAR_1);
 if (!VAR_6 || !VAR_7)
  goto out;



 FUNC_3(VAR_6);
 VAR_6->attr_id = VAR_2;
 VAR_6->attr_mod = FUNC_2(VAR_4);

 VAR_8 = FUNC_7(FUNC_8(VAR_3), 1, 1,
       VAR_4, ((void*)0), ((void*)0), VAR_6, VAR_7);
 if (VAR_8)
  goto out;

 VAR_5->lid = FUNC_0((__be16 *) (VAR_7->data + 16));
 VAR_5->lmc = VAR_7->data[34] & 0x7;
 VAR_5->sm_lid = FUNC_0((__be16 *) (VAR_7->data + 18));
 VAR_5->sm_sl = VAR_7->data[36] & 0xf;
 VAR_5->state = VAR_7->data[32] & 0xf;
 VAR_5->phys_state = VAR_7->data[33] >> 4;
 VAR_5->port_cap_flags = FUNC_1((__be32 *) (VAR_7->data + 20));
 VAR_5->gid_tbl_len = FUNC_8(VAR_3)->limits.gid_table_len;
 VAR_5->max_msg_sz = 0x80000000;
 VAR_5->pkey_tbl_len = FUNC_8(VAR_3)->limits.pkey_table_len;
 VAR_5->bad_pkey_cntr = FUNC_0((__be16 *) (VAR_7->data + 46));
 VAR_5->qkey_viol_cntr = FUNC_0((__be16 *) (VAR_7->data + 48));
 VAR_5->active_width = VAR_7->data[31] & 0xf;
 VAR_5->active_speed = VAR_7->data[35] >> 4;
 VAR_5->max_mtu = VAR_7->data[41] & 0xf;
 VAR_5->active_mtu = VAR_7->data[36] >> 4;
 VAR_5->subnet_timeout = VAR_7->data[51] & 0x1f;
 VAR_5->max_vl_num = VAR_7->data[37] >> 4;
 VAR_5->init_type_reply = VAR_7->data[41] >> 4;

 out:
 FUNC_4(VAR_6);
 FUNC_4(VAR_7);
 return VAR_8;
}
