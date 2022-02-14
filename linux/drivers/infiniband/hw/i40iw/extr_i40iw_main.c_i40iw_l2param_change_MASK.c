
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40iw_l2params {scalar_t__ mtu; int * qs_handle_list; } ;
struct l2params_work {int work; struct i40iw_l2params l2params; struct i40iw_device* iwdev; } ;
struct TYPE_6__ {scalar_t__ mtu; } ;
struct i40iw_device {int param_wq; TYPE_3__ vsi; int params_busy; } ;
struct i40iw_handler {struct i40iw_device device; } ;
struct TYPE_5__ {TYPE_1__* prio_qos; } ;
struct i40e_params {scalar_t__ mtu; TYPE_2__ qos; } ;
struct i40e_info {int dummy; } ;
struct i40e_client {int dummy; } ;
struct TYPE_4__ {int qs_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct i40iw_handler* FUNC_3 (struct i40e_info*) ;
 int VAR_2 ;
 struct l2params_work* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct i40e_info *VAR_3, struct i40e_client *VAR_4,
     struct i40e_params *VAR_5)
{
 struct i40iw_handler *VAR_6;
 struct i40iw_l2params *VAR_7;
 struct l2params_work *VAR_8;
 struct i40iw_device *VAR_9;
 int VAR_10;

 VAR_6 = FUNC_3(VAR_3);
 if (!VAR_6)
  return;

 VAR_9 = &VAR_6->device;

 if (FUNC_2(&VAR_9->params_busy))
  return;


 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return;

 FUNC_1(&VAR_9->params_busy);

 VAR_8->iwdev = VAR_9;
 VAR_7 = &VAR_8->l2params;
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  VAR_7->qs_handle_list[VAR_10] = VAR_5->qos.prio_qos[VAR_10].qs_handle;

 VAR_7->mtu = (VAR_5->mtu) ? VAR_5->mtu : VAR_9->vsi.mtu;

 FUNC_0(&VAR_8->work, VAR_2);
 FUNC_5(VAR_9->param_wq, &VAR_8->work);
}
