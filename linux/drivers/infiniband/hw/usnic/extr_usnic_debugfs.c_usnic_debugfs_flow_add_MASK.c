
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_ib_qp_grp_flow {int dentry_name; int dbgfs_dentry; TYPE_1__* flow; } ;
struct TYPE_2__ {int flow_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct usnic_ib_qp_grp_flow*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,char*,int ) ;

void FUNC_2(struct usnic_ib_qp_grp_flow *VAR_3)
{
 FUNC_1(VAR_3->dentry_name, sizeof(VAR_3->dentry_name),
   "%u", VAR_3->flow->flow_id);
 VAR_3->dbgfs_dentry = FUNC_0(VAR_3->dentry_name,
       VAR_0,
       VAR_2,
       VAR_3,
       &VAR_1);
}
