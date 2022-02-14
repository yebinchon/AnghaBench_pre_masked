
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rvt_ibport {int subnet_timeout; int qkey_violations; int pkey_violations; int port_cap_flags; int sm_sl; int sm_lid; } ;
struct TYPE_2__ {int (* query_port_state ) (struct rvt_dev_info*,int ,struct ib_port_attr*) ;} ;
struct rvt_dev_info {TYPE_1__ driver_f; struct rvt_ibport** ports; } ;
struct ib_port_attr {int max_msg_sz; scalar_t__ init_type_reply; int subnet_timeout; int qkey_viol_cntr; int bad_pkey_cntr; int pkey_tbl_len; int port_cap_flags; int sm_sl; int sm_lid; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct rvt_dev_info* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (struct ib_device*,int ) ;
 int FUNC_2 (struct rvt_dev_info*) ;
 int FUNC_3 (struct rvt_dev_info*,int ,struct ib_port_attr*) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_1, u8 VAR_2,
     struct ib_port_attr *VAR_3)
{
 struct rvt_dev_info *VAR_4 = FUNC_0(VAR_1);
 struct rvt_ibport *VAR_5;
 int VAR_6 = FUNC_1(VAR_1, VAR_2);

 if (VAR_6 < 0)
  return -VAR_0;

 VAR_5 = VAR_4->ports[VAR_6];

 VAR_3->sm_lid = VAR_5->sm_lid;
 VAR_3->sm_sl = VAR_5->sm_sl;
 VAR_3->port_cap_flags = VAR_5->port_cap_flags;
 VAR_3->max_msg_sz = 0x80000000;
 VAR_3->pkey_tbl_len = FUNC_2(VAR_4);
 VAR_3->bad_pkey_cntr = VAR_5->pkey_violations;
 VAR_3->qkey_viol_cntr = VAR_5->qkey_violations;
 VAR_3->subnet_timeout = VAR_5->subnet_timeout;
 VAR_3->init_type_reply = 0;


 return VAR_4->driver_f.query_port_state(VAR_4, VAR_2, VAR_3);
}
