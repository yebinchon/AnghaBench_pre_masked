
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40iw_vsi_init_info {TYPE_1__* params; int exception_lan_queue; int back_vsi; int dev; } ;
struct i40iw_sc_vsi {TYPE_2__* qos; int dev; int exception_lan_queue; int mtu; int back_vsi; } ;
struct TYPE_4__ {int qplist; int lock; int qs_handle; } ;
struct TYPE_3__ {int * qs_handle_list; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct i40iw_sc_vsi *VAR_2, struct i40iw_vsi_init_info *VAR_3)
{
 int VAR_4;

 VAR_2->dev = VAR_3->dev;
 VAR_2->back_vsi = VAR_3->back_vsi;
 VAR_2->mtu = VAR_3->params->mtu;
 VAR_2->exception_lan_queue = VAR_3->exception_lan_queue;
 FUNC_2(VAR_3->params->qs_handle_list);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_2->qos[VAR_4].qs_handle = VAR_3->params->qs_handle_list[VAR_4];
  FUNC_1(VAR_2->dev, VAR_0, "qset[%d]: %d\n", VAR_4,
       VAR_2->qos[VAR_4].qs_handle);
  FUNC_3(&VAR_2->qos[VAR_4].lock);
  FUNC_0(&VAR_2->qos[VAR_4].qplist);
 }
}
