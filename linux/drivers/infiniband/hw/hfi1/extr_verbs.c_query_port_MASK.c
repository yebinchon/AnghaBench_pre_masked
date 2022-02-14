
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rvt_dev_info {int dummy; } ;
struct ib_port_attr {int active_width; int active_speed; void* max_mtu; void* active_mtu; int max_vl_num; int gid_tbl_len; int phys_state; int state; int lmc; scalar_t__ lid; } ;
struct hfi1_pportdata {int ibmtu; int vls_supported; int link_speed_active; int link_width_active; int lmc; scalar_t__ lid; } ;
struct hfi1_ibdev {int dummy; } ;
struct hfi1_devdata {struct hfi1_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hfi1_devdata* FUNC_0 (struct hfi1_ibdev*) ;
 struct hfi1_ibdev* FUNC_1 (struct rvt_dev_info*) ;
 int FUNC_2 (struct hfi1_pportdata*) ;
 int FUNC_3 (struct hfi1_pportdata*) ;
 int VAR_2 ;
 void* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct rvt_dev_info *VAR_3, u8 VAR_4,
        struct ib_port_attr *VAR_5)
{
 struct hfi1_ibdev *VAR_6 = FUNC_1(VAR_3);
 struct hfi1_devdata *VAR_7 = FUNC_0(VAR_6);
 struct hfi1_pportdata *VAR_8 = &VAR_7->pport[VAR_4 - 1];
 u32 VAR_9 = VAR_8->lid;


 VAR_5->lid = VAR_9 ? VAR_9 : 0;
 VAR_5->lmc = VAR_8->lmc;

 VAR_5->state = FUNC_2(VAR_8);
 VAR_5->phys_state = FUNC_3(VAR_8);
 VAR_5->gid_tbl_len = VAR_0;
 VAR_5->active_width = (u8)FUNC_6(VAR_8->link_width_active);

 VAR_5->active_speed = (u8)FUNC_5(VAR_8->link_speed_active);
 VAR_5->max_vl_num = VAR_8->vls_supported;
 VAR_5->max_mtu = FUNC_4((!FUNC_7(VAR_2) ?
          4096 : VAR_2), VAR_1);
 VAR_5->active_mtu = !FUNC_7(VAR_8->ibmtu) ? VAR_5->max_mtu :
  FUNC_4(VAR_8->ibmtu, VAR_1);

 return 0;
}
