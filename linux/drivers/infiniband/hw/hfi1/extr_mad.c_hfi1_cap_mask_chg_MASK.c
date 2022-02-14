
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {int cap_mask3; int new_cap_mask; int lid; } ;
struct TYPE_8__ {TYPE_2__ ntc_144; int issuer_lid; } ;
struct trap_node {int len; TYPE_3__ data; } ;
struct rvt_dev_info {int dummy; } ;
struct TYPE_9__ {int port_cap3_flags; int port_cap_flags; } ;
struct hfi1_ibport {TYPE_4__ rvp; } ;
struct hfi1_ibdev {int dummy; } ;
struct hfi1_devdata {TYPE_1__* pport; } ;
struct TYPE_10__ {int lid; } ;
struct TYPE_6__ {struct hfi1_ibport ibport_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct trap_node* FUNC_2 (int ,int ,int ) ;
 struct hfi1_devdata* FUNC_3 (struct hfi1_ibdev*) ;
 struct hfi1_ibdev* FUNC_4 (struct rvt_dev_info*) ;
 TYPE_5__* FUNC_5 (struct hfi1_ibport*) ;
 int FUNC_6 (struct hfi1_ibport*,struct trap_node*) ;

void FUNC_7(struct rvt_dev_info *VAR_2, u8 VAR_3)
{
 struct trap_node *VAR_4;
 struct hfi1_ibdev *VAR_5 = FUNC_4(VAR_2);
 struct hfi1_devdata *VAR_6 = FUNC_3(VAR_5);
 struct hfi1_ibport *VAR_7 = &VAR_6->pport[VAR_3 - 1].ibport_data;
 u32 VAR_8 = FUNC_5(VAR_7)->lid;

 VAR_4 = FUNC_2(VAR_0,
    VAR_1,
    VAR_8);
 if (!VAR_4)
  return;

 VAR_4->data.ntc_144.lid = VAR_4->data.issuer_lid;
 VAR_4->data.ntc_144.new_cap_mask = FUNC_1(VAR_7->rvp.port_cap_flags);
 VAR_4->data.ntc_144.cap_mask3 = FUNC_0(VAR_7->rvp.port_cap3_flags);

 VAR_4->len = sizeof(VAR_4->data);
 FUNC_6(VAR_7, VAR_4);
}
